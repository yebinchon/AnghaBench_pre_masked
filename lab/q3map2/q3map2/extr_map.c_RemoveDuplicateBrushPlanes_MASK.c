
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int planenum; } ;
typedef TYPE_1__ side_t ;
typedef int qboolean ;
struct TYPE_5__ {int numsides; int brushNum; int entityNum; TYPE_1__* sides; } ;
typedef TYPE_2__ brush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;

qboolean FUNC_1( brush_t *VAR_2 ){
 int VAR_3, VAR_4, VAR_5;
 side_t *VAR_6;

 VAR_6 = VAR_2->sides;

 for ( VAR_3 = 1 ; VAR_3 < VAR_2->numsides ; VAR_3++ ) {


  if ( VAR_6[VAR_3].planenum == -1 ) {
   FUNC_0( "degenerate plane", VAR_2->entityNum, VAR_2->brushNum, VAR_0 );

   for ( VAR_5 = VAR_3 + 1 ; VAR_5 < VAR_2->numsides ; VAR_5++ ) {
    VAR_6[VAR_5 - 1] = VAR_6[VAR_5];
   }
   VAR_2->numsides--;
   VAR_3--;
   continue;
  }


  for ( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ ) {
   if ( VAR_6[VAR_3].planenum == VAR_6[VAR_4].planenum ) {
    FUNC_0( "duplicate plane", VAR_2->entityNum, VAR_2->brushNum, VAR_0 );

    for ( VAR_5 = VAR_3 + 1 ; VAR_5 < VAR_2->numsides ; VAR_5++ ) {
     VAR_6[VAR_5 - 1] = VAR_6[VAR_5];
    }
    VAR_2->numsides--;
    VAR_3--;
    break;
   }

   if ( VAR_6[VAR_3].planenum == ( VAR_6[VAR_4].planenum ^ 1 ) ) {

    FUNC_0( "mirrored plane", VAR_2->entityNum, VAR_2->brushNum, VAR_0 );
    return VAR_0;
   }
  }
 }
 return VAR_1;
}
