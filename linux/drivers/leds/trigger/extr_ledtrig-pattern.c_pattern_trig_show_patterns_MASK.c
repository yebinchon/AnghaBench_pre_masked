
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pattern_trig_data {int npatterns; int is_hw_pattern; int lock; TYPE_1__* patterns; } ;
typedef int ssize_t ;
struct TYPE_2__ {int delta_t; int brightness; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct pattern_trig_data *VAR_1,
       char *VAR_2, bool VAR_3)
{
 ssize_t VAR_4 = 0;
 int VAR_5;

 FUNC_0(&VAR_1->lock);

 if (!VAR_1->npatterns || (VAR_1->is_hw_pattern ^ VAR_3))
  goto out;

 for (VAR_5 = 0; VAR_5 < VAR_1->npatterns; VAR_5++) {
  VAR_4 += FUNC_2(VAR_2 + VAR_4, VAR_0 - VAR_4,
       "%d %u ",
       VAR_1->patterns[VAR_5].brightness,
       VAR_1->patterns[VAR_5].delta_t);
 }

 VAR_2[VAR_4 - 1] = '\n';

out:
 FUNC_1(&VAR_1->lock);
 return VAR_4;
}
