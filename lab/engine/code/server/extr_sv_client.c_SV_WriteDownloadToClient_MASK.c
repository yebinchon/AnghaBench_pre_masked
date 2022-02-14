
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
typedef int pakbuf ;
typedef int msg_t ;
typedef int errorMessage ;
struct TYPE_6__ {int downloadSize; size_t downloadCurrentBlock; size_t downloadClientBlock; size_t downloadXmitBlock; int downloadCount; int* downloadBlockSize; int downloadSendTime; scalar_t__* downloadBlocks; void* downloadEOF; scalar_t__ download; scalar_t__* downloadName; } ;
typedef TYPE_1__ client_t ;
struct TYPE_9__ {int integer; } ;
struct TYPE_8__ {scalar_t__ integer; } ;
struct TYPE_7__ {int time; TYPE_1__* clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int,scalar_t__*) ;
 int FUNC_5 (char*,int,char*,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__) ;
 char* FUNC_9 () ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;
 int FUNC_11 (char*,int ,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,scalar_t__,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 char* FUNC_19 (char*,char) ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;

int FUNC_20(client_t *VAR_15, msg_t *VAR_16)
{
 int VAR_17;
 int VAR_18 = 1;
 char VAR_19[1024];
 char VAR_20[VAR_6], *VAR_21;
 int VAR_22;

 if (!*VAR_15->downloadName)
  return 0;

 if(!VAR_15->download)
 {
  qboolean VAR_23 = VAR_9;

  qboolean VAR_24 = VAR_9;



  FUNC_5(VAR_20, sizeof(VAR_20), "%s", VAR_15->downloadName);
  VAR_21 = FUNC_19(VAR_20, '.');

  if(VAR_21)
  {
   *VAR_21 = '\0';


   if(!FUNC_17(VAR_21 + 1, "pk3"))
   {
    const char *VAR_25 = FUNC_9();



    FUNC_2(VAR_25);
    VAR_22 = FUNC_0();

    for(VAR_17 = 0; VAR_17 < VAR_22; VAR_17++)
    {
     if(!FUNC_7(FUNC_1(VAR_17), VAR_20))
     {
      VAR_18 = 0;




      VAR_24 = FUNC_11(VAR_20, VAR_1, VAR_8);
      VAR_23 = VAR_24;

      VAR_23 = VAR_23 || FUNC_11(VAR_20, VAR_0, VAR_7);

      break;
     }
    }
   }
  }

  VAR_15->download = 0;


  if ( !(VAR_11->integer & VAR_2) ||
   (VAR_11->integer & VAR_3) ||
   VAR_23 || VAR_18 ||
   ( VAR_15->downloadSize = FUNC_10( VAR_15->downloadName, &VAR_15->download ) ) < 0 ) {

   if(VAR_18)
   {
    FUNC_4("clientDownload: %d : \"%s\" is not referenced and cannot be downloaded.\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadName);
    FUNC_5(VAR_19, sizeof(VAR_19), "File \"%s\" is not referenced and cannot be downloaded.", VAR_15->downloadName);
   }
   else if (VAR_23) {
    FUNC_4("clientDownload: %d : \"%s\" cannot download id pk3 files\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadName);

    if(VAR_24)
    {
     FUNC_5(VAR_19, sizeof(VAR_19), "Cannot autodownload Team Arena file \"%s\"\n"
         "The Team Arena mission pack can be found in your local game store.", VAR_15->downloadName);
    }
    else

    {
     FUNC_5(VAR_19, sizeof(VAR_19), "Cannot autodownload id pk3 file \"%s\"", VAR_15->downloadName);
    }
   }
   else if ( !(VAR_11->integer & VAR_2) ||
    (VAR_11->integer & VAR_3) ) {

    FUNC_4("clientDownload: %d : \"%s\" download disabled\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadName);
    if (VAR_12->integer) {
     FUNC_5(VAR_19, sizeof(VAR_19), "Could not download \"%s\" because autodownloading is disabled on the server.\n\n"
          "You will need to get this file elsewhere before you "
          "can connect to this pure server.\n", VAR_15->downloadName);
    } else {
     FUNC_5(VAR_19, sizeof(VAR_19), "Could not download \"%s\" because autodownloading is disabled on the server.\n\n"
                    "The server you are connecting to is not a pure server, "
                    "set autodownload to No in your settings and you might be "
                    "able to join the game anyway.\n", VAR_15->downloadName);
    }
   } else {


    FUNC_4("clientDownload: %d : \"%s\" file not found on server\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadName);
    FUNC_5(VAR_19, sizeof(VAR_19), "File \"%s\" not found on server for autodownloading.\n", VAR_15->downloadName);
   }
   FUNC_12( VAR_16, VAR_13 );
   FUNC_15( VAR_16, 0 );
   FUNC_14( VAR_16, -1 );
   FUNC_16( VAR_16, VAR_19 );

   *VAR_15->downloadName = 0;

   if(VAR_15->download)
    FUNC_6(VAR_15->download);

   return 1;
  }

  FUNC_4( "clientDownload: %d : beginning \"%s\"\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadName );


  VAR_15->downloadCurrentBlock = VAR_15->downloadClientBlock = VAR_15->downloadXmitBlock = 0;
  VAR_15->downloadCount = 0;
  VAR_15->downloadEOF = VAR_9;
 }


 while (VAR_15->downloadCurrentBlock - VAR_15->downloadClientBlock < VAR_5 &&
  VAR_15->downloadSize != VAR_15->downloadCount) {

  VAR_17 = (VAR_15->downloadCurrentBlock % VAR_5);

  if (!VAR_15->downloadBlocks[VAR_17])
   VAR_15->downloadBlocks[VAR_17] = FUNC_18(VAR_4);

  VAR_15->downloadBlockSize[VAR_17] = FUNC_8( VAR_15->downloadBlocks[VAR_17], VAR_4, VAR_15->download );

  if (VAR_15->downloadBlockSize[VAR_17] < 0) {

   VAR_15->downloadCount = VAR_15->downloadSize;
   break;
  }

  VAR_15->downloadCount += VAR_15->downloadBlockSize[VAR_17];


  VAR_15->downloadCurrentBlock++;
 }


 if (VAR_15->downloadCount == VAR_15->downloadSize &&
  !VAR_15->downloadEOF &&
  VAR_15->downloadCurrentBlock - VAR_15->downloadClientBlock < VAR_5) {

  VAR_15->downloadBlockSize[VAR_15->downloadCurrentBlock % VAR_5] = 0;
  VAR_15->downloadCurrentBlock++;

  VAR_15->downloadEOF = VAR_10;
 }

 if (VAR_15->downloadClientBlock == VAR_15->downloadCurrentBlock)
  return 0;



 if (VAR_15->downloadXmitBlock == VAR_15->downloadCurrentBlock)
 {

  if (VAR_14.time - VAR_15->downloadSendTime > 1000)
   VAR_15->downloadXmitBlock = VAR_15->downloadClientBlock;
  else
   return 0;
 }


 VAR_17 = (VAR_15->downloadXmitBlock % VAR_5);

 FUNC_12( VAR_16, VAR_13 );
 FUNC_15( VAR_16, VAR_15->downloadXmitBlock );


 if ( VAR_15->downloadXmitBlock == 0 )
  FUNC_14( VAR_16, VAR_15->downloadSize );

 FUNC_15( VAR_16, VAR_15->downloadBlockSize[VAR_17] );


 if(VAR_15->downloadBlockSize[VAR_17])
  FUNC_13(VAR_16, VAR_15->downloadBlocks[VAR_17], VAR_15->downloadBlockSize[VAR_17]);

 FUNC_3( "clientDownload: %d : writing block %d\n", (int) (VAR_15 - VAR_14.clients), VAR_15->downloadXmitBlock );



 VAR_15->downloadXmitBlock++;
 VAR_15->downloadSendTime = VAR_14.time;

 return 1;
}
