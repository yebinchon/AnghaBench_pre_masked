
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int skinname ;
typedef scalar_t__ qboolean ;
struct TYPE_2__ {int nummodels; int numpages; int * modelnames; scalar_t__ modelpage; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int,char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9( void )
{
 int VAR_5;
 int VAR_6;
 char VAR_7[2048];
 char VAR_8[2048];
 char VAR_9[VAR_2];
 char* VAR_10;
 char* VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 qboolean VAR_16;

 VAR_16 = FUNC_5("com_buildscript");

 VAR_4.modelpage = 0;
 VAR_4.nummodels = 0;


 VAR_5 = FUNC_6("models/players", "/", VAR_7, 2048 );
 VAR_10 = VAR_7;
 for (VAR_12=0; VAR_12<VAR_5 && VAR_4.nummodels < VAR_1; VAR_12++,VAR_10+=VAR_14+1)
 {
  VAR_14 = FUNC_4(VAR_10);

  if (VAR_14 && VAR_10[VAR_14-1]=='/') VAR_10[VAR_14-1]='\0';

  if (!FUNC_3(VAR_10,".") || !FUNC_3(VAR_10,".."))
   continue;


  VAR_6 = FUNC_6( FUNC_8("models/players/%s",VAR_10), "tga", VAR_8, 2048 );
  VAR_11 = VAR_8;
  for (VAR_13=0; VAR_13<VAR_6 && VAR_4.nummodels < VAR_1;VAR_13++,VAR_11+=VAR_15+1)
  {
   VAR_15 = FUNC_4(VAR_11);

   FUNC_0(VAR_11,VAR_9, sizeof(VAR_9));


   if (!FUNC_2(VAR_9,"icon_",5))
   {
    FUNC_1( VAR_4.modelnames[VAR_4.nummodels++],
     sizeof( VAR_4.modelnames[VAR_4.nummodels] ),
     "models/players/%s/%s", VAR_10, VAR_9 );


   }

   if( VAR_16 ) {
    FUNC_7( FUNC_8( "sound/player/announce/%s_wins.wav", VAR_9), VAR_3 );
   }
  }
 }



 VAR_4.numpages = VAR_4.nummodels/VAR_0;
 if (VAR_4.nummodels % VAR_0)
  VAR_4.numpages++;
}
