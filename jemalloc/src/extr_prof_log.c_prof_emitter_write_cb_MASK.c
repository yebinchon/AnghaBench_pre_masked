
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prof_emitter_cb_arg_s {int fd; int ret; } ;


 int FUNC_0 (int ,char const*,size_t) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, const char *VAR_2) {
 struct prof_emitter_cb_arg_s *VAR_3 =
     (struct prof_emitter_cb_arg_s *)VAR_1;
 size_t VAR_4 = FUNC_1(VAR_2);





 VAR_3->ret = FUNC_0(VAR_3->fd, VAR_2, VAR_4);
}
