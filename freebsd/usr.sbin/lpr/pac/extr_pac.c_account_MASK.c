
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hent {double h_feetpages; scalar_t__ h_count; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char,char*) ;
 double FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct hent* FUNC_3 (char*) ;
 int * FUNC_4 (char*,int,int *) ;
 struct hent* FUNC_5 (char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_6 (char*,char) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_3)
{
 char VAR_4[VAR_0];
 double VAR_5;
 register char *VAR_6, *VAR_7;
 register struct hent *VAR_8;
 register int VAR_9;

 while (FUNC_4(VAR_4, VAR_0, VAR_3) != ((void*)0)) {
  VAR_6 = VAR_4;
  while (FUNC_0(*VAR_6, " \t"))
   VAR_6++;
  VAR_5 = FUNC_1(VAR_6);
  while (FUNC_0(*VAR_6, ".0123456789"))
   VAR_6++;
  while (FUNC_0(*VAR_6, " \t"))
   VAR_6++;
  for (VAR_7 = VAR_6; !FUNC_0(*VAR_7, " \t\n"); VAR_7++)
   ;
  VAR_9 = FUNC_2(VAR_7);
  *VAR_7 = '\0';
  if (VAR_2 && FUNC_6(VAR_6, ':'))
      VAR_6 = FUNC_6(VAR_6, ':') + 1;
  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8 == ((void*)0)) {
   if (!VAR_1)
    continue;
   VAR_8 = FUNC_3(VAR_6);
  }
  VAR_8->h_feetpages += VAR_5;
  if (VAR_9)
   VAR_8->h_count += VAR_9;
  else
   VAR_8->h_count++;
 }
}
