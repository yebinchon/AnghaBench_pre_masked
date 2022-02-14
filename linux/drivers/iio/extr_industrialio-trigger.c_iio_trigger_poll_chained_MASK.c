
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {scalar_t__ subirq_base; TYPE_1__* subirqs; int use_count; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct iio_trigger*) ;

void FUNC_4(struct iio_trigger *VAR_1)
{
 int VAR_2;

 if (!FUNC_0(&VAR_1->use_count)) {
  FUNC_1(&VAR_1->use_count, VAR_0);

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (VAR_1->subirqs[VAR_2].enabled)
    FUNC_2(VAR_1->subirq_base + VAR_2);
   else
    FUNC_3(VAR_1);
  }
 }
}
