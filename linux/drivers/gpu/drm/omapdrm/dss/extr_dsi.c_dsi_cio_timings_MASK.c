
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dsi_data {TYPE_1__* data; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ,...) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (struct dsi_data*,int) ;
 int FUNC_3 (struct dsi_data*,int ) ;
 int FUNC_4 (struct dsi_data*,int ,int) ;
 int FUNC_5 (struct dsi_data*,int) ;

__attribute__((used)) static void FUNC_6(struct dsi_data *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;






 VAR_6 = FUNC_5(VAR_4, 70) + 2;


 VAR_7 = FUNC_5(VAR_4, 175) + 2;


 VAR_8 = FUNC_5(VAR_4, 60) + 5;


 VAR_9 = FUNC_5(VAR_4, 145);


 VAR_10 = FUNC_5(VAR_4, 25);


 VAR_11 = FUNC_5(VAR_4, 60) + 2;


 VAR_13 = FUNC_5(VAR_4, 65);


 VAR_12 = FUNC_5(VAR_4, 260);

 FUNC_0("ths_prepare %u (%uns), ths_prepare_ths_zero %u (%uns)\n",
  VAR_6, FUNC_2(VAR_4, VAR_6),
  VAR_7, FUNC_2(VAR_4, VAR_7));
 FUNC_0("ths_trail %u (%uns), ths_exit %u (%uns)\n",
   VAR_8, FUNC_2(VAR_4, VAR_8),
   VAR_9, FUNC_2(VAR_4, VAR_9));

 FUNC_0("tlpx_half %u (%uns), tclk_trail %u (%uns), "
   "tclk_zero %u (%uns)\n",
   VAR_10, FUNC_2(VAR_4, VAR_10),
   VAR_11, FUNC_2(VAR_4, VAR_11),
   VAR_12, FUNC_2(VAR_4, VAR_12));
 FUNC_0("tclk_prepare %u (%uns)\n",
   VAR_13, FUNC_2(VAR_4, VAR_13));



 VAR_5 = FUNC_3(VAR_4, VAR_0);
 VAR_5 = FUNC_1(VAR_5, VAR_6, 31, 24);
 VAR_5 = FUNC_1(VAR_5, VAR_7, 23, 16);
 VAR_5 = FUNC_1(VAR_5, VAR_8, 15, 8);
 VAR_5 = FUNC_1(VAR_5, VAR_9, 7, 0);
 FUNC_4(VAR_4, VAR_0, VAR_5);

 VAR_5 = FUNC_3(VAR_4, VAR_1);
 VAR_5 = FUNC_1(VAR_5, VAR_10, 20, 16);
 VAR_5 = FUNC_1(VAR_5, VAR_11, 15, 8);
 VAR_5 = FUNC_1(VAR_5, VAR_12, 7, 0);

 if (VAR_4->data->quirks & VAR_3) {
  VAR_5 = FUNC_1(VAR_5, 0, 21, 21);
  VAR_5 = FUNC_1(VAR_5, 1, 22, 22);
  VAR_5 = FUNC_1(VAR_5, 1, 23, 23);
 }

 FUNC_4(VAR_4, VAR_1, VAR_5);

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 VAR_5 = FUNC_1(VAR_5, VAR_13, 7, 0);
 FUNC_4(VAR_4, VAR_2, VAR_5);
}
