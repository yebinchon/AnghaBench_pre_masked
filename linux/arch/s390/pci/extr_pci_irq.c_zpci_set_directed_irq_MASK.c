
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int dibvo; int noi; } ;
struct zpci_fib {int fmt; TYPE_1__ fmt1; int member_0; } ;
struct zpci_dev {int msi_first_bit; int msi_nr_irqs; int fh; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct zpci_fib*,int *) ;

__attribute__((used)) static int FUNC_2(struct zpci_dev *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_2->fh, 0, VAR_1);
 struct zpci_fib VAR_4 = {0};
 u8 VAR_5;

 VAR_4.fmt = 1;
 VAR_4.fmt1.noi = VAR_2->msi_nr_irqs;
 VAR_4.fmt1.dibvo = VAR_2->msi_first_bit;

 return FUNC_1(VAR_3, &VAR_4, &VAR_5) ? -VAR_0 : 0;
}
