
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {int ulps_enabled; int num_lanes_supported; TYPE_1__* lanes; } ;
struct TYPE_2__ {scalar_t__ function; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (struct dsi_data*,int ,unsigned int,int,int) ;
 scalar_t__ FUNC_4 (struct dsi_data*,int ,int,int) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (struct dsi_data*) ;
 int FUNC_7 (struct dsi_data*,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct dsi_data*) ;
 int FUNC_9 (struct dsi_data*,int) ;
 int FUNC_10 (struct dsi_data*,int ) ;
 int FUNC_11 (struct dsi_data*,int ,int *,int ) ;
 int FUNC_12 (struct dsi_data*,int) ;
 int FUNC_13 (struct dsi_data*,int ,int *,int ) ;
 int FUNC_14 (struct dsi_data*,int,int) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(struct dsi_data *VAR_8)
{
 FUNC_0(VAR_6);
 int VAR_9, VAR_10;
 unsigned int VAR_11;

 FUNC_1("Entering ULPS");

 FUNC_5(!FUNC_6(VAR_8));

 FUNC_5(VAR_8->ulps_enabled);

 if (VAR_8->ulps_enabled)
  return 0;


 if (FUNC_4(VAR_8, VAR_1, 13, 13)) {
  FUNC_9(VAR_8, 0);
  FUNC_3(VAR_8, VAR_1, 0, 13, 13);
  FUNC_9(VAR_8, 1);
 }

 FUNC_12(VAR_8, 0);
 FUNC_12(VAR_8, 1);
 FUNC_12(VAR_8, 2);
 FUNC_12(VAR_8, 3);

 FUNC_8(VAR_8);

 FUNC_14(VAR_8, 0, 0);
 FUNC_14(VAR_8, 1, 0);
 FUNC_14(VAR_8, 2, 0);
 FUNC_14(VAR_8, 3, 0);

 if (FUNC_4(VAR_8, VAR_2, 16, 16)) {
  FUNC_2("HS busy when enabling ULPS\n");
  return -VAR_5;
 }

 if (FUNC_4(VAR_8, VAR_2, 17, 17)) {
  FUNC_2("LP busy when enabling ULPS\n");
  return -VAR_5;
 }

 VAR_9 = FUNC_11(VAR_8, VAR_7, &VAR_6,
   VAR_0);
 if (VAR_9)
  return VAR_9;

 VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_8->num_lanes_supported; ++VAR_10) {
  if (VAR_8->lanes[VAR_10].function == VAR_4)
   continue;
  VAR_11 |= 1 << VAR_10;
 }


 FUNC_3(VAR_8, VAR_2, VAR_11, 9, 5);


 FUNC_10(VAR_8, VAR_2);

 if (FUNC_16(&VAR_6,
    FUNC_15(1000)) == 0) {
  FUNC_2("ULPS enable timeout\n");
  VAR_9 = -VAR_5;
  goto err;
 }

 FUNC_13(VAR_8, VAR_7, &VAR_6,
   VAR_0);


 FUNC_3(VAR_8, VAR_2, 0, 9, 5);


 FUNC_10(VAR_8, VAR_2);

 FUNC_7(VAR_8, VAR_3);

 FUNC_9(VAR_8, 0);

 VAR_8->ulps_enabled = 1;

 return 0;

err:
 FUNC_13(VAR_8, VAR_7, &VAR_6,
   VAR_0);
 return VAR_9;
}
