
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int discard_count; int err_count; int virt; int msg_count; } ;
struct fsl_rio_pw {TYPE_2__* pw_regs; TYPE_1__ port_write_msg; int pw_work; int pw_fifo; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int pwsr; int pwmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,...) ;
 int * VAR_16 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_17, void *VAR_18)
{
 u32 VAR_19, VAR_20;
 struct fsl_rio_pw *VAR_21 = (struct fsl_rio_pw *)VAR_18;
 u32 VAR_22, VAR_23;

 VAR_22 = FUNC_1(VAR_16 + VAR_1);
 if (!(VAR_22 & VAR_5))
  goto pw_done;

 VAR_19 = FUNC_1(&VAR_21->pw_regs->pwmr);
 VAR_20 = FUNC_1(&VAR_21->pw_regs->pwsr);
 if (VAR_20 & VAR_12) {



  if (FUNC_2(&VAR_21->pw_fifo) >= VAR_15) {
   VAR_21->port_write_msg.msg_count++;
   FUNC_3(&VAR_21->pw_fifo, VAR_21->port_write_msg.virt,
     VAR_15);
  } else {
   VAR_21->port_write_msg.discard_count++;
   FUNC_6("RIO: ISR Discarded Port-Write Msg(s) (%d)\n",
     VAR_21->port_write_msg.discard_count);
  }



  FUNC_5(&VAR_21->pw_regs->pwsr, VAR_12);
  FUNC_5(&VAR_21->pw_regs->pwmr, VAR_19 | VAR_6);

  FUNC_7(&VAR_21->pw_work);
 }

 if ((VAR_19 & VAR_7) && (VAR_20 & VAR_13)) {
  VAR_21->port_write_msg.err_count++;
  FUNC_6("RIO: Port-Write Transaction Err (%d)\n",
    VAR_21->port_write_msg.err_count);



  FUNC_5(&VAR_21->pw_regs->pwmr, VAR_19 & ~VAR_8);
  FUNC_5(&VAR_21->pw_regs->pwsr, VAR_13);
  FUNC_5(&VAR_21->pw_regs->pwmr, VAR_19);
 }

 if (VAR_20 & VAR_10) {
  VAR_21->port_write_msg.discard_count++;
  FUNC_6("RIO: Port Discarded Port-Write Msg(s) (%d)\n",
    VAR_21->port_write_msg.discard_count);
  FUNC_5(&VAR_21->pw_regs->pwsr, VAR_10);
 }

pw_done:
 if (VAR_22 & VAR_3) {
  VAR_23 = FUNC_1(VAR_16 + VAR_14);
  FUNC_6("RIO_LTLEDCSR = 0x%x\n", VAR_23);
  FUNC_0(0);
 }

 if (VAR_22 & VAR_4) {
  VAR_23 = FUNC_1(VAR_16 + VAR_14);
  FUNC_6("RIO_LTLEDCSR = 0x%x\n", VAR_23);
  FUNC_0(1);
 }

 if (VAR_22 & VAR_2) {
  VAR_23 = FUNC_1(VAR_16 + VAR_14);
  FUNC_6("RIO_LTLEDCSR = 0x%x\n", VAR_23);
  FUNC_4();
 }

 return VAR_0;
}
