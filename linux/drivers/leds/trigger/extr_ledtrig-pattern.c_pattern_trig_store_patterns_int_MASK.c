
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pattern_trig_data {size_t npatterns; TYPE_1__* patterns; } ;
struct TYPE_2__ {int delta_t; int brightness; } ;



__attribute__((used)) static int FUNC_0(struct pattern_trig_data *VAR_0,
        const u32 *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 2) {
  VAR_0->patterns[VAR_0->npatterns].brightness = VAR_1[VAR_3];
  VAR_0->patterns[VAR_0->npatterns].delta_t = VAR_1[VAR_3 + 1];
  VAR_0->npatterns++;
 }

 return 0;
}
