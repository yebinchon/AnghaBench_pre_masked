
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct i5k_amb_data {int amb_len; int amb_base; int amb_mmio; int * amb_present; } ;
struct TYPE_2__ {scalar_t__ fbd0; scalar_t__ err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct i5k_amb_data*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i5k_amb_data*) ;
 struct i5k_amb_data* FUNC_6 (int,int ) ;
 int FUNC_7 (struct platform_device*,struct i5k_amb_data*) ;
 int FUNC_8 (int ,int ) ;
 struct resource* FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct i5k_amb_data *VAR_6;
 struct resource *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;


 VAR_8 = 0;
 do {
  VAR_9 = FUNC_2(VAR_6, VAR_4[VAR_8].err);
  if (VAR_9 == 0)
   break;
  VAR_8++;
 } while (VAR_4[VAR_8].err);

 if (VAR_9)
  goto err;


 VAR_9 = FUNC_1(&VAR_6->amb_present[0], VAR_4[VAR_8].fbd0);
 if (VAR_9)
  goto err;


 FUNC_1(&VAR_6->amb_present[2], VAR_4[VAR_8].fbd0 + 1);


 VAR_7 = FUNC_9(VAR_6->amb_base, VAR_6->amb_len, VAR_0);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err;
 }

 VAR_6->amb_mmio = FUNC_3(VAR_6->amb_base, VAR_6->amb_len);
 if (!VAR_6->amb_mmio) {
  VAR_9 = -VAR_1;
  goto err_map_failed;
 }

 FUNC_7(VAR_5, VAR_6);

 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9)
  goto err_init_failed;

 return VAR_9;

err_init_failed:
 FUNC_4(VAR_6->amb_mmio);
err_map_failed:
 FUNC_8(VAR_6->amb_base, VAR_6->amb_len);
err:
 FUNC_5(VAR_6);
 return VAR_9;
}
