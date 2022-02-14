
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_new_entry_ext {int value; int extra; int object_id; int list_id; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char,int ) ;
 int VAR_0 ;

void FUNC_6(FILE *VAR_1, const char* VAR_2, int VAR_3, struct lev_new_entry_ext* VAR_4) {
  FUNC_0(0 <= VAR_3 && VAR_3 <= 0xff);
  FUNC_4(*VAR_1, "%s+%d\t", VAR_2, VAR_3);
  FUNC_2(VAR_0,VAR_4->list_id);
  FUNC_5('\t', VAR_0);
  FUNC_3(VAR_0,VAR_4->object_id);
  FUNC_5('\t', VAR_0);
  FUNC_4(VAR_0, "%d\t", VAR_4->value);
  FUNC_1(VAR_0, VAR_4->extra, 4);
  FUNC_4(VAR_0, "\n");
}
