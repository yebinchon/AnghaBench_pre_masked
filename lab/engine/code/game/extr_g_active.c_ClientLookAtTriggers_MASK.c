
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_22__ {size_t entityNum; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_20__ {int contents; } ;
struct TYPE_23__ {int (* look ) (TYPE_5__*,TYPE_5__*,TYPE_4__*) ;TYPE_3__* client; TYPE_2__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_19__ {scalar_t__* stats; int clientNum; int viewangles; } ;
struct TYPE_21__ {int lastLookAt; TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ,int ) ;
 size_t VAR_2 ;
 int FUNC_2 (int ,int,int ,int ) ;
 TYPE_5__* VAR_3 ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int ,int ,int) ;
 int VAR_4 ;

void FUNC_7( gentity_t *VAR_5 ) {
 trace_t VAR_6;
 vec3_t VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 gentity_t* VAR_12;
 gentity_t* VAR_13;


 if ( !VAR_5->client ) {
  return;
 }


 if ( VAR_5->client->ps.stats[VAR_2] <= 0 ) {

  if ( VAR_5->client->lastLookAt ) {
   VAR_13 = &VAR_3[ VAR_5->client->lastLookAt ];
   if( VAR_13->look )
    VAR_13->look( VAR_13, VAR_5, ((void*)0) );
   VAR_5->client->lastLookAt = 0;
  }
  return;
 }


 FUNC_0( VAR_5->client->ps.viewangles, VAR_9, VAR_10, VAR_11 );
 FUNC_1( VAR_5, VAR_9, VAR_10, VAR_11, VAR_7 );
 FUNC_2( VAR_7, 131072, VAR_9, VAR_8 );

 FUNC_6( &VAR_6, VAR_7, VAR_4, VAR_4, VAR_8,
  VAR_5->client->ps.clientNum, VAR_1|VAR_0 );




 if ( VAR_5->client->lastLookAt && VAR_5->client->lastLookAt != VAR_6.entityNum ) {
  VAR_13 = &VAR_3[ VAR_5->client->lastLookAt ];
  if( VAR_13->look )
   VAR_13->look( VAR_13, VAR_5, ((void*)0) );
  VAR_5->client->lastLookAt = 0;
 }

 VAR_12 = &VAR_3[ VAR_6.entityNum ];


 if ( !VAR_6.entityNum || (VAR_12->r.contents & VAR_0) == 0 )
  return;



 VAR_5->client->lastLookAt = VAR_6.entityNum;
 if (VAR_12->look) {
  VAR_12->look(VAR_12, VAR_5, &VAR_6);
 }
}
