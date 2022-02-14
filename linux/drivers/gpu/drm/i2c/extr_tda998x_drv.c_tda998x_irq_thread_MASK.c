
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda998x_priv {int wq_edid; scalar_t__ wq_edid_wait; int cec_notify; int detect_work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tda998x_priv*,int ) ;
 int FUNC_4 (struct tda998x_priv*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct tda998x_priv*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct tda998x_priv *VAR_13 = VAR_12;
 u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 bool VAR_20 = 0;

 VAR_14 = FUNC_3(VAR_13, VAR_5);
 if (VAR_14 & VAR_0) {
  VAR_15 = FUNC_3(VAR_13, VAR_6);
  VAR_16 = FUNC_3(VAR_13, VAR_7);
  VAR_17 = FUNC_4(VAR_13, VAR_8);
  VAR_18 = FUNC_4(VAR_13, VAR_9);
  VAR_19 = FUNC_4(VAR_13, VAR_10);
  FUNC_0(
   "tda irq sta %02x cec %02x lvl %02x f0 %02x f1 %02x f2 %02x\n",
   VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

  if (VAR_15 & VAR_2) {
   if (VAR_16 & VAR_3) {
    FUNC_6(VAR_13);
   } else {
    FUNC_5(&VAR_13->detect_work);
    FUNC_2(VAR_13->cec_notify,
         VAR_1);
   }

   VAR_20 = 1;
  }

  if ((VAR_19 & VAR_4) && VAR_13->wq_edid_wait) {
   VAR_13->wq_edid_wait = 0;
   FUNC_7(&VAR_13->wq_edid);
   VAR_20 = 1;
  }
 }

 return FUNC_1(VAR_20);
}
