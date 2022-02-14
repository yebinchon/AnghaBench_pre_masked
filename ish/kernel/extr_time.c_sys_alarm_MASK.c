
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int tv_sec; int tv_nsec; } ;
struct timer_spec {TYPE_1__ value; } ;
struct tgroup {int lock; } ;
struct TYPE_4__ {struct tgroup* group; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (struct tgroup*,int ,struct timer_spec,struct timer_spec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int *) ;

uint_t FUNC_5(uint_t VAR_2) {
    FUNC_0("alarm(%d)", VAR_2);
    struct timer_spec VAR_3 = {
        .value.tv_sec = VAR_2,
    };
    struct timer_spec VAR_4;

    struct tgroup *VAR_5 = VAR_1->group;
    FUNC_2(&VAR_5->lock);
    int VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_3, &VAR_4);
    FUNC_4(&VAR_5->lock);
    if (VAR_6 < 0)
        return VAR_6;


    VAR_2 = VAR_4.value.tv_sec;
    if (VAR_4.value.tv_nsec >= 500000000)
        VAR_2++;
    if (VAR_2 == 0 && !FUNC_3(VAR_4.value))
        VAR_2 = 1;
    return VAR_2;
}
