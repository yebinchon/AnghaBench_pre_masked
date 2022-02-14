
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__* string; } ;
struct TYPE_3__ {scalar_t__ modified; scalar_t__* string; } ;


 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

qboolean FUNC_4(int VAR_8, qboolean VAR_9)
{
 if(VAR_2->modified)
 {
  if(FUNC_1(VAR_5, VAR_2->string) &&
    (*VAR_5 || FUNC_1(VAR_2->string, VAR_0->string)) &&
    (*VAR_2->string || FUNC_1(VAR_5, VAR_0->string)))
  {
   FUNC_0(VAR_8, VAR_9);
   return VAR_7;
  }
  else
   VAR_2->modified = VAR_6;
 }

 if(VAR_8 != VAR_1)
  FUNC_3(VAR_8);
 else if(VAR_3 && !VAR_4)
  FUNC_2();

 return VAR_6;
}
