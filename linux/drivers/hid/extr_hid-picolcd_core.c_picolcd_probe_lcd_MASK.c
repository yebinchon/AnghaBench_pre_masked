
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int dummy; } ;
struct hid_device {int dummy; } ;


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
 int FUNC_0 (struct picolcd_data*) ;
 int FUNC_1 (struct picolcd_data*) ;
 int FUNC_2 (struct picolcd_data*) ;
 int FUNC_3 (struct picolcd_data*) ;
 int FUNC_4 (struct picolcd_data*) ;
 int FUNC_5 (struct picolcd_data*) ;
 int FUNC_6 (int ,struct hid_device*) ;
 int FUNC_7 (struct picolcd_data*,int ) ;
 int FUNC_8 (struct picolcd_data*,int ) ;
 int FUNC_9 (struct picolcd_data*,int ,int ,int ,int ,int ) ;
 int FUNC_10 (struct picolcd_data*) ;
 int FUNC_11 (struct picolcd_data*,int ) ;
 int FUNC_12 (struct picolcd_data*,int ) ;
 int FUNC_13 (struct picolcd_data*,int ) ;
 int FUNC_14 (int ,struct hid_device*) ;

__attribute__((used)) static int FUNC_15(struct hid_device *VAR_10, struct picolcd_data *VAR_11)
{
 int VAR_12;


 VAR_12 = FUNC_11(VAR_11, FUNC_6(VAR_5, VAR_10));
 if (VAR_12)
  goto err;


 VAR_12 = FUNC_8(VAR_11, FUNC_6(VAR_4, VAR_10));
 if (VAR_12)
  goto err;


 VAR_12 = FUNC_10(VAR_11);
 if (VAR_12)
  goto err;


 VAR_12 = FUNC_12(VAR_11, FUNC_14(VAR_1, VAR_10));
 if (VAR_12)
  goto err;


 VAR_12 = FUNC_7(VAR_11, FUNC_14(VAR_0, VAR_10));
 if (VAR_12)
  goto err;


 VAR_12 = FUNC_13(VAR_11, FUNC_14(VAR_6, VAR_10));
 if (VAR_12)
  goto err;

 FUNC_9(VAR_11, FUNC_14(VAR_2, VAR_10),
   FUNC_14(VAR_3, VAR_10),
   FUNC_14(VAR_7, VAR_10),
   FUNC_14(VAR_9, VAR_10),
   FUNC_14(VAR_8, VAR_10));
 return 0;
err:
 FUNC_5(VAR_11);
 FUNC_0(VAR_11);
 FUNC_4(VAR_11);
 FUNC_2(VAR_11);
 FUNC_1(VAR_11);
 FUNC_3(VAR_11);
 return VAR_12;
}
