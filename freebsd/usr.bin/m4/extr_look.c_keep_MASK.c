
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (char**,int,int,char*,int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_3)
{
 if (VAR_1 <= VAR_2) {
  if (VAR_1)
   VAR_1 *= 2;
  else
   VAR_1 = 50;
  VAR_0 = FUNC_0(VAR_0, VAR_1,
      sizeof(char *), "Out of memory while saving %d strings\n",
      VAR_1);
 }
 VAR_0[VAR_2++] = VAR_3;
}
