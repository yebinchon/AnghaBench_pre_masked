
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pattern_trig_data {size_t npatterns; TYPE_1__* patterns; } ;
struct TYPE_2__ {int delta_t; int brightness; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char const*,char*,int *,int *,int*) ;

__attribute__((used)) static int FUNC_1(struct pattern_trig_data *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;

 while (VAR_7 < VAR_4 - 1 && VAR_2->npatterns < VAR_1) {
  VAR_6 = 0;
  VAR_5 = FUNC_0(VAR_3 + VAR_7, "%d %u %n",
    &VAR_2->patterns[VAR_2->npatterns].brightness,
    &VAR_2->patterns[VAR_2->npatterns].delta_t, &VAR_6);
  if (VAR_5 != 2) {
   VAR_2->npatterns = 0;
   return -VAR_0;
  }

  VAR_7 += VAR_6;
  VAR_2->npatterns++;
 }

 return 0;
}
