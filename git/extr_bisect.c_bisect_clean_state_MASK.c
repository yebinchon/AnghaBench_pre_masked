
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int strdup_strings; } ;


 int VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_0 (char*,struct string_list*,int ) ;
 int FUNC_1 (char*,int ,void*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_2 ;
 int FUNC_10 (struct string_list*,int ) ;
 int FUNC_11 (struct string_list*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

int FUNC_14(void)
{
 int VAR_3 = 0;


 struct string_list VAR_4 = VAR_1;
 FUNC_1("refs/bisect", VAR_2, (void *) &VAR_4);
 FUNC_10(&VAR_4, FUNC_13("BISECT_HEAD"));
 VAR_3 = FUNC_0("bisect: remove", &VAR_4, VAR_0);
 VAR_4.strdup_strings = 1;
 FUNC_11(&VAR_4, 0);
 FUNC_12(FUNC_3());
 FUNC_12(FUNC_2());
 FUNC_12(FUNC_4());
 FUNC_12(FUNC_5());
 FUNC_12(FUNC_6());
 FUNC_12(FUNC_8());

 FUNC_12(FUNC_9());




 FUNC_12(FUNC_7());

 return VAR_3;
}
