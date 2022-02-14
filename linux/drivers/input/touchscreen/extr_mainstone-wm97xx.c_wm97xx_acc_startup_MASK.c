
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm97xx {scalar_t__ id; int dev; int pen_irq; int variant; int acc_slot; int acc_rate; int * ac97; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ speed; int code; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 TYPE_1__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int VAR_16 ;
 size_t VAR_17 ;
 int FUNC_12 (struct wm97xx*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct wm97xx *VAR_18)
{
 int VAR_19 = 0, VAR_20 = 0;


 if (VAR_18->ac97 == ((void*)0))
  return -VAR_0;


 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_13); VAR_19++) {
  if (VAR_18->id != VAR_13[VAR_19].id)
   continue;
  VAR_17 = VAR_19;
  if (VAR_14 <= VAR_13[VAR_19].speed)
   break;
 }
 VAR_18->acc_rate = VAR_13[VAR_17].code;
 VAR_18->acc_slot = VAR_12;
 FUNC_2(VAR_18->dev,
   "mainstone accelerated touchscreen driver, %d samples/sec\n",
   VAR_13[VAR_17].speed);


 if (FUNC_10() || FUNC_11() || FUNC_9()) {
  VAR_16 = 1;
  VAR_15 = 27;


  VAR_18->variant = VAR_11;
 } else if (FUNC_8() && VAR_16)
  VAR_15 = 4;

 if (VAR_15) {
  VAR_20 = FUNC_5(VAR_15, "Touchscreen IRQ");
  if (VAR_20)
   goto out;

  VAR_20 = FUNC_3(VAR_15);
  if (VAR_20) {
   FUNC_4(VAR_15);
   goto out;
  }

  VAR_18->pen_irq = FUNC_6(VAR_15);
  FUNC_7(VAR_18->pen_irq, VAR_1);
 } else
  VAR_16 = 0;


 if (VAR_16) {
  switch (VAR_18->id) {
  case 130:
   break;
  case 129:
  case 128:

   FUNC_12(VAR_18, VAR_2, VAR_4,
        VAR_8,
        VAR_9,
        VAR_10);
   FUNC_12(VAR_18, VAR_3, VAR_7,
        VAR_8,
        VAR_5,
        VAR_6);
   break;
  default:
   FUNC_1(VAR_18->dev,
    "pen down irq not supported on this device\n");
   VAR_16 = 0;
   break;
  }
 }

out:
 return VAR_20;
}
