
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subnet; int ip; scalar_t__ isexception; } ;
typedef TYPE_1__ serverBan_t ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3, VAR_4;
 serverBan_t *VAR_5;


 if ( !VAR_0->integer ) {
  FUNC_0( "Server is not running.\n" );
  return;
 }


 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  VAR_5 = &VAR_1[VAR_3];
  if(!VAR_5->isexception)
  {
   VAR_4++;

   FUNC_0("Ban #%d: %s/%d\n", VAR_4,
        FUNC_1(VAR_5->ip), VAR_5->subnet);
  }
 }

 for(VAR_3 = VAR_4 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  VAR_5 = &VAR_1[VAR_3];
  if(VAR_5->isexception)
  {
   VAR_4++;

   FUNC_0("Except #%d: %s/%d\n", VAR_4,
        FUNC_1(VAR_5->ip), VAR_5->subnet);
  }
 }
}
