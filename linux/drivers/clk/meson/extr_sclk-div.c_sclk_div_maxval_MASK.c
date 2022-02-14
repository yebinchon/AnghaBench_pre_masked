
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;
struct meson_sclk_div_data {TYPE_1__ div; } ;



__attribute__((used)) static int FUNC_0(struct meson_sclk_div_data *VAR_0)
{
 return (1 << VAR_0->div.width) - 1;
}
