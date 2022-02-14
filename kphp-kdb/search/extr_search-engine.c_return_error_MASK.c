
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value_buffer {int (* output_int ) (struct value_buffer*,int ) ;} ;
struct connection {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct connection*,char const*,int ,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct value_buffer*,int ) ;
 int FUNC_3 (struct value_buffer*,struct connection*,char const*,int,int ,int) ;
 int FUNC_4 (struct value_buffer*) ;
 int FUNC_5 (int,char*,char*) ;

__attribute__((used)) static int FUNC_6 (struct connection *VAR_3, const char *VAR_4, int VAR_5, int VAR_6, char *VAR_7) {
  FUNC_5 (1, "ERROR near '%.256s'\n", VAR_7);
  if (VAR_1) {
    struct value_buffer VAR_8;
    if (!FUNC_3 (&VAR_8, VAR_3, VAR_4 - VAR_6, VAR_5 + VAR_6, VAR_0, 64)) {
      return 0;
    }
    VAR_8.output_int (&VAR_8, 0);
    return FUNC_4 (&VAR_8);
  } else {
    return FUNC_0 (VAR_3, VAR_4 - VAR_6, VAR_2, FUNC_1 (VAR_2, "ERROR near '%.256s'\n", VAR_7));
  }
}
