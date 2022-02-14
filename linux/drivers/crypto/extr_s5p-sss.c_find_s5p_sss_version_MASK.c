
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct samsung_aes_variant {int dummy; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct of_device_id* FUNC_1 (int ,scalar_t__) ;
 TYPE_2__* FUNC_2 (struct platform_device const*) ;
 int VAR_1 ;

__attribute__((used)) static inline const struct samsung_aes_variant *FUNC_3
       (const struct platform_device *VAR_2)
{
 if (FUNC_0(VAR_0) && (VAR_2->dev.of_node)) {
  const struct of_device_id *VAR_3;

  VAR_3 = FUNC_1(VAR_1,
     VAR_2->dev.of_node);
  return (const struct samsung_aes_variant *)VAR_3->data;
 }
 return (const struct samsung_aes_variant *)
   FUNC_2(VAR_2)->driver_data;
}
