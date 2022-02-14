
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct edac_pci_ctl_info {scalar_t__ op_state; int work; int (* edac_check ) (struct edac_pci_ctl_info*) ;} ;
struct delayed_work {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (unsigned long) ;
 int FUNC_8 (struct edac_pci_ctl_info*) ;
 struct delayed_work* FUNC_9 (struct work_struct*) ;
 struct edac_pci_ctl_info* FUNC_10 (struct delayed_work*) ;

__attribute__((used)) static void FUNC_11(struct work_struct *VAR_2)
{
 struct delayed_work *VAR_3 = FUNC_9(VAR_2);
 struct edac_pci_ctl_info *VAR_4 = FUNC_10(VAR_3);
 int VAR_5;
 unsigned long VAR_6;

 FUNC_0(3, "checking\n");

 FUNC_5(&VAR_1);

 if (VAR_4->op_state != VAR_0) {
  FUNC_6(&VAR_1);
  return;
 }

 if (FUNC_1())
  VAR_4->edac_check(VAR_4);


 VAR_5 = FUNC_2();
 if (VAR_5 == 1000)
  VAR_6 = FUNC_7(FUNC_4(VAR_5));
 else
  VAR_6 = FUNC_4(VAR_5);

 FUNC_3(&VAR_4->work, VAR_6);

 FUNC_6(&VAR_1);
}
