
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {scalar_t__ i2c_op; int name; int i2c_wq; int (* vv_callback ) (struct saa7146_dev*,int) ;scalar_t__ vv_data; TYPE_1__* ext; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_mask; int (* irq_func ) (struct saa7146_dev*,int*) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct saa7146_dev*,int) ;
 int VAR_8 ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (struct saa7146_dev*,int ) ;
 int FUNC_5 (struct saa7146_dev*,int ,int) ;
 int FUNC_6 (struct saa7146_dev*,int*) ;
 int FUNC_7 (struct saa7146_dev*,int) ;
 int FUNC_8 (struct saa7146_dev*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_9, void *VAR_10)
{
 struct saa7146_dev *VAR_11 = VAR_10;
 u32 VAR_12;
 u32 VAR_13;


 VAR_13 = VAR_12 = FUNC_4(VAR_11, VAR_2);


 if ( 0 == VAR_12 ) {

  return VAR_1;
 }

 if (VAR_11->ext) {
  if (VAR_11->ext->irq_mask & VAR_12) {
   if (VAR_11->ext->irq_func)
    VAR_11->ext->irq_func(VAR_11, &VAR_12);
   VAR_12 &= ~VAR_11->ext->irq_mask;
  }
 }
 if (0 != (VAR_12 & (VAR_5))) {
  FUNC_0("irq: RPS0 (0x%08x)\n", VAR_12);
  if (VAR_11->vv_data && VAR_11->vv_callback)
   VAR_11->vv_callback(VAR_11,VAR_12);
  VAR_12 &= ~VAR_5;
 }
 if (0 != (VAR_12 & (VAR_6))) {
  if (VAR_11->vv_data && VAR_11->vv_callback)
   VAR_11->vv_callback(VAR_11,VAR_12);
  VAR_12 &= ~VAR_6;
 }
 if (0 != (VAR_12 & (VAR_3|VAR_4))) {
  FUNC_2(VAR_11, VAR_3|VAR_4);

  if (0 != VAR_11->i2c_op) {
   VAR_11->i2c_op = 0;
   FUNC_9(&VAR_11->i2c_wq);
  } else {
   u32 VAR_14 = FUNC_4(VAR_11, VAR_7);
   u32 VAR_15 = FUNC_4(VAR_11, VAR_8);
   FUNC_3("%s: unexpected i2c irq: isr %08x psr %08x ssr %08x\n",
    VAR_11->name, VAR_12, VAR_14, VAR_15);
  }
  VAR_12 &= ~(VAR_3|VAR_4);
 }
 if( 0 != VAR_12 ) {
  FUNC_1("warning: interrupt enabled, but not handled properly.(0x%08x)\n",
      VAR_12);
  FUNC_1("disabling interrupt source(s)!\n");
  FUNC_2(VAR_11,VAR_12);
 }
 FUNC_5(VAR_11, VAR_2, VAR_13);
 return VAR_0;
}
