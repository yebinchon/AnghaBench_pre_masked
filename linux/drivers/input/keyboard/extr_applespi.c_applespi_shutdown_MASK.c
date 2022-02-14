
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct applespi_data {int have_bl_level; } ;


 int FUNC_0 (struct applespi_data*,int ) ;
 struct applespi_data* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_0)
{
 struct applespi_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_1->have_bl_level);
}
