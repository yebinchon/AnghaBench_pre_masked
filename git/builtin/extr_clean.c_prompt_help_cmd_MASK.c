
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_2 ?
    FUNC_0("Prompt help:\n"
      "1          - select a numbered item\n"
      "foo        - select item based on unique prefix\n"
      "           - (empty) select nothing\n") :
    FUNC_0("Prompt help:\n"
      "1          - select a single item\n"
      "3-5        - select a range of items\n"
      "2-3,6-9    - select multiple ranges\n"
      "foo        - select item based on unique prefix\n"
      "-...       - unselect specified items\n"
      "*          - choose all items\n"
      "           - (empty) finish selecting\n"));
 FUNC_1(VAR_1);
}
