
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arizona_extcon_info {unsigned int last_jackdet; int micd_timeout; int detecting; int mic; int hpdet_done; int hpdet_retried; int num_micd_ranges; int dev; int lock; int edev; int input; TYPE_1__* micd_ranges; scalar_t__* hpdet_res; scalar_t__ num_hpdet_res; scalar_t__ micd_clamp; int hpdet_work; scalar_t__ jack_flips; int micd_timeout_work; struct arizona* arizona; } ;
struct TYPE_4__ {int micd_timeout; scalar_t__ jd_invert; int hpdet_acc_id; } ;
struct arizona {int regmap; TYPE_2__ pdata; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int FUNC_1 (struct arizona_extcon_info*) ;
 int FUNC_2 (struct arizona_extcon_info*) ;
 int FUNC_3 (struct arizona_extcon_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int *,int ) ;
 int FUNC_17 (int ,int ,unsigned int*) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (int ,int ,int) ;
 int VAR_17 ;

__attribute__((used)) static irqreturn_t FUNC_20(int VAR_18, void *VAR_19)
{
 struct arizona_extcon_info *VAR_20 = VAR_19;
 struct arizona *VAR_21 = VAR_20->arizona;
 unsigned int VAR_22, VAR_23, VAR_24;
 bool VAR_25, VAR_26;
 int VAR_27, VAR_28;

 VAR_25 = FUNC_4(&VAR_20->hpdet_work);
 VAR_26 = FUNC_4(&VAR_20->micd_timeout_work);

 FUNC_13(VAR_20->dev);

 FUNC_11(&VAR_20->lock);

 if (VAR_20->micd_clamp) {
  VAR_24 = VAR_10;
  VAR_23 = 0;
 } else {
  VAR_24 = VAR_6;
  if (VAR_21->pdata.jd_invert)
   VAR_23 = 0;
  else
   VAR_23 = VAR_6;
 }

 VAR_27 = FUNC_17(VAR_21->regmap, VAR_0, &VAR_22);
 if (VAR_27 != 0) {
  FUNC_6(VAR_21->dev, "Failed to read jackdet status: %d\n",
   VAR_27);
  FUNC_12(&VAR_20->lock);
  FUNC_15(VAR_20->dev);
  return VAR_15;
 }

 VAR_22 &= VAR_24;
 if (VAR_22 == VAR_20->last_jackdet) {
  FUNC_5(VAR_21->dev, "Suppressing duplicate JACKDET\n");
  if (VAR_25)
   FUNC_16(VAR_17,
        &VAR_20->hpdet_work,
        FUNC_10(VAR_13));

  if (VAR_26) {
   int VAR_29 = VAR_20->micd_timeout;

   FUNC_16(VAR_17,
        &VAR_20->micd_timeout_work,
        FUNC_10(VAR_29));
  }

  goto out;
 }
 VAR_20->last_jackdet = VAR_22;

 if (VAR_20->last_jackdet == VAR_23) {
  FUNC_5(VAR_21->dev, "Detected jack\n");
  VAR_27 = FUNC_7(VAR_20->edev,
           VAR_12, 1);

  if (VAR_27 != 0)
   FUNC_6(VAR_21->dev, "Mechanical report failed: %d\n",
    VAR_27);

  if (!VAR_21->pdata.hpdet_acc_id) {
   VAR_20->detecting = 1;
   VAR_20->mic = 0;
   VAR_20->jack_flips = 0;

   FUNC_2(VAR_20);
  } else {
   FUNC_16(VAR_17,
        &VAR_20->hpdet_work,
        FUNC_10(VAR_13));
  }

  if (VAR_20->micd_clamp || !VAR_21->pdata.jd_invert)
   FUNC_18(VAR_21->regmap,
        VAR_2,
        VAR_7 |
        VAR_3, 0);
 } else {
  FUNC_5(VAR_21->dev, "Detected jack removal\n");

  FUNC_3(VAR_20);

  VAR_20->num_hpdet_res = 0;
  for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_20->hpdet_res); VAR_28++)
   VAR_20->hpdet_res[VAR_28] = 0;
  VAR_20->mic = 0;
  VAR_20->hpdet_done = 0;
  VAR_20->hpdet_retried = 0;

  for (VAR_28 = 0; VAR_28 < VAR_20->num_micd_ranges; VAR_28++)
   FUNC_8(VAR_20->input,
      VAR_20->micd_ranges[VAR_28].key, 0);
  FUNC_9(VAR_20->input);

  for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_16) - 1; VAR_28++) {
   VAR_27 = FUNC_7(VAR_20->edev,
     VAR_16[VAR_28], 0);
   if (VAR_27 != 0)
    FUNC_6(VAR_21->dev,
     "Removal report failed: %d\n", VAR_27);
  }
  FUNC_1(VAR_20);

  FUNC_18(VAR_21->regmap,
       VAR_2,
       VAR_7 | VAR_3,
       VAR_7 | VAR_3);
 }

 if (VAR_21->pdata.micd_timeout)
  VAR_20->micd_timeout = VAR_21->pdata.micd_timeout;
 else
  VAR_20->micd_timeout = VAR_11;

out:

 FUNC_19(VAR_21->regmap, VAR_1,
       VAR_8 |
       VAR_9 |
       VAR_4 |
       VAR_5);

 FUNC_12(&VAR_20->lock);

 FUNC_14(VAR_20->dev);
 FUNC_15(VAR_20->dev);

 return VAR_14;
}
