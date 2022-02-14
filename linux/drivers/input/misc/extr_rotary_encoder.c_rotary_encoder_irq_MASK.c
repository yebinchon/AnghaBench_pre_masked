
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rotary_encoder {int armed; int dir; int access_mutex; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct rotary_encoder*) ;
 int FUNC_3 (struct rotary_encoder*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct rotary_encoder *VAR_3 = VAR_2;
 unsigned int VAR_4;

 FUNC_0(&VAR_3->access_mutex);

 VAR_4 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 0x0:
  if (VAR_3->armed) {
   FUNC_3(VAR_3);
   VAR_3->armed = 0;
  }
  break;

 case 0x1:
 case 0x3:
  if (VAR_3->armed)
   VAR_3->dir = 2 - VAR_4;
  break;

 case 0x2:
  VAR_3->armed = 1;
  break;
 }

 FUNC_1(&VAR_3->access_mutex);

 return VAR_0;
}
