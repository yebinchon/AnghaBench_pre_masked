
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeti_ts {int mutex; scalar_t__ attn_gpio; scalar_t__ running; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct eeti_ts*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct eeti_ts *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_2(&VAR_3->mutex);

 do {






  if (VAR_3->attn_gpio &&
      !FUNC_1(VAR_3->attn_gpio)) {
   break;
  }

  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   break;

 } while (VAR_3->running && VAR_3->attn_gpio);

 FUNC_3(&VAR_3->mutex);
 return VAR_0;
}
