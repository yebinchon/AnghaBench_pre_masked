
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdrinfo {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct hdrinfo* FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,long,int,int *) ;
 int FUNC_5 (unsigned char*,struct hdrinfo*,unsigned char*,long,int) ;
 int FUNC_6 (int *) ;
 unsigned char* FUNC_7 (char*,long*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

int FUNC_12(int VAR_3, char *VAR_4[])
{
 unsigned char VAR_5[VAR_0];
 unsigned char *VAR_6;
 FILE *VAR_7;
 char *VAR_8 = ((void*)0);
 char *VAR_9;
 struct hdrinfo *VAR_10;
 long VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 for (VAR_13 = 1; VAR_13 < VAR_3; VAR_13++)
 {
  if (FUNC_10(VAR_4[VAR_13], "-1") == 0)
   VAR_1 = VAR_4[VAR_13+1];
  if (FUNC_10(VAR_4[VAR_13], "-2") == 0)
   VAR_2 = VAR_4[VAR_13+1];
  if (FUNC_10(VAR_4[VAR_13], "-o") == 0)
   VAR_8 = VAR_4[VAR_13+1];
  if (FUNC_10(VAR_4[VAR_13], "-ids") == 0)
   FUNC_8();
 }
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_8 == ((void*)0))
  FUNC_9();
 VAR_7 = FUNC_2(VAR_8, "w");
 if (VAR_7 == ((void*)0))
  FUNC_6(VAR_7);
 for (VAR_13 = 1; VAR_13 < VAR_3; VAR_13++)
 {
  if (FUNC_11(VAR_4[VAR_13], "-", 1) != 0)
  {
   VAR_9 = VAR_4[VAR_13++];
   if (VAR_13 >= VAR_3)
    FUNC_9();
   VAR_12 = ((VAR_13 + 1) >= VAR_3);
   VAR_10 = FUNC_1(VAR_9);
   if (VAR_10 == ((void*)0))
    FUNC_9();
   VAR_6 = FUNC_7(VAR_4[VAR_13], &VAR_11);
   if (VAR_6 == ((void*)0))
    FUNC_9();
   FUNC_5(VAR_5, VAR_10, VAR_6, VAR_11, VAR_12);

   if (FUNC_4(VAR_5, VAR_0, 1, VAR_7) != 1)
    FUNC_6(VAR_7);
   if (FUNC_4(VAR_6, VAR_11, 1, VAR_7) != 1)
    FUNC_6(VAR_7);
   FUNC_3(VAR_6);
  }
  else
   VAR_13++;
 }
 if (FUNC_0(VAR_7) != 0)
  FUNC_6(((void*)0));
 return 0;
}
