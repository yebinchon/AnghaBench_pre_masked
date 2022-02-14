
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dsi_data {scalar_t__ mode; TYPE_1__* data; int pix_fmt; } ;
struct TYPE_2__ {int quirks; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*) ;
 int FUNC_4 (struct dsi_data*,int ,int ,int ,int ) ;
 int FUNC_5 (struct dsi_data*,int ,int ,int ,int ) ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (struct dsi_data*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct dsi_data*,int ) ;
 int FUNC_10 (struct dsi_data*,int,int,int) ;
 int FUNC_11 (struct dsi_data*,int,int,int) ;
 int FUNC_12 (struct dsi_data*,int,int,int) ;
 int FUNC_13 (struct dsi_data*,int,int,int) ;
 int FUNC_14 (struct dsi_data*,int) ;
 int FUNC_15 (struct dsi_data*,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct dsi_data *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_5(VAR_5, VAR_1,
   VAR_1,
   VAR_1,
   VAR_1);

 FUNC_4(VAR_5, VAR_1,
   VAR_1,
   VAR_1,
   VAR_1);


 FUNC_12(VAR_5, 0x1000, 0, 0);
 FUNC_13(VAR_5, 0x1fff, 1, 1);
 FUNC_11(VAR_5, 0x1fff, 1, 1);
 FUNC_10(VAR_5, 0x1fff, 1, 1);

 switch (FUNC_8(VAR_5->pix_fmt)) {
 case 16:
  VAR_7 = 0;
  break;
 case 18:
  VAR_7 = 1;
  break;
 case 24:
  VAR_7 = 2;
  break;
 default:
  FUNC_0();
  return -VAR_3;
 }

 VAR_6 = FUNC_9(VAR_5, VAR_0);
 VAR_6 = FUNC_1(VAR_6, 1, 1, 1);
 VAR_6 = FUNC_1(VAR_6, 1, 2, 2);
 VAR_6 = FUNC_1(VAR_6, 1, 3, 3);
 VAR_6 = FUNC_1(VAR_6, 1, 4, 4);
 VAR_6 = FUNC_1(VAR_6, VAR_7, 7, 6);
 VAR_6 = FUNC_1(VAR_6, 0, 8, 8);
 VAR_6 = FUNC_1(VAR_6, 1, 14, 14);
 VAR_6 = FUNC_1(VAR_6, 1, 19, 19);
 if (!(VAR_5->data->quirks & VAR_2)) {
  VAR_6 = FUNC_1(VAR_6, 1, 24, 24);

  VAR_6 = FUNC_1(VAR_6, 0, 25, 25);
 }

 FUNC_15(VAR_5, VAR_0, VAR_6);

 FUNC_6(VAR_5);

 if (VAR_5->mode == VAR_4) {
  FUNC_7(VAR_5);
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
 }

 FUNC_14(VAR_5, 0);
 FUNC_14(VAR_5, 1);
 FUNC_14(VAR_5, 2);
 FUNC_14(VAR_5, 3);

 return 0;
}
