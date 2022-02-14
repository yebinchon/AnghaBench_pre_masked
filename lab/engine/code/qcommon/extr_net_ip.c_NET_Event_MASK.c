
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ netadr_t ;
typedef int msg_t ;
typedef int fd_set ;
typedef int byte ;
typedef int bufData ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {float value; } ;


 int FUNC_0 (TYPE_1__,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 () ;

void FUNC_5(fd_set *VAR_4)
{
 byte VAR_5[VAR_0 + 1];
 netadr_t VAR_6 = {0};
 msg_t VAR_7;

 while(1)
 {
  FUNC_2(&VAR_7, VAR_5, sizeof(VAR_5));

  if(FUNC_3(&VAR_6, &VAR_7, VAR_4))
  {
   if(VAR_3->value > 0.0f && VAR_3->value <= 100.0f)
   {

    if(FUNC_4() < (int) (((double) VAR_1) / 100.0 * (double) VAR_3->value))
     continue;
   }

   if(VAR_2->integer)
    FUNC_1(&VAR_6, &VAR_7);
   else
    FUNC_0(VAR_6, &VAR_7);
  }
  else
   break;
 }
}
