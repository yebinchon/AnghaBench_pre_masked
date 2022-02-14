
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ad5592r_state {int gpio_in; int spi_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad5592r_state*,int ,int) ;
 int FUNC_1 (struct ad5592r_state*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ad5592r_state *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1,
    VAR_0 | VAR_2->gpio_in);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_2->spi_msg);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = (u8) FUNC_2(VAR_2->spi_msg);

 return 0;
}
