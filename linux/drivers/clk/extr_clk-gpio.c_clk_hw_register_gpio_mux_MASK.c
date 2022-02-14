
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int ) ;
 int VAR_1 ;
 struct clk_hw* FUNC_1 (struct device*,char const*,char const* const*,int,struct gpio_desc*,unsigned long,int *) ;
 int FUNC_2 (char*,char const*) ;

struct clk_hw *FUNC_3(struct device *VAR_2, const char *VAR_3,
  const char * const *VAR_4, u8 VAR_5, struct gpio_desc *VAR_6,
  unsigned long VAR_7)
{
 if (VAR_5 != 2) {
  FUNC_2("mux-clock %s must have 2 parents\n", VAR_3);
  return FUNC_0(-VAR_0);
 }

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7, &VAR_1);
}
