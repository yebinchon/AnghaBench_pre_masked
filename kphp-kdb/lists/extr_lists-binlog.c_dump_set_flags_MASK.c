
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_flags {int type; int object_id; int list_id; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,char const*,int) ;
 int FUNC_4 (char,int *) ;

void FUNC_5 (FILE *VAR_1, const char* VAR_2, int VAR_3, struct lev_set_flags* VAR_4) {
  FUNC_0(0 <= VAR_3 && VAR_3 <= 0xff);
  FUNC_3(VAR_1, "%s+%d\t", VAR_2, VAR_4->type-VAR_0);
  FUNC_1(VAR_1,VAR_4->list_id);
  FUNC_4('\t', VAR_1);
  FUNC_2(VAR_1,VAR_4->object_id);
  FUNC_4('\n', VAR_1);
}
