
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xmlNodePtr ;
typedef TYPE_1__* xmlBufferPtr ;
struct TYPE_8__ {int children; } ;
struct TYPE_7__ {int use; char* content; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,int ,int ,int ) ;

void FUNC_9( xmlNodePtr VAR_5 ){
 xmlBufferPtr VAR_6;
 char VAR_7[VAR_0];

 int VAR_8 = 0;
 int VAR_9;

 FUNC_5( VAR_3->children, VAR_5 );

 if ( VAR_2 ) {
  VAR_6 = FUNC_6();
  FUNC_8( VAR_6, VAR_3, VAR_5, 0, 0 );





  while ( VAR_8 < VAR_6->use )
  {

   ( VAR_6->use - VAR_8 < VAR_0 - 10 ) ? ( VAR_9 = VAR_6->use - VAR_8 ) : ( VAR_9 = VAR_0 - 10 );

   if ( VAR_9 == VAR_0 - 10 ) {
    FUNC_3( VAR_1, "Got to split the buffer\n" );
   }
   FUNC_4( VAR_7, VAR_6->content + VAR_8, VAR_9 );
   VAR_7[VAR_9] = '\0';
   FUNC_0( &VAR_4 );
   FUNC_1( &VAR_4, VAR_7 );
   FUNC_2( VAR_2, &VAR_4 );

   VAR_8 += VAR_9;
  }
  FUNC_7( VAR_6 );
 }
}
