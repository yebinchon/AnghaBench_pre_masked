
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int picoMemStream_t ;
struct TYPE_21__ {int nlayers; int nsurfs; int surf; int taglist; TYPE_2__* layer; int nclips; int clip; int nenvs; int env; } ;
typedef TYPE_1__ lwObject ;
struct TYPE_23__ {int offset; } ;
struct TYPE_24__ {int offset; } ;
struct TYPE_22__ {struct TYPE_22__* next; int vmap; TYPE_4__ polygon; TYPE_6__ point; void** bbox; int nvmaps; void* parent; int name; void** pivot; void* flags; void* index; } ;
typedef TYPE_2__ lwNode ;
typedef TYPE_2__ lwLayer ;






 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_6__*,void**) ;
 scalar_t__ FUNC_10 (int *,unsigned int) ;
 scalar_t__ FUNC_11 (int *,unsigned int) ;
 TYPE_1__* FUNC_12 (char*,int *,unsigned int*,int*) ;
 int FUNC_13 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_14 (TYPE_6__*,int ) ;
 int FUNC_15 (int *,unsigned int,TYPE_6__*) ;
 int FUNC_16 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (int *,unsigned int,int *,TYPE_4__*) ;
 int FUNC_19 (int *,unsigned int,TYPE_4__*,int ) ;
 scalar_t__ FUNC_20 (int *,unsigned int) ;
 int FUNC_21 (int *,unsigned int,int *) ;
 scalar_t__ FUNC_22 (int *,unsigned int,int ,int ,int) ;
 int FUNC_23 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_24 (void**,TYPE_2__*) ;
 int FUNC_25 (TYPE_4__*,int *,int *,int *) ;
 int FUNC_26 (int ) ;

