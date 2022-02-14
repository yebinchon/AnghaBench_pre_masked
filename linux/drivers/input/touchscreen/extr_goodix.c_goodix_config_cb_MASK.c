
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goodix_ts_data {int firmware_loading_complete; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct goodix_ts_data*) ;
 int FUNC_2 (struct goodix_ts_data*,struct firmware const*) ;
 int FUNC_3 (struct firmware const*) ;

__attribute__((used)) static void FUNC_4(const struct firmware *VAR_0, void *VAR_1)
{
 struct goodix_ts_data *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_0) {

  VAR_3 = FUNC_2(VAR_2, VAR_0);
  if (VAR_3)
   goto err_release_cfg;
 }

 FUNC_1(VAR_2);

err_release_cfg:
 FUNC_3(VAR_0);
 FUNC_0(&VAR_2->firmware_loading_complete);
}
