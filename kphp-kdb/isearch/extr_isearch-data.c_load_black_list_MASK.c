
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int trie_arr_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 char* VAR_4 ;
 int FUNC_2 (int ) ;
 int * VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_7 ;

void FUNC_8 (int VAR_8) {
  FUNC_0 (VAR_8 + 1 < VAR_0);

  int VAR_9 = FUNC_5 (VAR_5[0], VAR_4, VAR_8);
  if (VAR_7 > 1) {
    FUNC_3 (VAR_6, "black list read %d\n", VAR_8);
  }
  if (VAR_9 != VAR_8) {
    FUNC_3 (VAR_6, "error reading header from index file: read %d bytes instead of %d at position 0: %m\n", VAR_9, VAR_8);
  }
  FUNC_0 (VAR_9 == VAR_8);

  VAR_4[VAR_8] = 0;

  if (VAR_7 > 2) {
    FUNC_3 (VAR_6, "ADD %s\n", VAR_4);
  }
  FUNC_1 (VAR_4, 0);

  VAR_2 = FUNC_7 (VAR_3, VAR_4, 0);
  FUNC_6 ((trie_arr_node *)VAR_4);
  VAR_1 = FUNC_2 (VAR_2);
  FUNC_4 (VAR_1, VAR_4, VAR_2);
}
