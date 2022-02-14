
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*,char*) ;
 char* VAR_5 ;
 int FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (struct sbuf*) ;
 char* FUNC_13 (struct sbuf*) ;
 int FUNC_14 (struct sbuf*) ;
 int FUNC_15 (struct sbuf*) ;
 struct sbuf* FUNC_16 (int *,int *,int,int ) ;
 int FUNC_17 (int ) ;
 char* FUNC_18 (char*,int ) ;

__attribute__((used)) static void
FUNC_19(void)
{
 FILE *VAR_6;
 struct sbuf *VAR_7;
 char *VAR_8;


 FUNC_1(VAR_2);
 VAR_8 = FUNC_11("config.c.new");
 VAR_6 = FUNC_8(VAR_8, "w");
 if (!VAR_6)
  FUNC_5(2, "%s", VAR_8);
 VAR_7 = FUNC_16(((void*)0), ((void*)0), 2048, VAR_3);
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_12(VAR_7);
 if (VAR_4) {

  FUNC_4(VAR_7);
 } else {
  FUNC_3(VAR_7);
 }
 FUNC_15(VAR_7);





 VAR_8 = FUNC_18(VAR_5, VAR_1);
 if (VAR_8 == ((void*)0))
  FUNC_6(VAR_0, "Something went terribly wrong!");
 *VAR_8 = '\0';
 FUNC_9(VAR_6, "%s", VAR_5);
 FUNC_9(VAR_6, "%s", FUNC_13(VAR_7));
 VAR_8 += FUNC_17(VAR_1);
 FUNC_9(VAR_6, "%s", VAR_8);
 FUNC_14(VAR_7);
 FUNC_7(VAR_6);
 FUNC_10(FUNC_11("config.c.new"), FUNC_11("config.c"));
 FUNC_2();
}
