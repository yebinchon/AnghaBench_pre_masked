
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
typedef scalar_t__ imgType_t ;
typedef int imgFlags_t ;
typedef int byte ;
struct TYPE_14__ {int maxTextureSize; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {int * (* Hunk_AllocateTempMemory ) (int) ;} ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int *,int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int,int) ;
 int FUNC_6 (int *,int *,int,int,int ) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int,int,int *,int,int) ;
 int FUNC_9 (int *,int *,int,int) ;
 TYPE_7__ VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_4__* VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_1__ VAR_13 ;
 int * FUNC_10 (int) ;
 int * FUNC_11 (int) ;

__attribute__((used)) static qboolean FUNC_12( byte **VAR_14, int *VAR_15, int *VAR_16, imgType_t VAR_17, imgFlags_t VAR_18, byte **VAR_19, qboolean VAR_20 )
{
 int VAR_21 = *VAR_15;
 int VAR_22 = *VAR_16;
 int VAR_23;
 int VAR_24;
 qboolean VAR_25 = VAR_18 & VAR_2;
 qboolean VAR_26 = VAR_18 & VAR_1;
 qboolean VAR_27 = VAR_18 & VAR_0;
 qboolean VAR_28;


 VAR_20 = VAR_20 && *VAR_14 != ((void*)0);



 if (!VAR_26)
 {
  VAR_23 = VAR_21;
  VAR_24 = VAR_22;
 }
 else
 {
  VAR_23 = FUNC_4(VAR_21);
  VAR_24 = FUNC_4(VAR_22);
 }

 if ( VAR_11->integer && VAR_23 > VAR_21 )
  VAR_23 >>= 1;
 if ( VAR_11->integer && VAR_24 > VAR_22 )
  VAR_24 >>= 1;

 if ( VAR_20 ) {
  while ( VAR_23 > VAR_12->integer ||
          VAR_24 > VAR_12->integer ) {
   VAR_23 = VAR_23 > 1 ? VAR_23 >> 1 : VAR_23;
   VAR_24 = VAR_24 > 1 ? VAR_24 >> 1 : VAR_24;
  }
 }

 if ( VAR_25 && VAR_14 && VAR_19 && VAR_8->integer &&
      VAR_23 < VAR_9->integer && VAR_24 < VAR_9->integer)
 {
  int VAR_29, VAR_30;




  VAR_29 = VAR_23 << VAR_8->integer;
  VAR_30 = VAR_24 << VAR_8->integer;

  while ( VAR_29 > VAR_9->integer
   || VAR_30 > VAR_9->integer ) {
   VAR_29 >>= 1;
   VAR_30 >>= 1;
  }

  while ( VAR_29 > VAR_6.maxTextureSize
   || VAR_30 > VAR_6.maxTextureSize ) {
   VAR_29 >>= 1;
   VAR_30 >>= 1;
  }

  *VAR_19 = VAR_13.Hunk_AllocateTempMemory( VAR_29 * VAR_30 * 4 );

  if (VAR_23 != VAR_21 || VAR_24 != VAR_22)
   FUNC_8 (*VAR_14, VAR_21, VAR_22, *VAR_19, VAR_23, VAR_24);
  else
   FUNC_0(*VAR_19, *VAR_14, VAR_21 * VAR_22 * 4);

  if (VAR_17 == VAR_3)
   FUNC_5(*VAR_19, *VAR_19, VAR_23, VAR_24);

  while (VAR_23 < VAR_29 || VAR_24 < VAR_30)
  {
   VAR_23 <<= 1;
   VAR_24 <<= 1;

   FUNC_1(*VAR_19, VAR_23, VAR_24, VAR_27, (VAR_17 == VAR_4 || VAR_17 == VAR_5));
  }

  if (VAR_17 == VAR_3)
   FUNC_9(*VAR_19, *VAR_19, VAR_23, VAR_24);
  else if (VAR_17 == VAR_4 || VAR_17 == VAR_5)
   FUNC_2(*VAR_19, *VAR_19, VAR_23, VAR_24);





  *VAR_14 = *VAR_19;
 }
 else if ( VAR_23 != VAR_21 || VAR_24 != VAR_22 )
 {
  if (VAR_14 && VAR_19)
  {
   *VAR_19 = VAR_13.Hunk_AllocateTempMemory( VAR_23 * VAR_24 * 4 );
   FUNC_8 (*VAR_14, VAR_21, VAR_22, *VAR_19, VAR_23, VAR_24);
   *VAR_14 = *VAR_19;
  }
 }

 VAR_21 = VAR_23;
 VAR_22 = VAR_24;




 if ( VAR_25 ) {
  VAR_23 >>= VAR_10->integer;
  VAR_24 >>= VAR_10->integer;
 }






 while ( VAR_23 > VAR_6.maxTextureSize
  || VAR_24 > VAR_6.maxTextureSize ) {
  VAR_23 >>= 1;
  VAR_24 >>= 1;
 }




 VAR_23 = FUNC_3(1, VAR_23);
 VAR_24 = FUNC_3(1, VAR_24);

 VAR_28 = (VAR_21 != VAR_23) || (VAR_22 != VAR_24);




 if (VAR_14)
 {
  while (VAR_21 > VAR_23 || VAR_22 > VAR_24)
  {
   if (VAR_17 == VAR_4 || VAR_17 == VAR_5)
    FUNC_6(*VAR_14, *VAR_14, VAR_21, VAR_22, VAR_7);
   else
    FUNC_7(*VAR_14, VAR_21, VAR_22);

   VAR_21 = FUNC_3(1, VAR_21 >> 1);
   VAR_22 = FUNC_3(1, VAR_22 >> 1);
  }
 }

 *VAR_15 = VAR_21;
 *VAR_16 = VAR_22;

 return VAR_28;
}
