
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_callback_t ;
struct timer_spec {int dummy; } ;
struct timer {int dummy; } ;
struct tgroup {struct timer* timer; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct timer*) ;
 int VAR_0 ;
 int FUNC_2 (struct timer*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct timer* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct timer*,struct timer_spec,struct timer_spec*) ;

__attribute__((used)) static int FUNC_5(struct tgroup *VAR_4, int VAR_5, struct timer_spec VAR_6, struct timer_spec *VAR_7) {
    if (VAR_5 != VAR_0) {
        FUNC_0("unimplemented setitimer %d", VAR_5);
        return VAR_1;
    }

    if (!VAR_4->timer) {
        struct timer *VAR_8 = FUNC_3((timer_callback_t) VAR_3, VAR_2);
        if (FUNC_1(VAR_8))
            return FUNC_2(VAR_8);
        VAR_4->timer = VAR_8;
    }

    return FUNC_4(VAR_4->timer, VAR_6, VAR_7);
}
