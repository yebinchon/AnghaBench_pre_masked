
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {int * parent_clk; TYPE_1__* feat; int dss_clk; } ;
typedef int (* dss_div_calc_func ) (unsigned long,void*) ;
struct TYPE_2__ {unsigned long fck_freq_max; unsigned long fck_div_max; unsigned int dss_fck_multiplier; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned int,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;

bool FUNC_5(struct dss_device *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2, dss_div_calc_func VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;

 VAR_9 = VAR_0->feat->fck_freq_max;

 if (VAR_0->parent_clk == ((void*)0)) {
  unsigned int VAR_13;

  VAR_13 = VAR_9 / VAR_1;

  VAR_8 = VAR_1 * VAR_13;

  VAR_8 = FUNC_2(VAR_0->dss_clk, VAR_8);

  return VAR_3(VAR_8, VAR_4);
 }

 VAR_10 = VAR_0->feat->fck_div_max;

 VAR_12 = VAR_0->feat->dss_fck_multiplier;
 VAR_11 = FUNC_1(VAR_0->parent_clk);

 VAR_2 = VAR_2 ? VAR_2 : 1;

 VAR_6 = FUNC_4(VAR_11 * VAR_12 / VAR_2, VAR_10);
 VAR_7 = FUNC_3(FUNC_0(VAR_11 * VAR_12, VAR_9), 1ul);

 for (VAR_5 = VAR_6; VAR_5 >= VAR_7; --VAR_5) {
  VAR_8 = FUNC_0(VAR_11, VAR_5) * VAR_12;

  if (VAR_3(VAR_8, VAR_4))
   return 1;
 }

 return 0;
}
