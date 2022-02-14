
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct entry {scalar_t__ en_nsamples; } ;
struct aggent {float ag_nsamples; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int,int ) ;
 long FUNC_2 (int *) ;
 struct entry* FUNC_3 (uintptr_t) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*,void**) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_3, struct aggent *VAR_4)
{
 char VAR_5[VAR_0];
 long VAR_6;
 struct entry *VAR_7;
 u_int VAR_8;
 int VAR_9, VAR_10, VAR_11;
 void *VAR_12;





 VAR_6 = FUNC_2(VAR_3);
 VAR_11 = 0;
 for (;;) {
  if (FUNC_0(VAR_5, VAR_0, VAR_3) == ((void*)0))
   return (0);
  if (FUNC_4(VAR_5) != 0)
   break;
  VAR_11 = 1;
  VAR_10 = FUNC_5(VAR_5);
  if (VAR_10 != 0) {
   if (FUNC_1(VAR_3, VAR_10 * -1, VAR_1) == -1)
    return (-1);
   return (0);
  }
 }






 VAR_8 = 0;
 do {
  if (VAR_11 == 0)
   return (-1);
  if (FUNC_7(VAR_5, " %p:", &VAR_12) != 1)
   return (-1);
  VAR_7 = FUNC_3((uintptr_t)VAR_12);
  if (VAR_7 != ((void*)0))
   VAR_8 += VAR_7->en_nsamples;
 } while (FUNC_0(VAR_5, VAR_0, VAR_3) != ((void*)0) && FUNC_4(VAR_5) != 0);


 if (FUNC_1(VAR_3, VAR_6, VAR_2) == -1)
  return (-1);


 VAR_9 = 0;
 while (FUNC_0(VAR_5, VAR_0, VAR_3) != ((void*)0) && FUNC_4(VAR_5) == 0) {
  if (VAR_8 == 0 || VAR_9 != 0)
   FUNC_6("\t| %s", VAR_5);
  else {
   VAR_9 = 1;
   FUNC_6("%.2f%%\t| %s",
       (float)VAR_8 * 100 / VAR_4->ag_nsamples, VAR_5);
  }
 }





 for (;;) {
  if (FUNC_0(VAR_5, VAR_0, VAR_3) == ((void*)0))
   return (0);
  if (FUNC_4(VAR_5) == 0)
   break;
  VAR_10 = FUNC_5(VAR_5);
  if (VAR_10 != 0) {
   if (FUNC_1(VAR_3, VAR_10 * -1, VAR_1) == -1)
    return (-1);
   return (0);
  }
 }
 if (FUNC_1(VAR_3, FUNC_8(VAR_5) * -1, VAR_1) == -1)
  return (-1);
 return (0);
}
