
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int msg_t ;
typedef int msgBuffer ;
struct TYPE_6__ {int lastClientCommand; scalar_t__* downloadName; scalar_t__ state; } ;
typedef TYPE_1__ client_t ;
typedef int byte ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {TYPE_1__* clients; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_5(void)
{
 int VAR_4, VAR_5 = 0, VAR_6;
 client_t *VAR_7;
 msg_t VAR_8;
 byte VAR_9[VAR_0];

 for(VAR_4=0; VAR_4 < VAR_1->integer; VAR_4++)
 {
  VAR_7 = &VAR_3.clients[VAR_4];

  if(VAR_7->state && *VAR_7->downloadName)
  {
   FUNC_0(&VAR_8, VAR_9, sizeof(VAR_9));
   FUNC_2(&VAR_8, VAR_7->lastClientCommand);

   VAR_6 = FUNC_4(VAR_7, &VAR_8);

   if(VAR_6)
   {
    FUNC_1(&VAR_8, VAR_2);
    FUNC_3(VAR_7, &VAR_8);
    VAR_5 += VAR_6;
   }
  }
 }

 return VAR_5;
}
