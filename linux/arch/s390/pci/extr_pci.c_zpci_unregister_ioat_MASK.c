
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct zpci_fib {int member_0; } ;
struct zpci_dev {int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct zpci_fib*,int*) ;

int FUNC_2(struct zpci_dev *VAR_2, u8 VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_2->fh, VAR_3, VAR_1);
 struct zpci_fib VAR_5 = {0};
 u8 VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_4, &VAR_5, &VAR_7);
 if (VAR_6 == 3)
  VAR_6 = 0;
 return VAR_6 ? -VAR_0 : 0;
}
