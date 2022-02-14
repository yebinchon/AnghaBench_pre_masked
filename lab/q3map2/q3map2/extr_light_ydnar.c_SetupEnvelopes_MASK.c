
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_10__ {float photons; float add; int flags; scalar_t__ type; scalar_t__ cluster; float envelope; scalar_t__* mins; scalar_t__* maxs; scalar_t__* origin; scalar_t__* normal; float falloffTolerance; float fade; int envelope2; size_t style; struct TYPE_10__* next; struct TYPE_10__* w; TYPE_1__* si; } ;
typedef TYPE_2__ light_t ;
typedef int buckets ;
struct TYPE_11__ {scalar_t__ cluster; scalar_t__* mins; scalar_t__* maxs; } ;
typedef TYPE_3__ bspLeaf_t ;
struct TYPE_9__ {scalar_t__ noFast; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 void* FUNC_3 (scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float FUNC_5 (scalar_t__*,scalar_t__*,TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 int FUNC_10 (scalar_t__*,float,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_12 (scalar_t__*,float,float,float) ;
 int FUNC_13 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_3__* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_14 (TYPE_2__*) ;
 TYPE_2__* VAR_18 ;
 float VAR_19 ;
 int FUNC_15 (TYPE_2__**,int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 float FUNC_16 (float) ;

void FUNC_17( qboolean VAR_26, qboolean VAR_27 ){
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 light_t *VAR_35, *VAR_36, **VAR_37;
 bspLeaf_t *VAR_38;
 vec3_t VAR_39, VAR_40, VAR_41, VAR_42;
 float VAR_43, VAR_44;
 light_t *VAR_45[ 256 ];



 if ( VAR_18 == ((void*)0) ) {
  return;
 }


 FUNC_6( VAR_15, "--- SetupEnvelopes%s ---\n", VAR_27 ? " (fast)" : "" );


 VAR_23 = 0;
 VAR_22 = 0;
 VAR_37 = &VAR_18;
 while ( *VAR_37 != ((void*)0) )
 {

  VAR_35 = *VAR_37;


  if ( VAR_35->photons < 0.0f || VAR_35->add < 0.0f ) {
   VAR_35->photons *= -1.0f;
   VAR_35->add *= -1.0f;
   VAR_35->flags |= VAR_9;
  }


  if ( VAR_35->type == VAR_2 ) {

   VAR_35->cluster = 0;
   VAR_35->envelope = VAR_13 * 8.0f;
   FUNC_12( VAR_35->mins, VAR_14 * 8.0f, VAR_14 * 8.0f, VAR_14 * 8.0f );
   FUNC_12( VAR_35->maxs, VAR_13 * 8.0f, VAR_13 * 8.0f, VAR_13 * 8.0f );
  }


  else
  {

   VAR_35->cluster = FUNC_3( VAR_35->origin, VAR_5 );


   if ( VAR_35->cluster < 0 ) {

    for ( VAR_29 = 0; VAR_29 < 4; VAR_29++ )
    {

     VAR_32 = ( ( VAR_29 >> 1 ) ^ ( VAR_29 & 1 ? -1 : 0 ) ) + ( VAR_29 & 1 );

     for ( VAR_30 = 0; VAR_30 < 4; VAR_30++ )
     {
      VAR_33 = ( ( VAR_30 >> 1 ) ^ ( VAR_30 & 1 ? -1 : 0 ) ) + ( VAR_30 & 1 );

      for ( VAR_31 = 0; VAR_31 < 4; VAR_31++ )
      {
       VAR_34 = ( ( VAR_31 >> 1 ) ^ ( VAR_31 & 1 ? -1 : 0 ) ) + ( VAR_31 & 1 );


       VAR_39[ 0 ] = VAR_35->origin[ 0 ] + ( VAR_10 * VAR_32 );
       VAR_39[ 1 ] = VAR_35->origin[ 1 ] + ( VAR_10 * VAR_33 );
       VAR_39[ 2 ] = VAR_35->origin[ 2 ] + ( VAR_10 * VAR_34 );


       VAR_35->cluster = FUNC_3( VAR_39, VAR_5 );
       if ( VAR_35->cluster < 0 ) {
        continue;
       }


       FUNC_8( VAR_39, VAR_35->origin );
      }
     }
    }
   }


   if ( VAR_35->cluster >= 0 ) {

    if ( VAR_27 ) {
     VAR_35->flags |= VAR_7;
    }
    else{
     VAR_35->flags &= ~VAR_7;
    }
    if ( VAR_35->si && VAR_35->si->noFast ) {
     VAR_35->flags &= ~( VAR_6 | VAR_7 );
    }


    VAR_35->envelope = 0;


    if ( VAR_17 && VAR_35->type == VAR_0 && VAR_35->w != ((void*)0) ) {

     FUNC_11( VAR_35->normal, -1.0f, VAR_40 );
     for ( VAR_43 = 100.0f; VAR_43 < 130000.0f && VAR_35->envelope == 0; VAR_43 += 10.0f )
     {
      float VAR_46;

      FUNC_10( VAR_35->origin, VAR_43, VAR_35->normal, VAR_39 );
      VAR_46 = FUNC_5( VAR_39, VAR_40, VAR_35->w );
      if ( VAR_46 < 0.0f ) {
       VAR_46 *= -1.0f;
      }
      if ( ( VAR_46 * VAR_35->add ) <= VAR_35->falloffTolerance ) {
       VAR_35->envelope = VAR_43;
      }
     }


     if ( !( VAR_35->flags & VAR_6 ) && !( VAR_35->flags & VAR_7 ) ) {
      VAR_35->envelope = VAR_13 * 8.0f;
     }
    }
    else
    {
     VAR_43 = 0.0f;
     VAR_44 = VAR_35->photons;
    }


    if ( VAR_35->envelope <= 0.0f ) {

     if ( !( VAR_35->flags & VAR_3 ) ) {
      VAR_35->envelope = VAR_13 * 8.0f;
     }


     else if ( ( VAR_35->flags & VAR_4 ) ) {

      VAR_35->envelope = ( ( VAR_44 * VAR_19 ) - VAR_35->falloffTolerance ) / VAR_35->fade;
     }
     else{
      VAR_35->envelope = FUNC_16( VAR_44 / VAR_35->falloffTolerance ) + VAR_43;
     }







    }


    {

     FUNC_2( VAR_41, VAR_42 );


     for ( VAR_28 = 0; VAR_28 < VAR_21; VAR_28++ )
     {

      VAR_38 = &VAR_16[ VAR_28 ];


      if ( VAR_38->cluster < 0 ) {
       continue;
      }
      if ( FUNC_4( VAR_35->cluster, VAR_38->cluster ) == VAR_24 ) {
       continue;
      }


      FUNC_8( VAR_38->mins, VAR_39 );
      FUNC_0( VAR_39, VAR_41, VAR_42 );
      FUNC_8( VAR_38->maxs, VAR_39 );
      FUNC_0( VAR_39, VAR_41, VAR_42 );
     }


     for ( VAR_28 = 0; VAR_28 < 3; VAR_28++ )
     {
      if ( VAR_41[ VAR_28 ] > VAR_35->origin[ VAR_28 ] || VAR_42[ VAR_28 ] < VAR_35->origin[ VAR_28 ] ) {




       FUNC_0( VAR_35->origin, VAR_41, VAR_42 );
      }
     }


     if ( VAR_35->type == VAR_0 || VAR_35->type == VAR_1 ) {
      FUNC_1( VAR_41, VAR_42, VAR_35->origin, VAR_35->normal );
     }


     FUNC_8( VAR_41, VAR_35->mins );
     FUNC_8( VAR_42, VAR_35->maxs );



     FUNC_11( VAR_35->origin, 2, VAR_39 );
     FUNC_13( VAR_39, VAR_42, VAR_39 );
     FUNC_0( VAR_39, VAR_41, VAR_42 );

     FUNC_11( VAR_35->origin, 2, VAR_39 );
     FUNC_13( VAR_39, VAR_41, VAR_39 );
     FUNC_0( VAR_39, VAR_41, VAR_42 );


     FUNC_13( VAR_42, VAR_35->origin, VAR_40 );
     VAR_43 = (float) FUNC_9( VAR_40 );


     if ( VAR_43 < VAR_35->envelope ) {
      VAR_35->envelope = VAR_43;

     }


    }


    if ( VAR_26 ) {
     if ( !( VAR_35->flags & VAR_8 ) ) {
      VAR_35->envelope = 0.0f;
     }
    }
    else
    {
     if ( !( VAR_35->flags & VAR_11 ) ) {
      VAR_35->envelope = 0.0f;
     }
    }
   }


   if ( VAR_35->cluster < 0 || VAR_35->envelope <= 0.0f ) {




    VAR_22++;
    *VAR_37 = VAR_35->next;
    if ( VAR_35->w != ((void*)0) ) {
     FUNC_14( VAR_35->w );
    }
    FUNC_14( VAR_35 );
    continue;
   }
  }


  VAR_35->envelope2 = ( VAR_35->envelope * VAR_35->envelope );


  VAR_23++;


  VAR_37 = &( ( **VAR_37 ).next );
 }


 FUNC_15( VAR_45, 0, sizeof( VAR_45 ) );
 VAR_36 = ((void*)0);
 for ( VAR_35 = VAR_18; VAR_35 != ((void*)0); VAR_35 = VAR_36 )
 {

  VAR_36 = VAR_35->next;


  VAR_35->next = VAR_45[ VAR_35->style ];
  VAR_45[ VAR_35->style ] = VAR_35;


  if ( VAR_35->style != VAR_12 ) {
   VAR_20 = VAR_25;
  }
 }


 VAR_18 = ((void*)0);
 for ( VAR_28 = 255; VAR_28 >= 0; VAR_28-- )
 {
  VAR_36 = ((void*)0);
  for ( VAR_35 = VAR_45[ VAR_28 ]; VAR_35 != ((void*)0); VAR_35 = VAR_36 )
  {
   VAR_36 = VAR_35->next;
   VAR_35->next = VAR_18;
   VAR_18 = VAR_35;
  }
 }


 FUNC_7( "%9d total lights\n", VAR_23 );
 FUNC_7( "%9d culled lights\n", VAR_22 );
}
