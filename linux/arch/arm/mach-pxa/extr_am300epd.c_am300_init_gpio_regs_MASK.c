
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct broadsheetfb_par {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int*) ;
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
 TYPE_1__* VAR_11 ;
 int FUNC_1 (struct broadsheetfb_par*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int* VAR_12 ;
 int FUNC_6 (int,...) ;
 int FUNC_7 (int,int) ;
 int* VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct broadsheetfb_par *VAR_14)
{
 int VAR_15;
 int VAR_16;
 char VAR_17[8];

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_13); VAR_15++) {
  VAR_16 = FUNC_6(VAR_13[VAR_15], VAR_12[VAR_15]);
  if (VAR_16) {
   FUNC_2(&VAR_11->dev, "failed requesting "
    "gpio %s, err=%d\n", VAR_12[VAR_15], VAR_16);
   goto err_req_gpio;
  }
 }


 for (VAR_15 = VAR_2; VAR_15 <= VAR_3; VAR_15++) {
  FUNC_9(VAR_17, "DB%d", VAR_15);
  VAR_16 = FUNC_6(VAR_15, VAR_17);
  if (VAR_16) {
   FUNC_2(&VAR_11->dev, "failed requesting "
    "gpio %d, err=%d\n", VAR_15, VAR_16);
   goto err_req_gpio2;
  }
 }


 FUNC_4(VAR_6, 0);
 FUNC_4(VAR_0, 1);
 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_8, 1);
 FUNC_4(VAR_10, 1);
 FUNC_4(VAR_1, 1);
 FUNC_4(VAR_9, 0);


 FUNC_3(VAR_7);
 FUNC_3(VAR_5);


 for (VAR_15 = VAR_2; VAR_15 <= VAR_3; VAR_15++)
  FUNC_4(VAR_15, 0);


 FUNC_7(VAR_0, 1);
 FUNC_7(VAR_9, 0);
 FUNC_8(10);
 FUNC_7(VAR_9, 1);
 FUNC_8(10);
 FUNC_1(VAR_14);

 return 0;

err_req_gpio2:
 while (--VAR_15 >= VAR_2)
  FUNC_5(VAR_15);
 VAR_15 = FUNC_0(VAR_13);
err_req_gpio:
 while (--VAR_15 >= 0)
  FUNC_5(VAR_13[VAR_15]);

 return VAR_16;
}
