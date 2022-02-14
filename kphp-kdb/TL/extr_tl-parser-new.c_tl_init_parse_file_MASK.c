
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; scalar_t__ len; int ptr; } ;
struct parse {long long len; TYPE_1__ lex; int text; scalar_t__ line_pos; scalar_t__ line; scalar_t__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 long long FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char const*,int ) ;
 long long FUNC_4 (int,int ,long long) ;
 int VAR_4 ;
 int FUNC_5 (long long) ;

struct parse *FUNC_6 (const char *VAR_5) {
  int VAR_6 = FUNC_3 (VAR_5, VAR_0);
  if (VAR_6 < 0) {
    FUNC_1 (VAR_4, "Error %m\n");
    FUNC_0 (0);
    return 0;
  }
  long long VAR_7 = FUNC_2 (VAR_6, 0, VAR_1);
  if (VAR_7 <= 0) {
    FUNC_1 (VAR_4, "size is %lld. Too small.\n", VAR_7);
    return 0;
  }
  static struct parse VAR_8;
  VAR_8.text = FUNC_5 (VAR_7);
  FUNC_2 (VAR_6, 0, VAR_2);
  VAR_8.len = FUNC_4 (VAR_6, VAR_8.text, VAR_7);
  FUNC_0 (VAR_8.len == VAR_7);
  VAR_8.pos = 0;
  VAR_8.line = 0;
  VAR_8.line_pos = 0;
  VAR_8.lex.ptr = VAR_8.text;
  VAR_8.lex.len = 0;
  VAR_8.lex.type = VAR_3;
  return &VAR_8;
}
