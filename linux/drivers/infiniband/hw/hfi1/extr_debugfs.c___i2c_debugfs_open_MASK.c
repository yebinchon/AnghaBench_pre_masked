
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct hfi1_pportdata {int dd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct hfi1_pportdata* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2, u32 VAR_3)
{
 struct hfi1_pportdata *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_4->dd, FUNC_1(VAR_3), 0);
 if (VAR_5)
  FUNC_2(VAR_0);

 return VAR_5;
}
