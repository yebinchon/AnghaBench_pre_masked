
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int skinname ;
typedef int scratch ;
struct TYPE_2__ {int q3HeadCount; char** q3HeadNames; int * q3HeadIcons; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_8 (char*,char*,...) ;

__attribute__((used)) static void FUNC_9( void )
{
 int VAR_3;
 int VAR_4;
 char VAR_5[2048];
 char VAR_6[2048];
 char VAR_7[VAR_1];
 char VAR_8[256];
 char* VAR_9;
 char* VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_2.q3HeadCount = 0;


 VAR_3 = FUNC_6("models/players", "/", VAR_5, 2048 );
 VAR_9 = VAR_5;
 for (VAR_11=0; VAR_11<VAR_3 && VAR_2.q3HeadCount < VAR_0; VAR_11++,VAR_9+=VAR_15+1)
 {
  VAR_15 = FUNC_5(VAR_9);

  if (VAR_15 && VAR_9[VAR_15-1]=='/') VAR_9[VAR_15-1]='\0';

  if (!FUNC_4(VAR_9,".") || !FUNC_4(VAR_9,".."))
   continue;


  VAR_4 = FUNC_6( FUNC_8("models/players/%s",VAR_9), "tga", VAR_6, 2048 );
  VAR_10 = VAR_6;
  for (VAR_12=0; VAR_12<VAR_4 && VAR_2.q3HeadCount < VAR_0;VAR_12++,VAR_10+=VAR_16+1)
  {
   VAR_16 = FUNC_5(VAR_10);

   FUNC_0(VAR_10, VAR_7, sizeof(VAR_7));


   if (FUNC_3(VAR_7, "icon_", 5) == 0 && !(FUNC_2(VAR_7,"icon_blue") == 0 || FUNC_2(VAR_7,"icon_red") == 0))
   {
    if (FUNC_2(VAR_7, "icon_default") == 0) {
     FUNC_1( VAR_8, sizeof(VAR_8), "%s", VAR_9);
    } else {
     FUNC_1( VAR_8, sizeof(VAR_8), "%s/%s",VAR_9, VAR_7 + 5);
    }
    VAR_14 = 0;
    for(VAR_13=0;VAR_13<VAR_2.q3HeadCount;VAR_13++) {
     if (!FUNC_2(VAR_8, VAR_2.q3HeadNames[VAR_2.q3HeadCount])) {
      VAR_14 = 1;
      break;
     }
    }
    if (!VAR_14) {
     FUNC_1( VAR_2.q3HeadNames[VAR_2.q3HeadCount], sizeof(VAR_2.q3HeadNames[VAR_2.q3HeadCount]), "%s", VAR_8);
     VAR_2.q3HeadIcons[VAR_2.q3HeadCount++] = FUNC_7(FUNC_8("models/players/%s/%s",VAR_9,VAR_7));
    }
   }

  }
 }

}
