
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigset_t_ ;
struct TYPE_2__ {int blocked; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(sigset_t_ VAR_2) {
    VAR_1->blocked = (VAR_2 & ~VAR_0);
}
