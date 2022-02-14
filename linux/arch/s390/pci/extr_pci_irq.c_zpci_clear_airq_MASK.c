
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct zpci_fib {int member_0; } ;
struct zpci_dev {int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct zpci_fib*,int*) ;

__attribute__((used)) static int FUNC_2(struct zpci_dev *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_2->fh, 0, VAR_1);
 struct zpci_fib VAR_4 = {0};
 u8 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3, &VAR_4, &VAR_6);
 if (VAR_5 == 3 || (VAR_5 == 1 && VAR_6 == 24))

  VAR_5 = 0;

 return VAR_5 ? -VAR_0 : 0;
}
