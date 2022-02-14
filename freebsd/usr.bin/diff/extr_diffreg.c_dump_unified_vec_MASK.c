
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_vec {int a; int b; int c; int d; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct context_vec* VAR_1 ;
 struct context_vec* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int,int,int *,char,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 char* FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(FILE *VAR_7, FILE *VAR_8, int VAR_9)
{
 struct context_vec *VAR_10 = VAR_2;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 char VAR_19, *VAR_20;

 if (VAR_2 > VAR_1)
  return;

 VAR_16 = VAR_18 = 0;
 VAR_11 = FUNC_0(1, VAR_10->a - VAR_3);
 VAR_12 = FUNC_1(VAR_6[0], VAR_1->b + VAR_3);
 VAR_13 = FUNC_0(1, VAR_10->c - VAR_3);
 VAR_14 = FUNC_1(VAR_6[1], VAR_1->d + VAR_3);

 FUNC_2("@@ -");
 FUNC_5(VAR_11, VAR_12);
 FUNC_2(" +");
 FUNC_5(VAR_13, VAR_14);
 FUNC_2(" @@");
 if ((VAR_9 & VAR_0)) {
  VAR_20 = FUNC_4(VAR_5, VAR_11-1, VAR_7);
  if (VAR_20 != ((void*)0))
   FUNC_2(" %s", VAR_20);
 }
 FUNC_2("\n");





 for (; VAR_10 <= VAR_1; VAR_10++) {
  VAR_15 = VAR_10->a;
  VAR_16 = VAR_10->b;
  VAR_17 = VAR_10->c;
  VAR_18 = VAR_10->d;






  if (VAR_15 <= VAR_16 && VAR_17 <= VAR_18)
   VAR_19 = 'c';
  else
   VAR_19 = (VAR_15 <= VAR_16) ? 'd' : 'a';

  switch (VAR_19) {
  case 'c':
   FUNC_3(VAR_5, VAR_11, VAR_15 - 1, VAR_7, ' ', 0, VAR_9);
   FUNC_3(VAR_5, VAR_15, VAR_16, VAR_7, '-', 0, VAR_9);
   FUNC_3(VAR_4, VAR_17, VAR_18, VAR_8, '+', 0, VAR_9);
   break;
  case 'd':
   FUNC_3(VAR_5, VAR_11, VAR_15 - 1, VAR_7, ' ', 0, VAR_9);
   FUNC_3(VAR_5, VAR_15, VAR_16, VAR_7, '-', 0, VAR_9);
   break;
  case 'a':
   FUNC_3(VAR_4, VAR_13, VAR_17 - 1, VAR_8, ' ', 0, VAR_9);
   FUNC_3(VAR_4, VAR_17, VAR_18, VAR_8, '+', 0, VAR_9);
   break;
  }
  VAR_11 = VAR_16 + 1;
  VAR_13 = VAR_18 + 1;
 }
 FUNC_3(VAR_4, VAR_18 + 1, VAR_14, VAR_8, ' ', 0, VAR_9);

 VAR_1 = VAR_2 - 1;
}
