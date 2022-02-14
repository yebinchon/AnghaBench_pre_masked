
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int nstime_t ;
struct TYPE_6__ {int epoch; int const interval; } ;
typedef TYPE_1__ arena_decay_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int const*) ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(arena_decay_t *VAR_0, const nstime_t *VAR_1,
    size_t VAR_2) {
 FUNC_3(FUNC_2(VAR_0, VAR_1));

 nstime_t VAR_3;
 FUNC_5(&VAR_3, VAR_1);
 FUNC_8(&VAR_3, &VAR_0->epoch);

 uint64_t VAR_4 = FUNC_6(&VAR_3, &VAR_0->interval);
 FUNC_3(VAR_4 > 0);


 FUNC_5(&VAR_3, &VAR_0->interval);
 FUNC_7(&VAR_3, VAR_4);
 FUNC_4(&VAR_0->epoch, &VAR_3);


 FUNC_1(VAR_0);


 FUNC_0(VAR_0, VAR_4, VAR_2);
}
