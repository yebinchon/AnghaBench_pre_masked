
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce_evt_llist {int llnode; int mce; } ;
struct mce {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mce*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,struct mce*,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct mce *VAR_4)
{
 struct mce_evt_llist *VAR_5;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = (void *)FUNC_1(VAR_3, sizeof(*VAR_5));
 if (!VAR_5) {
  FUNC_4("MCE records pool full!\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_5->mce, VAR_4, sizeof(*VAR_4));
 FUNC_2(&VAR_5->llnode, &VAR_2);

 return 0;
}
