
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; int tail; int * buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {



  if (VAR_3[VAR_4].buff == ((void*)0))
   continue;






  FUNC_1(&VAR_0, VAR_5);
  VAR_6 = VAR_3[VAR_4].head;
  FUNC_2(&VAR_0, VAR_5);




  FUNC_0(VAR_3[VAR_4].buff,
      VAR_3[VAR_4].tail,
      VAR_6, VAR_1);

  FUNC_1(&VAR_0, VAR_5);
  VAR_3[VAR_4].tail = VAR_6;
  FUNC_2(&VAR_0, VAR_5);
 }

}
