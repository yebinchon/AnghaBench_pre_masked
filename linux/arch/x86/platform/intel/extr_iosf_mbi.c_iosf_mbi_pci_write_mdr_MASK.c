
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4, VAR_3, VAR_7);
 if (VAR_8 < 0)
  goto fail_write;

 if (VAR_5) {
  VAR_8 = FUNC_1(VAR_4, VAR_1,
      VAR_5);
  if (VAR_8 < 0)
   goto fail_write;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_6);
 if (VAR_8 < 0)
  goto fail_write;

 return 0;

fail_write:
 FUNC_0(&VAR_4->dev, "PCI config access failed with %d\n", VAR_8);
 return VAR_8;
}
