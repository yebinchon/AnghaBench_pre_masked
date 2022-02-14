
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t fileHandle_t ;
typedef int byte ;
struct TYPE_4__ {int z; } ;
struct TYPE_5__ {TYPE_1__ file; } ;
struct TYPE_6__ {scalar_t__ zipFile; long zipFileLen; TYPE_2__ handleFiles; int zipFilePos; } ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int,size_t) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,long,int) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7( fileHandle_t VAR_8, long VAR_9, int VAR_10 ) {
 int VAR_11;

 if ( !VAR_5 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization" );
  return -1;
 }

 if (VAR_6[VAR_8].zipFile == VAR_7) {


  byte VAR_12[VAR_1];
  int VAR_13;
  int VAR_14 = FUNC_1( VAR_8 );


  if ( VAR_9 < 0 ) {
   switch( VAR_10 ) {
    case 129:
     VAR_13 = VAR_6[VAR_8].zipFileLen + VAR_9;
     break;

    case 130:
     VAR_13 = VAR_14 + VAR_9;
     break;

    case 128:
    default:
     VAR_13 = 0;
     break;
   }

   if ( VAR_13 < 0 ) {
    VAR_13 = 0;
   }

   VAR_10 = 128;
  } else {
   if ( VAR_10 == 129 ) {
    VAR_13 = VAR_6[VAR_8].zipFileLen - VAR_14 + VAR_9;
   } else {
    VAR_13 = VAR_9;
   }
  }

  switch( VAR_10 ) {
   case 128:
    if ( VAR_13 == VAR_14 ) {
     return VAR_9;
    }
    FUNC_6(VAR_6[VAR_8].handleFiles.file.z, VAR_6[VAR_8].zipFilePos);
    FUNC_5(VAR_6[VAR_8].handleFiles.file.z);


   case 129:
   case 130:
    while( VAR_13 > VAR_1 ) {
     FUNC_3( VAR_12, VAR_1, VAR_8 );
     VAR_13 -= VAR_1;
    }
    FUNC_3( VAR_12, VAR_13, VAR_8 );
    return VAR_9;

   default:
    FUNC_0( VAR_0, "Bad origin in FS_Seek" );
    return -1;
  }
 } else {
  FILE *VAR_15;
  VAR_15 = FUNC_2(VAR_8);
  switch( VAR_10 ) {
  case 130:
   VAR_11 = VAR_2;
   break;
  case 129:
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_11 = VAR_4;
   break;
  default:
   FUNC_0( VAR_0, "Bad origin in FS_Seek" );
   break;
  }

  return FUNC_4( VAR_15, VAR_9, VAR_11 );
 }
}
