
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int msi_index; } ;
struct msi_desc {int list; TYPE_1__ fsl_mc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct msi_desc* FUNC_1 (struct device*,int,int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, unsigned int VAR_2)

{
 unsigned int VAR_3;
 int VAR_4;
 struct msi_desc *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_5 = FUNC_1(VAR_1, 1, ((void*)0));
  if (!VAR_5) {
   FUNC_2(VAR_1, "Failed to allocate msi entry\n");
   VAR_4 = -VAR_0;
   goto cleanup_msi_descs;
  }

  VAR_5->fsl_mc.msi_index = VAR_3;
  FUNC_0(&VAR_5->list);
  FUNC_5(&VAR_5->list, FUNC_3(VAR_1));
 }

 return 0;

cleanup_msi_descs:
 FUNC_4(VAR_1);
 return VAR_4;
}
