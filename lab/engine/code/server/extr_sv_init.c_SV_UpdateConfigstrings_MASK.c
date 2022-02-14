
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* csUpdated; TYPE_2__* gentity; } ;
typedef TYPE_3__ client_t ;
struct TYPE_6__ {int svFlags; } ;
struct TYPE_7__ {TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_3 ;

void FUNC_1(client_t *VAR_4)
{
 int VAR_5;

 for( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ ) {

  if(!VAR_4->csUpdated[VAR_5])
   continue;


  if ( VAR_5 == VAR_0 && VAR_4->gentity &&
   (VAR_4->gentity->r.svFlags & VAR_2) ) {
   continue;
  }
  FUNC_0(VAR_4, VAR_5);
  VAR_4->csUpdated[VAR_5] = VAR_3;
 }
}
