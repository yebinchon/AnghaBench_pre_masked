
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {int freq; int leaf_value; struct ccp_list_entry* next; } ;
typedef int dyn_mark_t ;
typedef int E ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,struct ccp_list_entry*) ;
 struct ccp_list_entry* FUNC_4 (struct ccp_list_entry*,struct ccp_list_entry*) ;
 int FUNC_5 (struct ccp_list_entry*,int,int,int ) ;
 struct ccp_list_entry* FUNC_6 (int) ;
 int* FUNC_7 (int) ;
 struct ccp_list_entry* FUNC_8 (struct ccp_list_entry*,int) ;

int* FUNC_9 (int *VAR_1, int VAR_2, int VAR_3, int *VAR_4) {
  int VAR_5;
  FUNC_0 (VAR_3 >= 2);
  int *VAR_6 = FUNC_7 (VAR_2 * sizeof (int));
  dyn_mark_t VAR_7;
  FUNC_1 (VAR_7);
  struct ccp_list_entry *VAR_8 = FUNC_6 (VAR_2 * sizeof (struct ccp_list_entry));
  int VAR_9 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    if (VAR_1[VAR_5]) {
      VAR_8[VAR_9].freq = VAR_1[VAR_5];
      VAR_8[VAR_9].leaf_value = VAR_5;
      VAR_9++;
    }
  }
  *VAR_4 = VAR_9;
  FUNC_0 (VAR_9 > 0);
  FUNC_5 (VAR_8, VAR_9, sizeof (VAR_8[0]), VAR_0);
  if (VAR_9 == 1) {

    VAR_6[VAR_8[0].leaf_value] = VAR_3;
    FUNC_2 (VAR_7);
    return VAR_6;
  }
  struct ccp_list_entry *VAR_10 = FUNC_8 (VAR_8, VAR_9);
  for (VAR_5 = VAR_3-1; VAR_5 >= 1; VAR_5--) {
    VAR_10 = FUNC_4 (VAR_10, FUNC_8 (VAR_8, VAR_9));
  }
  VAR_10 = FUNC_4 (VAR_10, ((void*)0));
  for (VAR_5 = 1; VAR_10 != ((void*)0); VAR_5++) {
    if (VAR_5 < VAR_9) {
      FUNC_3 (VAR_6, VAR_10);
    }
    VAR_10 = VAR_10->next;
  }
  FUNC_2 (VAR_7);
  return VAR_6;
}
