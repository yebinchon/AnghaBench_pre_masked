
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct hfi1_pportdata {int dd; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int) ;
 struct hfi1_pportdata* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct hfi1_pportdata *VAR_4 = FUNC_2(VAR_3);

 if (VAR_1)
  FUNC_1(VAR_4->dd, 0);
 FUNC_0(0, &VAR_0);

 return 0;
}
