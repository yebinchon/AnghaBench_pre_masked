
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_3 ;
 char* FUNC_1 (int ,size_t*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_4, int VAR_5, const char *VAR_6)
{
 size_t VAR_7, VAR_8;
 char *VAR_9;

 for (VAR_8 = 0; VAR_2[VAR_4] < VAR_5 - 1; VAR_8 += VAR_7) {
  if ((VAR_9 = FUNC_1(VAR_3[VAR_4], &VAR_7)) == ((void*)0))
   FUNC_0(VAR_0, "logic error");
  if (VAR_6 != ((void*)0))
   FUNC_2("%s%s", VAR_1 == 1? "\t" : VAR_6, VAR_9);
  VAR_2[VAR_4]++;
 }
 return ((int) VAR_8);
}
