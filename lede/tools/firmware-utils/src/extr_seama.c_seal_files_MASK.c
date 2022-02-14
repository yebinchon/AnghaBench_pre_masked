
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 char** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(const char * VAR_4)
{
 FILE * VAR_5;
 FILE * VAR_6;
 size_t VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
 {
  if (FUNC_4(VAR_0[VAR_7], 0) < 0)
  {
   FUNC_3("'%s' is not a seama file !\n",VAR_0[VAR_7]);
   return;
  }
 }


 VAR_5 = FUNC_2(VAR_4, "w+");
 if (VAR_5)
 {

  FUNC_6(VAR_5, VAR_2, VAR_3, 0);
  FUNC_5(VAR_5, VAR_2, VAR_3);


  for (VAR_7=0; VAR_7<VAR_1; VAR_7++)
  {
   VAR_6 = FUNC_2(VAR_0[VAR_7], "r+");
   if (VAR_6)
   {
    FUNC_0(VAR_5, VAR_6);
    FUNC_1(VAR_6);
   }
  }

  FUNC_1(VAR_5);
 }
}
