
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_zip_ctrl {TYPE_1__* files; int debug_root; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int index; struct hisi_zip_ctrl* ctrl; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 struct dentry* FUNC_0 (int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_1 (struct hisi_zip_ctrl*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hisi_zip_ctrl *VAR_5)
{
 struct dentry *VAR_6;
 int VAR_7;

 for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++) {
  FUNC_2(&VAR_5->files[VAR_7].lock);
  VAR_5->files[VAR_7].ctrl = VAR_5;
  VAR_5->files[VAR_7].index = VAR_7;

  VAR_6 = FUNC_0(VAR_3[VAR_7], 0600,
       VAR_5->debug_root, VAR_5->files + VAR_7,
       &VAR_4);
  if (!VAR_6)
   return -VAR_0;
 }

 return FUNC_1(VAR_5);
}
