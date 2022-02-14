
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwimage_trailer {int size; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (char*,int,int,int *) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (struct fwimage_trailer*,char*,int) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_0, FILE *VAR_1, struct fwimage_trailer *VAR_2, int VAR_3)
{
 while (1) {
  char VAR_4[512];
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4, 1, sizeof(VAR_4), VAR_0);
  if (!VAR_5)
   break;

  VAR_3 -= VAR_5;
  if (VAR_3 < 0)
   return 1;

  VAR_2->size += VAR_5;
  FUNC_2(VAR_2, VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_5, 1, VAR_1);
 }

 return 0;
}
