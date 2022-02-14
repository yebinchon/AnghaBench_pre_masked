
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct intsrc {TYPE_1__* is_pic; } ;
struct TYPE_2__ {int (* pic_reprogram_pin ) (struct intsrc*) ;} ;


 struct intsrc** VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct intsrc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(void)
{
 struct intsrc *VAR_3;
 u_int VAR_4;

 FUNC_1(&VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_0[VAR_4];
  if (VAR_3 == ((void*)0))
   continue;
  if (VAR_3->is_pic->pic_reprogram_pin != ((void*)0))
   VAR_3->is_pic->pic_reprogram_pin(VAR_3);
 }
 FUNC_2(&VAR_1);
}
