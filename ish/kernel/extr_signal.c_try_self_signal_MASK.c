
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sighand {int lock; } ;
struct TYPE_3__ {int blocked; struct sighand* sighand; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sighand*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

bool FUNC_6(int VAR_5) {
    FUNC_0(VAR_5 == VAR_2 || VAR_5 == VAR_3);

    struct sighand *VAR_6 = VAR_4->sighand;
    FUNC_2(&VAR_6->lock);
    bool VAR_7 = FUNC_3(VAR_6, VAR_5) != VAR_1 &&
        !FUNC_4(VAR_4->blocked, VAR_5);
    if (VAR_7)
        FUNC_1(VAR_4, VAR_5, VAR_0);
    FUNC_5(&VAR_6->lock);
    return VAR_7;
}
