
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pattern_trig_data {int delta_t; TYPE_2__* curr; TYPE_1__* next; } ;
struct TYPE_4__ {int delta_t; int brightness; } ;
struct TYPE_3__ {scalar_t__ brightness; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pattern_trig_data *VAR_1)
{
 int VAR_2;






 if (VAR_1->delta_t == 0 || VAR_1->curr->delta_t < VAR_0)
  return VAR_1->curr->brightness;

 VAR_2 = FUNC_0(VAR_1->next->brightness - VAR_1->curr->brightness);
 VAR_2 = VAR_1->delta_t * VAR_2 / VAR_1->curr->delta_t;

 if (VAR_1->next->brightness > VAR_1->curr->brightness)
  return VAR_1->curr->brightness + VAR_2;
 else
  return VAR_1->curr->brightness - VAR_2;
}
