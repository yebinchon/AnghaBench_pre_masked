
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_1__ client_t ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {TYPE_1__* clients; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_2(void)
{
 int VAR_2, VAR_3 = -1, VAR_4;
 client_t *VAR_5;

 for(VAR_2=0; VAR_2 < VAR_0->integer; VAR_2++)
 {
  VAR_5 = &VAR_1.clients[VAR_2];

  if(VAR_5->state)
  {
   VAR_4 = FUNC_1(VAR_5);

   if(!VAR_4)
    VAR_4 = FUNC_0(VAR_5);

   if(VAR_4 >= 0 && (VAR_3 == -1 || VAR_3 > VAR_4))
    VAR_3 = VAR_4;
  }
 }

 return VAR_3;
}
