
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_res_to_temp {int resist; int temp; } ;
struct ab8500_gpadc_cfg {int tbl_sz; int vcc; int r_up; struct abx500_res_to_temp* temp_tbl; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ab8500_gpadc_cfg *VAR_1,
  int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = VAR_1->tbl_sz;
 const struct abx500_res_to_temp *VAR_7 = VAR_1->temp_tbl;

 if (VAR_1->vcc < 0 || VAR_2 >= VAR_1->vcc)
  return -VAR_0;

 VAR_4 = VAR_2 * VAR_1->r_up / (VAR_1->vcc - VAR_2);
 if (VAR_4 > VAR_7[0].resist || VAR_4 < VAR_7[VAR_6 - 1].resist)
  return -VAR_0;

 while (!(VAR_4 <= VAR_7[VAR_5].resist && VAR_4 > VAR_7[VAR_5 + 1].resist) &&
   VAR_5 < VAR_6 - 2)
  VAR_5++;


 *VAR_3 = VAR_7[VAR_5].temp * 1000 + ((VAR_7[VAR_5 + 1].temp - VAR_7[VAR_5].temp) * 1000 *
  (VAR_4 - VAR_7[VAR_5].resist)) / (VAR_7[VAR_5 + 1].resist - VAR_7[VAR_5].resist);

 return 0;
}
