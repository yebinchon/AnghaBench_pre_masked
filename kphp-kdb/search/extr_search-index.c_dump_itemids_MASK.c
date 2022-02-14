
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int item_id; } ;
typedef int FILE ;


 struct item** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 () ;
 int VAR_1 ;

void FUNC_9 (char *VAR_2) {
  int VAR_3;
  FILE *VAR_4 = FUNC_4 (VAR_2, "w");
  if (VAR_4 == ((void*)0)) {
    FUNC_7 ("fopen (\"%s\", \"w\") fail. %m\n", VAR_2);
    FUNC_1 (1);
  }
  FUNC_8 ();
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    struct item *VAR_5 = VAR_0[VAR_3];
    int VAR_6 = (int) (VAR_5->item_id >> 32);
    if (VAR_6) {
      FUNC_5 (VAR_4, "%d_%d\n", (int) VAR_5->item_id, VAR_6);
    } else {
      FUNC_5 (VAR_4, "%d\n", (int) VAR_5->item_id);
    }
  }
  int VAR_7 = FUNC_3 (VAR_4);
  FUNC_0 (VAR_7 >= 0);
  FUNC_0 (!FUNC_6 (VAR_7));
  FUNC_0 (!FUNC_2 (VAR_4));
}
