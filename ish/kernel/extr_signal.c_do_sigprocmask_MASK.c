
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sigset_t_ ;
typedef scalar_t__ dword_t ;
struct TYPE_2__ {int blocked; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(dword_t VAR_5, sigset_t_ VAR_6) {
    if (VAR_5 == VAR_0)
        FUNC_0(VAR_4->blocked | VAR_6);
    else if (VAR_5 == VAR_2)
        FUNC_0(VAR_4->blocked & ~VAR_6);
    else if (VAR_5 == VAR_1)
        FUNC_0(VAR_6);
    else
        return VAR_3;
    return 0;
}
