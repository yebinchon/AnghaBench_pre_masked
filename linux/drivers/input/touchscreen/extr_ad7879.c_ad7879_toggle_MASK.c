
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7879 {int disabled; TYPE_1__* input; int suspended; } ;
struct TYPE_2__ {scalar_t__ users; int mutex; } ;


 int FUNC_0 (struct ad7879*) ;
 int FUNC_1 (struct ad7879*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ad7879 *VAR_0, bool VAR_1)
{
 FUNC_2(&VAR_0->input->mutex);

 if (!VAR_0->suspended && VAR_0->input->users != 0) {

  if (VAR_1) {
   if (VAR_0->disabled)
    FUNC_1(VAR_0);
  } else {
   if (!VAR_0->disabled)
    FUNC_0(VAR_0);
  }
 }

 VAR_0->disabled = VAR_1;

 FUNC_3(&VAR_0->input->mutex);
}