lwObject *FUNC_27( char *VAR_4, picoMemStream_t *VAR_5, unsigned int *VAR_6, int *VAR_7 ){
 lwObject *VAR_8;
 lwLayer *VAR_9;
 lwNode *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;



 if ( !VAR_5 ) {
  return ((void*)0);
 }



 FUNC_26( 0 );
 VAR_11 = FUNC_6( VAR_5 );
 VAR_12 = FUNC_6( VAR_5 );
 VAR_13 = FUNC_6( VAR_5 );
 if ( 12 != FUNC_7() ) {
  return ((void*)0);
 }



 if ( VAR_11 != VAR_0 ) {
  if ( VAR_7 ) {
   *VAR_7 = 12;
  }
  return ((void*)0);
 }

 if ( VAR_13 != VAR_1 ) {
  if ( VAR_13 == VAR_2 ) {
   return FUNC_12( VAR_4, VAR_5, VAR_6, VAR_7 );
  }
  else {
   if ( VAR_7 ) {
    *VAR_7 = 12;
   }
   return ((void*)0);
  }
 }



 VAR_8 = FUNC_0( 1, sizeof( lwObject ) );
 if ( !VAR_8 ) {
  goto Fail;
 }

 VAR_9 = FUNC_0( 1, sizeof( lwLayer ) );
 if ( !VAR_9 ) {
  goto Fail;
 }
 VAR_8->layer = VAR_9;



 VAR_11 = FUNC_6( VAR_5 );
 VAR_14 = FUNC_6( VAR_5 );
 if ( 0 > FUNC_7() ) {
  goto Fail;
 }



 while ( 1 ) {
  VAR_14 += VAR_14 & 1;

  switch ( VAR_11 )
  {
  case 136:
   if ( VAR_8->nlayers > 0 ) {
    VAR_9 = FUNC_0( 1, sizeof( lwLayer ) );
    if ( !VAR_9 ) {
     goto Fail;
    }
    FUNC_24( (void **) &VAR_8->layer, VAR_9 );
   }
   VAR_8->nlayers++;

   FUNC_26( 0 );
   VAR_9->index = FUNC_5( VAR_5 );
   VAR_9->flags = FUNC_5( VAR_5 );
   VAR_9->pivot[ 0 ] = FUNC_3( VAR_5 );
   VAR_9->pivot[ 1 ] = FUNC_3( VAR_5 );
   VAR_9->pivot[ 2 ] = FUNC_3( VAR_5 );
   VAR_9->name = FUNC_4( VAR_5 );

   VAR_16 = FUNC_7();
   if ( VAR_16 < 0 || VAR_16 > VAR_14 ) {
    goto Fail;
   }
   if ( VAR_16 <= VAR_14 - 2 ) {
    VAR_9->parent = FUNC_5( VAR_5 );
   }
   VAR_16 = FUNC_7();
   if ( VAR_16 < VAR_14 ) {
    FUNC_1( VAR_5, VAR_14 - VAR_16, VAR_3 );
   }
   break;

  case 135:
   if ( !FUNC_15( VAR_5, VAR_14, &VAR_9->point ) ) {
    goto Fail;
   }
   break;

  case 134:
   if ( !FUNC_19( VAR_5, VAR_14, &VAR_9->polygon,
         VAR_9->point.offset ) ) {
    goto Fail;
   }
   break;

  case 128:
  case 129:
   VAR_10 = ( lwNode * ) FUNC_22( VAR_5, VAR_14, VAR_9->point.offset,
             VAR_9->polygon.offset, VAR_11 == 129 );
   if ( !VAR_10 ) {
    goto Fail;
   }
   FUNC_24( (void **) &VAR_9->vmap, VAR_10 );
   VAR_9->nvmaps++;
   break;

  case 133:
   if ( !FUNC_18( VAR_5, VAR_14, &VAR_8->taglist,
         &VAR_9->polygon ) ) {
    goto Fail;
   }
   break;

  case 141:
   FUNC_26( 0 );
   for ( VAR_15 = 0; VAR_15 < 6; VAR_15++ )
    VAR_9->bbox[ VAR_15 ] = FUNC_3( VAR_5 );
   VAR_16 = FUNC_7();
   if ( VAR_16 < 0 || VAR_16 > VAR_14 ) {
    goto Fail;
   }
   if ( VAR_16 < VAR_14 ) {
    FUNC_1( VAR_5, VAR_14 - VAR_16, VAR_3 );
   }
   break;

  case 131:
   if ( !FUNC_21( VAR_5, VAR_14, &VAR_8->taglist ) ) {
    goto Fail;
   }
   break;

  case 138:
   VAR_10 = ( lwNode * ) FUNC_11( VAR_5, VAR_14 );
   if ( !VAR_10 ) {
    goto Fail;
   }
   FUNC_24( (void **) &VAR_8->env, VAR_10 );
   VAR_8->nenvs++;
   break;

  case 140:
   VAR_10 = ( lwNode * ) FUNC_10( VAR_5, VAR_14 );
   if ( !VAR_10 ) {
    goto Fail;
   }
   FUNC_24( (void **) &VAR_8->clip, VAR_10 );
   VAR_8->nclips++;
   break;

  case 132:
   VAR_10 = ( lwNode * ) FUNC_20( VAR_5, VAR_14 );
   if ( !VAR_10 ) {
    goto Fail;
   }
   FUNC_24( (void **) &VAR_8->surf, VAR_10 );
   VAR_8->nsurfs++;
   break;

  case 139:
  case 130:
  case 137:
  default:
   FUNC_1( VAR_5, VAR_14, VAR_3 );
   break;
  }



  if ( VAR_12 <= FUNC_2( VAR_5 ) - 8 ) {
   break;
  }



  FUNC_26( 0 );
  VAR_11 = FUNC_6( VAR_5 );
  VAR_14 = FUNC_6( VAR_5 );
  if ( 8 != FUNC_7() ) {
   goto Fail;
  }
 }

 if ( VAR_8->nlayers == 0 ) {
  VAR_8->nlayers = 1;
 }

 VAR_9 = VAR_8->layer;
 while ( VAR_9 ) {
  FUNC_9( &VAR_9->point, VAR_9->bbox );
  FUNC_16( &VAR_9->point, &VAR_9->polygon );
  if ( !FUNC_13( &VAR_9->point, &VAR_9->polygon ) ) {
   goto Fail;
  }
  if ( !FUNC_25( &VAR_9->polygon, &VAR_8->taglist,
          &VAR_8->surf, &VAR_8->nsurfs ) ) {
   goto Fail;
  }
  FUNC_23( &VAR_9->point, &VAR_9->polygon );
  if ( !FUNC_14( &VAR_9->point, VAR_9->vmap ) ) {
   goto Fail;
  }
  if ( !FUNC_17( &VAR_9->polygon, VAR_9->vmap ) ) {
   goto Fail;
  }
  VAR_9 = VAR_9->next;
 }

 return VAR_8;

Fail:
 if ( VAR_6 ) {
  *VAR_6 = VAR_11;
 }
 if ( VAR_5 ) {
  if ( VAR_7 ) {
   *VAR_7 = FUNC_2( VAR_5 );
  }
 }
 FUNC_8( VAR_8 );
 return ((void*)0);
}
