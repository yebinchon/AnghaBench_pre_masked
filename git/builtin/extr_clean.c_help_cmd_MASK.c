
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 FUNC_1(VAR_0);
 FUNC_2(FUNC_0(
      "clean               - start cleaning\n"
      "filter by pattern   - exclude items from deletion\n"
      "select by numbers   - select items to be deleted by numbers\n"
      "ask each            - confirm each deletion (like \"rm -i\")\n"
      "quit                - stop cleaning\n"
      "help                - this screen\n"
      "?                   - help for prompt selection"
     ));
 FUNC_1(VAR_1);
 return 0;
}
