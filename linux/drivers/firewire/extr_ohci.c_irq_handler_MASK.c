
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int tasklet; } ;
struct TYPE_11__ {int tasklet; } ;
struct TYPE_10__ {int tasklet; } ;
struct TYPE_9__ {int tasklet; } ;
struct fw_ohci {int lock; TYPE_8__* it_context_list; TYPE_6__* ir_context_list; TYPE_4__ at_response_ctx; TYPE_3__ at_request_ctx; TYPE_2__ ar_response_ctx; TYPE_1__ ar_request_ctx; int bus_reset_work; } ;
typedef int irqreturn_t ;
struct TYPE_15__ {int tasklet; } ;
struct TYPE_16__ {TYPE_7__ context; } ;
struct TYPE_13__ {int tasklet; } ;
struct TYPE_14__ {TYPE_5__ context; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_ohci*) ;
 int FUNC_2 (struct fw_ohci*) ;
 int FUNC_3 (struct fw_ohci*,int) ;
 int FUNC_4 (struct fw_ohci*,char*) ;
 int FUNC_5 (struct fw_ohci*,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct fw_ohci*,int ) ;
 int FUNC_9 (struct fw_ohci*,int ,int) ;
 int VAR_23 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct fw_ohci*) ;

__attribute__((used)) static irqreturn_t FUNC_15(int VAR_24, void *VAR_25)
{
 struct fw_ohci *VAR_26 = VAR_25;
 u32 VAR_27, VAR_28;
 int VAR_29;

 VAR_27 = FUNC_8(VAR_26, VAR_2);

 if (!VAR_27 || !~VAR_27)
  return VAR_1;





 FUNC_9(VAR_26, VAR_2,
    VAR_27 & ~(VAR_11 | VAR_17));
 FUNC_3(VAR_26, VAR_27);

 if (VAR_27 & VAR_21)
  FUNC_7(VAR_23, &VAR_26->bus_reset_work);

 if (VAR_27 & VAR_9)
  FUNC_12(&VAR_26->ar_request_ctx.tasklet);

 if (VAR_27 & VAR_10)
  FUNC_12(&VAR_26->ar_response_ctx.tasklet);

 if (VAR_27 & VAR_19)
  FUNC_12(&VAR_26->at_request_ctx.tasklet);

 if (VAR_27 & VAR_20)
  FUNC_12(&VAR_26->at_response_ctx.tasklet);

 if (VAR_27 & VAR_15) {
  VAR_28 = FUNC_8(VAR_26, VAR_3);
  FUNC_9(VAR_26, VAR_3, VAR_28);

  while (VAR_28) {
   VAR_29 = FUNC_0(VAR_28) - 1;
   FUNC_12(
    &VAR_26->ir_context_list[VAR_29].context.tasklet);
   VAR_28 &= ~(1 << VAR_29);
  }
 }

 if (VAR_27 & VAR_16) {
  VAR_28 = FUNC_8(VAR_26, VAR_4);
  FUNC_9(VAR_26, VAR_4, VAR_28);

  while (VAR_28) {
   VAR_29 = FUNC_0(VAR_28) - 1;
   FUNC_12(
    &VAR_26->it_context_list[VAR_29].context.tasklet);
   VAR_28 &= ~(1 << VAR_29);
  }
 }

 if (FUNC_13(VAR_27 & VAR_18))
  FUNC_4(VAR_26, "register access failure\n");

 if (FUNC_13(VAR_27 & VAR_17)) {
  FUNC_8(VAR_26, VAR_7);
  FUNC_8(VAR_26, VAR_8);
  FUNC_9(VAR_26, VAR_2,
     VAR_17);
  if (FUNC_6())
   FUNC_4(VAR_26, "PCI posted write error\n");
 }

 if (FUNC_13(VAR_27 & VAR_14)) {
  if (FUNC_6())
   FUNC_5(VAR_26, "isochronous cycle too long\n");
  FUNC_9(VAR_26, VAR_5,
     VAR_6);
 }

 if (FUNC_13(VAR_27 & VAR_13)) {






  if (FUNC_6())
   FUNC_5(VAR_26, "isochronous cycle inconsistent\n");
 }

 if (FUNC_13(VAR_27 & VAR_22))
  FUNC_2(VAR_26);

 if (VAR_27 & VAR_12) {
  FUNC_10(&VAR_26->lock);
  FUNC_14(VAR_26);
  FUNC_11(&VAR_26->lock);
 } else
  FUNC_1(VAR_26);

 return VAR_0;
}
