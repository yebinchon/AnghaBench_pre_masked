
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mtlId; struct TYPE_4__* next; } ;
typedef TYPE_1__ aseMaterial_t ;



__attribute__((used)) static aseMaterial_t* FUNC_0( aseMaterial_t* VAR_0, int VAR_1 ){
 aseMaterial_t* VAR_2 = VAR_0;

 while ( VAR_2 )
 {
  if ( VAR_1 == VAR_2->mtlId ) {
   break;
  }
  VAR_2 = VAR_2->next;
 }
 return VAR_2;
}
