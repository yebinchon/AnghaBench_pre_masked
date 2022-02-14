
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 char VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;


 for(; *VAR_1 == ' '; VAR_1++);

 for(; *VAR_1 && VAR_4 < VAR_3 - 1; VAR_1++)
 {
  VAR_2[VAR_4] = *VAR_1;

  if(*VAR_1 == ' ')
  {

   if(VAR_6 > 2)
    continue;

   VAR_6++;
  }
  else if(VAR_4 > 0 && VAR_2[VAR_4 - 1] == VAR_0)
  {
   if(FUNC_1(&VAR_2[VAR_4 - 1]))
   {
    VAR_5--;

    if(FUNC_0(*VAR_1) == 0)
    {


     VAR_4--;
     continue;
    }
   }
   else
   {
    VAR_6 = 0;
    VAR_5++;
   }
  }
  else
  {
   VAR_6 = 0;
   VAR_5++;
  }

  VAR_4++;
 }

 VAR_2[VAR_4] = '\0';


 if( *VAR_2 == '\0' || VAR_5 == 0)
  FUNC_2(VAR_2, "UnnamedPlayer", VAR_3 );
}
