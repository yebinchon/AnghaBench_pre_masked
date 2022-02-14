
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_hlcdc_layer {TYPE_1__* desc; } ;
struct TYPE_2__ {scalar_t__ cfgs_offset; } ;


 int FUNC_0 (struct atmel_hlcdc_layer*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct atmel_hlcdc_layer *VAR_0,
          unsigned int VAR_1)
{
 return FUNC_0(VAR_0,
       VAR_0->desc->cfgs_offset +
       (VAR_1 * sizeof(u32)));
}
