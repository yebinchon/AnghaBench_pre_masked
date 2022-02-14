
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t leaf; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
typedef int passage_t ;
struct TYPE_6__ {int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;


 int FUNC_0 (char*,int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;

void FUNC_1( void ){
 int VAR_4, VAR_5, VAR_6, VAR_7;
 vportal_t *VAR_8, *VAR_9;
 leaf_t *VAR_10;

 VAR_6 = 0;
 VAR_7 = 0;
 for ( VAR_4 = 0; VAR_4 < VAR_1; VAR_4++ )
 {
  VAR_8 = VAR_3[VAR_4];
  if ( VAR_8->removed ) {
   continue;
  }
  VAR_10 = &VAR_0[VAR_8->leaf];
  for ( VAR_5 = 0; VAR_5 < VAR_10->numportals; VAR_5++ )
  {
   VAR_9 = VAR_10->portals[VAR_5];
   if ( VAR_9->removed ) {
    continue;
   }
   VAR_6 += sizeof( passage_t ) + VAR_2;
   VAR_7++;
  }
 }
 FUNC_0( "%7i average number of passages per leaf\n", VAR_7 / VAR_1 );
 FUNC_0( "%7i MB required passage memory\n", VAR_6 >> 10 >> 10 );
}
