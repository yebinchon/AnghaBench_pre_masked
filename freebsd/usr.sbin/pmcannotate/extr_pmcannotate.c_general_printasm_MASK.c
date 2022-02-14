
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ en_nsamples; } ;
struct aggent {float ag_nsamples; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 struct entry* FUNC_2 (uintptr_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*,void**) ;

__attribute__((used)) static void
FUNC_7(FILE *VAR_2, struct aggent *VAR_3)
{
 char VAR_4[VAR_0];
 struct entry *VAR_5;
 int VAR_6;
 void *VAR_7;

 while (FUNC_0(VAR_4, VAR_0, VAR_2) != ((void*)0)) {
  if ((VAR_6 = FUNC_4(VAR_4)) != 0) {
   FUNC_1(VAR_2, VAR_6 * -1, VAR_1);
   break;
  }
  if (!FUNC_3(VAR_4))
   continue;
  if (FUNC_6(VAR_4, " %p:", &VAR_7) != 1)
   continue;
  VAR_5 = FUNC_2((uintptr_t)VAR_7);
  if (VAR_5 == ((void*)0))
   FUNC_5("\t| %s", VAR_4);
  else
   FUNC_5("%.2f%%\t| %s",
       (float)VAR_5->en_nsamples * 100 / VAR_3->ag_nsamples,
       VAR_4);
 }
}
