
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openfile {int sepstring; int * fp; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct openfile*) ;
 int FUNC_7 (char**) ;
 struct openfile* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char) ;
 int VAR_5 ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_6, char *VAR_7[])
{
 struct openfile *VAR_8;

 if (VAR_6 == 1)
  FUNC_9();
 if (FUNC_2() == -1)
  FUNC_3(1, "unable to limit stdio");
 FUNC_7(VAR_7);
 if (!VAR_3)
  FUNC_9();





 FUNC_0();
 if (FUNC_1() < 0)
  FUNC_3(1, "unable to enter capability mode");

 for (;;) {
  VAR_2 = VAR_1;
  for (VAR_8 = VAR_0; VAR_8->fp != ((void*)0); VAR_8++)
   VAR_2 = FUNC_6(VAR_8);
  if (!VAR_3)
   FUNC_4(0);
  FUNC_5(VAR_1, VAR_5);
  FUNC_5(VAR_8->sepstring, VAR_5);
  if (!VAR_4)
   FUNC_8('\n');
 }
}
