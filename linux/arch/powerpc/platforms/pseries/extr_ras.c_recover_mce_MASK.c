
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; int nip; } ;
struct machine_check_event {scalar_t__ disposition; scalar_t__ severity; scalar_t__ sync_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct pt_regs*,int ,int ) ;
 int FUNC_1 (char*,struct pt_regs*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_5(struct pt_regs *VAR_5, struct machine_check_event *VAR_6)
{
 int VAR_7 = 0;

 if (!(VAR_5->msr & VAR_3)) {

  FUNC_3("Machine check interrupt unrecoverable: MSR(RI=0)\n");
  VAR_7 = 0;
 } else if (VAR_6->disposition == VAR_1) {

  VAR_7 = 1;
 } else if (VAR_6->severity == VAR_2) {

  FUNC_3("Machine check interrupt is fatal\n");
  VAR_7 = 0;
 }

 if (!VAR_7 && VAR_6->sync_error) {
  if ((FUNC_4(VAR_5))) {
   FUNC_0(VAR_4, VAR_5, VAR_0, VAR_5->nip);
   VAR_7 = 1;
  } else if (FUNC_2()) {





   VAR_7 = 0;
  } else {
   FUNC_1("Machine check", VAR_5, VAR_4);
   VAR_7 = 1;
  }
 }

 return VAR_7;
}
