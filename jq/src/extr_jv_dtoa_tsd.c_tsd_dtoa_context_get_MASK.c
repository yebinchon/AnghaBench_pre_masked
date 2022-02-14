
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtoa_context {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dtoa_context*) ;
 struct dtoa_context* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ,struct dtoa_context*) ;
 int VAR_2 ;
 int VAR_3 ;

inline struct dtoa_context *FUNC_7() {
  FUNC_5(&VAR_1, VAR_3);
  struct dtoa_context *VAR_4 = (struct dtoa_context*)FUNC_4(VAR_0);
  if (!VAR_4) {
    VAR_4 = FUNC_3(sizeof(struct dtoa_context));
    FUNC_2(VAR_4);
    if (FUNC_6(VAR_0, VAR_4) != 0) {
      FUNC_1(VAR_2, "error: cannot set thread specific data");
      FUNC_0();
    }
  }
  return VAR_4;
}
