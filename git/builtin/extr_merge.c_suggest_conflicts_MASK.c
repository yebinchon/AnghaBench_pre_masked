
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct strbuf*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(void)
{
 const char *VAR_5;
 FILE *VAR_6;
 struct strbuf VAR_7 = VAR_0;

 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = FUNC_9(VAR_5, "a");
 FUNC_1(&VAR_3, &VAR_7,
         FUNC_4(VAR_2, 1));
 FUNC_3(VAR_7.buf, VAR_6);
 FUNC_8(&VAR_7);
 FUNC_2(VAR_6);
 FUNC_7(VAR_4, VAR_1);
 FUNC_6(FUNC_0("Automatic merge failed; "
   "fix conflicts and then commit the result.\n"));
 return 1;
}
