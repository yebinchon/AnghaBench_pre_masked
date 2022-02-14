
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int type; int b; } ;




 char VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct lev_generic*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;

int FUNC_7 (struct lev_generic *VAR_3, int VAR_4) {
  int VAR_5;
  switch (VAR_3->type) {
    case 129:
      FUNC_0 (!VAR_2 && !FUNC_5 ());
      if (VAR_4 < 24 || VAR_3->b < 0 || VAR_3->b > 4096) { return -2; }
      VAR_5 = 24 + ((VAR_3->b + 3) & -4);
      if (VAR_4 < VAR_5) { return -2; }
      VAR_2 = 1;
      return VAR_5;
    case 128:
      VAR_5 = FUNC_2 (VAR_3, VAR_4);
      if (VAR_0 == 'i') {
        char VAR_6[33];
        FUNC_1 (VAR_6, VAR_1);
        FUNC_6 ("%s\n", VAR_6);
        FUNC_3 (0);
      }
      FUNC_4 ("ERROR: binlog has already a tag.\n");
      return -1;
  }
  FUNC_4 ("unexpected log event type %08x at position %lld\n", VAR_3->type, FUNC_5 ());
  return -1;
}
