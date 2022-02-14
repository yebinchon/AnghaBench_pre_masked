
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct zpci_fib {int member_0; } ;
struct zpci_dev {int * fmb; int fh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,struct zpci_fib*,int*) ;

int FUNC_3(struct zpci_dev *VAR_4)
{
 u64 VAR_5 = FUNC_0(VAR_4->fh, 0, VAR_2);
 struct zpci_fib VAR_6 = {0};
 u8 VAR_7, VAR_8;

 if (!VAR_4->fmb)
  return -VAR_0;


 VAR_7 = FUNC_2(VAR_5, &VAR_6, &VAR_8);
 if (VAR_7 == 3)
  VAR_7 = 0;

 if (!VAR_7) {
  FUNC_1(VAR_3, VAR_4->fmb);
  VAR_4->fmb = ((void*)0);
 }
 return VAR_7 ? -VAR_1 : 0;
}
