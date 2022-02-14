
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ phys; int virt; scalar_t__ discard_count; scalar_t__ err_count; } ;
struct fsl_rio_pw {TYPE_2__ port_write_msg; int dev; TYPE_1__* pw_regs; int pw_fifo; int pw_fifo_lock; int pw_work; } ;
struct TYPE_3__ {int pwmr; int epwqbar; int pwqbar; int pwsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fsl_rio_pw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,int ,scalar_t__) ;
 int FUNC_4 (int ,void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int ,char*,void*) ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int *) ;

int FUNC_12(struct fsl_rio_pw *VAR_17)
{
 int VAR_18 = 0;


 FUNC_7(&VAR_17->pw_regs->pwmr,
   FUNC_5(&VAR_17->pw_regs->pwmr) & ~VAR_6);


 VAR_17->port_write_msg.virt = FUNC_2(VAR_17->dev,
     VAR_13,
     &VAR_17->port_write_msg.phys, VAR_1);
 if (!VAR_17->port_write_msg.virt) {
  FUNC_9("RIO: unable allocate port write queue\n");
  return -VAR_0;
 }

 VAR_17->port_write_msg.err_count = 0;
 VAR_17->port_write_msg.discard_count = 0;


 FUNC_7(&VAR_17->pw_regs->epwqbar, 0);
 FUNC_7(&VAR_17->pw_regs->pwqbar, (u32) VAR_17->port_write_msg.phys);

 FUNC_8("EIPWQBAR: 0x%08x IPWQBAR: 0x%08x\n",
   FUNC_5(&VAR_17->pw_regs->epwqbar),
   FUNC_5(&VAR_17->pw_regs->pwqbar));


 FUNC_7(&VAR_17->pw_regs->pwsr,
   (VAR_11 | VAR_10 | VAR_9));



 FUNC_7(&VAR_17->pw_regs->pwmr,
   VAR_8 | VAR_7 | VAR_5 | VAR_4);



 VAR_18 = FUNC_10(FUNC_1(VAR_17), VAR_15,
   VAR_2, "port-write", (void *)VAR_17);
 if (VAR_18 < 0) {
  FUNC_9("MPC85xx RIO: unable to request inbound doorbell irq");
  goto err_out;
 }

 FUNC_7((u32 *)(VAR_16 + VAR_12), VAR_3);

 FUNC_0(&VAR_17->pw_work, VAR_14);
 FUNC_11(&VAR_17->pw_fifo_lock);
 if (FUNC_6(&VAR_17->pw_fifo, VAR_13 * 32, VAR_1)) {
  FUNC_9("FIFO allocation failed\n");
  VAR_18 = -VAR_0;
  goto err_out_irq;
 }

 FUNC_8("IPWMR: 0x%08x IPWSR: 0x%08x\n",
   FUNC_5(&VAR_17->pw_regs->pwmr),
   FUNC_5(&VAR_17->pw_regs->pwsr));

 return VAR_18;

err_out_irq:
 FUNC_4(FUNC_1(VAR_17), (void *)VAR_17);
err_out:
 FUNC_3(VAR_17->dev, VAR_13,
  VAR_17->port_write_msg.virt,
  VAR_17->port_write_msg.phys);
 return VAR_18;
}
