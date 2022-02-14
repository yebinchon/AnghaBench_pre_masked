
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; scalar_t__ inuse; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

int FUNC_2( int VAR_3 ) {

 int VAR_4;


 if ( VAR_3 ) {

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_1[VAR_4] && VAR_1[VAR_4]->inuse) {
    FUNC_0(VAR_1[VAR_4]->client, VAR_3);
   }
  }

 }
 else {
  FUNC_1();
 }
 return VAR_2;
}
