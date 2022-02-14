
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct olpc_apsp {int dev; scalar_t__ base; struct serio* padio; struct serio* kbio; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct serio*,unsigned int,int ) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct olpc_apsp *VAR_12 = VAR_11;
 unsigned int VAR_13, VAR_14;
 struct serio *VAR_15;





 VAR_14 = FUNC_3(VAR_12->base + VAR_5);
 if (!(VAR_14 & VAR_9)) {
  FUNC_1(VAR_12->dev, "spurious interrupt?\n");
  return VAR_3;
 }

 VAR_13 = FUNC_3(VAR_12->base + VAR_0);
 FUNC_0(VAR_12->dev, "olpc_apsp_rx %x\n", VAR_13);

 if (VAR_13 >> VAR_7 == VAR_4)
  VAR_15 = VAR_12->kbio;
 else
  VAR_15 = VAR_12->padio;

 FUNC_4(VAR_15, VAR_13 & VAR_1, 0);


 FUNC_5(VAR_14 | VAR_9, VAR_12->base + VAR_5);
 FUNC_5(VAR_6, VAR_12->base + VAR_8);

 FUNC_2(VAR_12->dev, 1000);
 return VAR_2;
}
