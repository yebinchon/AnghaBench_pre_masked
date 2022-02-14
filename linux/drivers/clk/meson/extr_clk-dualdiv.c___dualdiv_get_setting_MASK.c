
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct meson_clk_dualdiv_param {scalar_t__ n1; } const meson_clk_dualdiv_param ;
struct meson_clk_dualdiv_data {struct meson_clk_dualdiv_param const* table; } ;


 unsigned long FUNC_0 (unsigned long,struct meson_clk_dualdiv_param const*) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static const struct meson_clk_dualdiv_param *
FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
        struct meson_clk_dualdiv_data *VAR_2)
{
 const struct meson_clk_dualdiv_param *VAR_3 = VAR_2->table;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6, VAR_7 = 0;

 if (!VAR_3)
  return ((void*)0);

 for (VAR_6 = 0; VAR_3[VAR_6].n1; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1, &VAR_3[VAR_6]);


  if (VAR_5 == VAR_0) {
   return &VAR_3[VAR_6];
  } else if (FUNC_1(VAR_5 - VAR_0) < FUNC_1(VAR_4 - VAR_0)) {
   VAR_4 = VAR_5;
   VAR_7 = VAR_6;
  }
 }

 return (struct meson_clk_dualdiv_param *)&VAR_3[VAR_7];
}
