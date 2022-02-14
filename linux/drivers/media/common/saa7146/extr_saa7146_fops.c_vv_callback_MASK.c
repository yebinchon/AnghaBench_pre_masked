
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {TYPE_1__* vv_data; } ;
struct TYPE_6__ {int (* irq_done ) (struct saa7146_dev*,int) ;} ;
struct TYPE_5__ {int (* irq_done ) (struct saa7146_dev*,int) ;} ;
struct TYPE_4__ {int vbi_wq; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct saa7146_dev*,int ) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (struct saa7146_dev*,int ,int ) ;
 int FUNC_3 (struct saa7146_dev*,int) ;
 int FUNC_4 (struct saa7146_dev*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct saa7146_dev *VAR_7, unsigned long VAR_8)
{
 u32 VAR_9 = VAR_8;

 FUNC_0("dev:%p, isr:0x%08x\n", VAR_7, (u32)VAR_8);

 if (0 != (VAR_9 & (VAR_1))) {
  FUNC_0("irq: RPS0 (0x%08x)\n", VAR_9);
  VAR_6.irq_done(VAR_7,VAR_9);
 }

 if (0 != (VAR_9 & (VAR_2))) {
  u32 VAR_10 = FUNC_1(VAR_7, VAR_4);
  if( 0 != (VAR_10 & VAR_0)) {
   FUNC_0("irq: RPS1 vbi workaround (0x%08x)\n", VAR_9);
   FUNC_5(&VAR_7->vv_data->vbi_wq);
   FUNC_2(VAR_7,VAR_4, VAR_3);
   return;
  }
  FUNC_0("irq: RPS1 (0x%08x)\n", VAR_9);
  VAR_5.irq_done(VAR_7,VAR_9);
 }
}
