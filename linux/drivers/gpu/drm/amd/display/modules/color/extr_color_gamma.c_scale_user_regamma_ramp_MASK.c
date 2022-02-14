
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct regamma_ramp {unsigned short* gamma; } ;
struct pwl_float_data {void* b; void* g; void* r; } ;
struct dividers {int divider3; int divider2; int divider1; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned short,unsigned short) ;
 void* FUNC_1 (void*,int ) ;

__attribute__((used)) static void FUNC_2(struct pwl_float_data *VAR_1,
  const struct regamma_ramp *VAR_2,
  struct dividers VAR_3)
{
 unsigned short VAR_4 = 0xFFFF;
 unsigned short VAR_5 = 0xFF00;
 unsigned short VAR_6 = VAR_5;
 uint32_t VAR_7;
 struct pwl_float_data *VAR_8 = VAR_1;
 struct pwl_float_data *VAR_9 = VAR_8 + VAR_0 - 1;

 VAR_7 = 0;
 do {
  if (VAR_2->gamma[VAR_7] > VAR_5 ||
    VAR_2->gamma[VAR_7 + 256] > VAR_5 ||
    VAR_2->gamma[VAR_7 + 512] > VAR_5) {
   VAR_6 = VAR_4;
   break;
  }
  VAR_7++;
 } while (VAR_7 != VAR_0);

 VAR_7 = 0;
 do {
  VAR_8->r = FUNC_0(
    VAR_2->gamma[VAR_7], VAR_6);
  VAR_8->g = FUNC_0(
    VAR_2->gamma[VAR_7 + 256], VAR_6);
  VAR_8->b = FUNC_0(
    VAR_2->gamma[VAR_7 + 512], VAR_6);

  ++VAR_8;
  ++VAR_7;
 } while (VAR_7 != VAR_0);

 VAR_8->r = FUNC_1(VAR_9->r,
   VAR_3.divider1);
 VAR_8->g = FUNC_1(VAR_9->g,
   VAR_3.divider1);
 VAR_8->b = FUNC_1(VAR_9->b,
   VAR_3.divider1);

 ++VAR_8;

 VAR_8->r = FUNC_1(VAR_9->r,
   VAR_3.divider2);
 VAR_8->g = FUNC_1(VAR_9->g,
   VAR_3.divider2);
 VAR_8->b = FUNC_1(VAR_9->b,
   VAR_3.divider2);

 ++VAR_8;

 VAR_8->r = FUNC_1(VAR_9->r,
   VAR_3.divider3);
 VAR_8->g = FUNC_1(VAR_9->g,
   VAR_3.divider3);
 VAR_8->b = FUNC_1(VAR_9->b,
   VAR_3.divider3);
}
