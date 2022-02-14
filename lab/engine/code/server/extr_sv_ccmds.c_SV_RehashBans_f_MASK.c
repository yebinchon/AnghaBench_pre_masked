
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int filepath ;
typedef int fileHandle_t ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_6__ {int isexception; int subnet; TYPE_4__ ip; } ;
struct TYPE_5__ {int * string; } ;


 int FUNC_0 (char*,int,char*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*,TYPE_4__*,int ) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_9, VAR_10;
 fileHandle_t VAR_11;
 char *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 char VAR_17[VAR_0];


 if ( !VAR_5->integer ) {
  return;
 }

 VAR_7 = 0;

 if(!VAR_8->string || !*VAR_8->string)
  return;

 FUNC_0(VAR_17, sizeof(VAR_17), "%s/%s", FUNC_2(), VAR_8->string);

 if((VAR_10 = FUNC_4(VAR_17, &VAR_11)) >= 0)
 {
  if(VAR_10 < 2)
  {

   FUNC_1(VAR_11);
   return;
  }

  VAR_13 = VAR_12 = FUNC_7(VAR_10);

  VAR_10 = FUNC_3(VAR_12, VAR_10, VAR_11);
  FUNC_1(VAR_11);

  VAR_16 = VAR_12 + VAR_10;

  for(VAR_9 = 0; VAR_9 < VAR_4 && VAR_13 + 2 < VAR_16; VAR_9++)
  {

   for(VAR_14 = VAR_13 + 2; VAR_14 < VAR_16 && *VAR_14 != ' '; VAR_14++);

   if(VAR_14 + 1 >= VAR_16)
    break;

   *VAR_14 = '\0';
   VAR_14++;


   for(VAR_15 = VAR_14; VAR_15 < VAR_16 && *VAR_15 != '\n'; VAR_15++);

   if(VAR_15 >= VAR_16)
    break;

   *VAR_15 = '\0';

   if(FUNC_5(VAR_13 + 2, &VAR_6[VAR_9].ip, VAR_3))
   {
    VAR_6[VAR_9].isexception = (VAR_13[0] != '0');
    VAR_6[VAR_9].subnet = FUNC_8(VAR_14);

    if(VAR_6[VAR_9].ip.type == VAR_1 &&
       (VAR_6[VAR_9].subnet < 1 || VAR_6[VAR_9].subnet > 32))
    {
     VAR_6[VAR_9].subnet = 32;
    }
    else if(VAR_6[VAR_9].ip.type == VAR_2 &&
     (VAR_6[VAR_9].subnet < 1 || VAR_6[VAR_9].subnet > 128))
    {
     VAR_6[VAR_9].subnet = 128;
    }
   }

   VAR_13 = VAR_15 + 1;
  }

  VAR_7 = VAR_9;

  FUNC_6(VAR_12);
 }
}
