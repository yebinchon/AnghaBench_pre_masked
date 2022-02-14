
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 scalar_t__ FUNC_7 (int *,size_t,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 long VAR_3 ;
 int * VAR_4 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_11(FILE *VAR_6, long VAR_7)
{
 char VAR_8[VAR_0];
 size_t VAR_9, VAR_10;

 if (VAR_4 != ((void*)0)) {




  if (FUNC_4(VAR_4) != 0)
   FUNC_0(1, "overflow");
  if (FUNC_9(FUNC_5(VAR_4), VAR_5) != 0)
   FUNC_0(1, "overflow");
  if (FUNC_2(VAR_4) != 0)
   FUNC_0(1, "overflow");
  VAR_4 = ((void*)0);
 }

 if (VAR_7 == 0)

  return;

 VAR_3 -= VAR_7;





 do {
  if (FUNC_8(VAR_6) < (off_t)sizeof(VAR_8))
   FUNC_10(VAR_6);
  else
   FUNC_7(VAR_6, -(off_t)sizeof(VAR_8), VAR_1);
  if (FUNC_3(VAR_6))
   FUNC_1(1, "%s: can't seek", VAR_2);
  if ((VAR_10 = FUNC_6(VAR_8, 1, sizeof(VAR_8), VAR_6)) == 0)
   FUNC_1(1, "can't read overflowed output");
  if (FUNC_7(VAR_6, -(off_t)VAR_10, VAR_1) != 0)
   FUNC_0(1, "%s", VAR_2);
  for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++)
   if (VAR_8[VAR_10 - VAR_9] == '\n' && VAR_7-- == 0)
    break;
  if (FUNC_8(VAR_6) == 0)
   break;
 } while (VAR_7 > 0);
 if (FUNC_7(VAR_6, VAR_10 - VAR_9 + 1, VAR_1) != 0)
  FUNC_0(1, "%s", VAR_2);





 VAR_4 = VAR_6;
 VAR_5 = FUNC_8(VAR_4);
}
