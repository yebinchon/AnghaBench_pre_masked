
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int shader_t ;
struct TYPE_15__ {int stateBits; int adjustColorsForFog; TYPE_1__* bundle; void* active; scalar_t__ isDetail; } ;
typedef TYPE_2__ shaderStage_t ;
typedef void* qboolean ;
struct TYPE_20__ {int integer; } ;
struct TYPE_19__ {int integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_16__ {scalar_t__ lightmapIndex; int numUnfoggedPasses; scalar_t__ sort; scalar_t__ isSky; int name; scalar_t__ polygonOffset; } ;
struct TYPE_14__ {scalar_t__ tcGen; scalar_t__ isLightmap; int * image; } ;
struct TYPE_13__ {scalar_t__ hardwareType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_4 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_5 () ;
 TYPE_11__ VAR_25 ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;
 void* VAR_26 ;
 void* VAR_27 ;
 TYPE_8__* VAR_28 ;
 TYPE_7__* VAR_29 ;
 TYPE_6__* VAR_30 ;
 TYPE_5__ VAR_31 ;
 TYPE_4__ VAR_32 ;
 TYPE_2__* VAR_33 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*,int ) ;

__attribute__((used)) static shader_t *FUNC_10( void ) {
 int VAR_34;
 qboolean VAR_35;
 qboolean VAR_36;

 VAR_35 = VAR_26;
 VAR_36 = VAR_26;




 if ( VAR_32.isSky ) {
  VAR_32.sort = VAR_18;
 }




 if ( VAR_32.polygonOffset && !VAR_32.sort ) {
  VAR_32.sort = VAR_17;
 }




 for ( VAR_34 = 0; VAR_34 < VAR_13; ) {
  shaderStage_t *VAR_37 = &VAR_33[VAR_34];

  if ( !VAR_37->active ) {
   break;
  }


  if ( !VAR_37->bundle[0].image[0] ) {
   VAR_31.Printf( VAR_15, "Shader %s has a stage with no image\n", VAR_32.name );
   VAR_37->active = VAR_26;
   VAR_34++;
   continue;
  }




  if ( VAR_37->isDetail && !VAR_28->integer )
  {
   int VAR_38;

   for(VAR_38 = VAR_34 + 1; VAR_38 < VAR_13; VAR_38++)
   {
    if(!VAR_33[VAR_38].active)
     break;
   }

   if(VAR_38 < VAR_13)
    FUNC_6(VAR_37, VAR_37 + 1, sizeof(*VAR_37) * (VAR_38 - VAR_34));
   else
   {
    if(VAR_34 + 1 < VAR_13)
     FUNC_6(VAR_37, VAR_37 + 1, sizeof(*VAR_37) * (VAR_38 - VAR_34 - 1));

    FUNC_1(&VAR_33[VAR_38 - 1], 0, sizeof(*VAR_33));
   }

   continue;
  }




  if ( VAR_37->bundle[0].isLightmap ) {
   if ( VAR_37->bundle[0].tcGen == VAR_22 ) {
    VAR_37->bundle[0].tcGen = VAR_23;
   }
   VAR_35 = VAR_27;
  } else {
   if ( VAR_37->bundle[0].tcGen == VAR_22 ) {
    VAR_37->bundle[0].tcGen = VAR_24;
   }
  }
  if ( ( VAR_37->stateBits & ( VAR_9 | VAR_5 ) ) &&
    ( VAR_33[0].stateBits & ( VAR_9 | VAR_5 ) ) ) {
   int VAR_39 = VAR_37->stateBits & VAR_9;
   int VAR_40 = VAR_37->stateBits & VAR_5;
   if ( ( ( VAR_39 == VAR_10 ) && ( VAR_40 == VAR_6 ) ) ||
    ( ( VAR_39 == VAR_12 ) && ( VAR_40 == VAR_8 ) ) ) {
    VAR_37->adjustColorsForFog = VAR_1;
   }

   else if ( ( VAR_39 == VAR_11 ) && ( VAR_40 == VAR_7 ) )
   {
    VAR_37->adjustColorsForFog = VAR_0;
   }

   else if ( ( VAR_39 == VAR_10 ) && ( VAR_40 == VAR_7 ) )
   {
    VAR_37->adjustColorsForFog = VAR_2;
   } else {

   }


   if ( !VAR_32.sort ) {

    if ( VAR_37->stateBits & VAR_4 ) {
     VAR_32.sort = VAR_21;
    } else {
     VAR_32.sort = VAR_16;
    }
   }
  }

  VAR_34++;
 }



 if ( !VAR_32.sort ) {
  VAR_32.sort = VAR_20;
 }




 if ( VAR_34 > 1 && ( (VAR_30->integer && !VAR_29->integer) || VAR_25.hardwareType == VAR_3 ) ) {
  FUNC_5();
  VAR_35 = VAR_26;
 }




 VAR_34 = FUNC_0();

 if ( VAR_32.lightmapIndex >= 0 && !VAR_35 ) {
  if (VAR_36) {
   VAR_31.Printf( VAR_14, "WARNING: shader '%s' has VERTEX forced lightmap!\n", VAR_32.name );
  } else {
   VAR_31.Printf( VAR_14, "WARNING: shader '%s' has lightmap but no lightmap stage!\n", VAR_32.name );


  }
 }





 VAR_32.numUnfoggedPasses = VAR_34;


 if (VAR_34 == 0 && !VAR_32.isSky)
  VAR_32.sort = VAR_19;


 FUNC_2();


 FUNC_3();

 return FUNC_4();
}
