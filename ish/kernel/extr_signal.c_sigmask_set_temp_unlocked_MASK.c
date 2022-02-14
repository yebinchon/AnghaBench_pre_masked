
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigset_t_ ;
struct TYPE_2__ {int has_saved_mask; int blocked; int saved_mask; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(sigset_t_ VAR_1) {
    VAR_0->saved_mask = VAR_0->blocked;
    VAR_0->has_saved_mask = 1;
    FUNC_0(VAR_1);
}
