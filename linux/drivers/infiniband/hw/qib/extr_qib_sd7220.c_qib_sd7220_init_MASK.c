
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_devdata {TYPE_2__* cspec; int pport; TYPE_1__* pcidev; } ;
struct firmware {int dummy; } ;
struct TYPE_4__ {int serdes_first_init_done; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qib_devdata*,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct qib_devdata*,char*) ;
 int FUNC_3 (struct qib_devdata*,int) ;
 int FUNC_4 (int ,struct firmware const*) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*,int ) ;
 int FUNC_7 (struct qib_devdata*,struct firmware const*) ;
 int FUNC_8 (struct qib_devdata*,struct firmware const*) ;
 int FUNC_9 (struct qib_devdata*) ;
 int FUNC_10 (struct qib_devdata*) ;
 scalar_t__ FUNC_11 (struct qib_devdata*) ;
 int FUNC_12 (struct qib_devdata*,char*) ;
 int FUNC_13 (struct qib_devdata*) ;
 int FUNC_14 (struct qib_devdata*,int) ;
 int FUNC_15 (struct firmware const*) ;
 int FUNC_16 (struct firmware const**,int ,int *) ;
 int FUNC_17 (struct qib_devdata*,int) ;

int FUNC_18(struct qib_devdata *VAR_2)
{
 const struct firmware *VAR_3;
 int VAR_4 = 1;
 int VAR_5, VAR_6;


 VAR_6 = (FUNC_6(VAR_2, VAR_1) & 1);
 if (!VAR_6) {

  FUNC_3(VAR_2, 1);
  FUNC_12(VAR_2, "Driver-reload");
 }

 VAR_4 = FUNC_16(&VAR_3, VAR_0, &VAR_2->pcidev->dev);
 if (VAR_4) {
  FUNC_2(VAR_2, "Failed to load IB SERDES image\n");
  goto done;
 }


 VAR_4 = FUNC_4(VAR_2->pport, VAR_3);
 if (VAR_4 < 0)
  goto bail;

 VAR_5 = !VAR_4;




 VAR_4 = FUNC_10(VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, "Failed to set IB SERDES early defaults\n");
  goto bail;
 }





 if (VAR_5) {
  VAR_4 = FUNC_9(VAR_2);
  if (VAR_4 < 0) {
   FUNC_2(VAR_2, "Failed IB SERDES DAC trim\n");
   goto bail;
  }
 }






 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, "Failed to set IB SERDES presets\n");
  goto bail;
 }
 VAR_4 = FUNC_14(VAR_2, 0x80);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, "Failed to set IB SERDES TRIMSELF\n");
  goto bail;
 }


 VAR_4 = 0;
 if (VAR_5) {
  int VAR_7;
  int VAR_8;

  VAR_4 = FUNC_7(VAR_2, VAR_3);
  if (VAR_4 < 0) {
   FUNC_2(VAR_2, "Failed to load IB SERDES image\n");
   goto bail;
  } else {

   VAR_7 = FUNC_8(VAR_2, VAR_3);
   if (VAR_7 != VAR_4) {
    FUNC_2(VAR_2, "SERDES PRAM VFY failed\n");
    goto bail;
   }
  }





  VAR_4 = 0;
  VAR_4 = FUNC_1(VAR_2, FUNC_0(0), 0, 0x38);
  if (VAR_4 < 0) {
   FUNC_2(VAR_2, "Failed clearing START_EQ1\n");
   goto bail;
  }

  FUNC_3(VAR_2, 0);




  VAR_8 = FUNC_13(VAR_2);





  FUNC_3(VAR_2, 1);

  if (!VAR_8) {
   FUNC_2(VAR_2, "No TRIMDONE seen\n");
   goto bail;
  }




  FUNC_12(VAR_2, "First-reset");

  VAR_2->cspec->serdes_first_init_done = 1;
 }




 VAR_4 = 0;
 if (FUNC_11(VAR_2) >= 0)
  goto done;
bail:
 VAR_4 = 1;
done:

 FUNC_17(VAR_2, -1);

 FUNC_15(VAR_3);
 return VAR_4;
}
