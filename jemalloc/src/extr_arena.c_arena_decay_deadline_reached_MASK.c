
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nstime_t ;
struct TYPE_3__ {int deadline; } ;
typedef TYPE_1__ arena_decay_t ;


 scalar_t__ FUNC_0 (int *,int const*) ;

__attribute__((used)) static bool
FUNC_1(const arena_decay_t *VAR_0, const nstime_t *VAR_1) {
 return (FUNC_0(&VAR_0->deadline, VAR_1) <= 0);
}
