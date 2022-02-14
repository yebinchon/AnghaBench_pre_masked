
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {int cursize; scalar_t__ data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_3 (void)
{
 int VAR_5;
 char *VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;




 qboolean VAR_9 = VAR_3;
 qboolean VAR_10 = VAR_3;
 while (VAR_1.cursize)
 {
  if ( VAR_2 > 0 ) {


   VAR_2--;
   break;
  }


  VAR_6 = (char *)VAR_1.data;

  VAR_8 = 0;
  for (VAR_5=0 ; VAR_5< VAR_1.cursize ; VAR_5++)
  {
   if (VAR_6[VAR_5] == '"')
    VAR_8++;

   if ( !(VAR_8&1)) {
    if (VAR_5 < VAR_1.cursize - 1) {
     if (! VAR_9 && VAR_6[VAR_5] == '/' && VAR_6[VAR_5+1] == '/')
      VAR_10 = VAR_4;
     else if (! VAR_10 && VAR_6[VAR_5] == '/' && VAR_6[VAR_5+1] == '*')
      VAR_9 = VAR_4;
     else if (VAR_9 && VAR_6[VAR_5] == '*' && VAR_6[VAR_5+1] == '/') {
      VAR_9 = VAR_3;



      VAR_5++;
      break;
     }
    }
    if (! VAR_10 && ! VAR_9 && VAR_6[VAR_5] == ';')
     break;
   }
   if (! VAR_9 && (VAR_6[VAR_5] == '\n' || VAR_6[VAR_5] == '\r')) {
    VAR_10 = VAR_3;
    break;
   }
  }

  if( VAR_5 >= (VAR_0 - 1)) {
   VAR_5 = VAR_0 - 1;
  }

  FUNC_1 (VAR_7, VAR_6, VAR_5);
  VAR_7[VAR_5] = 0;





  if (VAR_5 == VAR_1.cursize)
   VAR_1.cursize = 0;
  else
  {
   VAR_5++;
   VAR_1.cursize -= VAR_5;
   FUNC_2 (VAR_6, VAR_6+VAR_5, VAR_1.cursize);
  }



  FUNC_0 (VAR_7);
 }
}
