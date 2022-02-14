
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t_ ;
typedef int int_t ;
struct TYPE_2__ {scalar_t__ gid; scalar_t__ sgid; scalar_t__ egid; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 () ;

int_t FUNC_2(uid_t_ VAR_2) {
    FUNC_0("setgid(%d)", VAR_2);
    if (FUNC_1()) {
        VAR_1->gid = VAR_1->sgid = VAR_2;
    } else {
        if (VAR_2 != VAR_1->gid && VAR_2 != VAR_1->sgid)
            return VAR_0;
    }
    VAR_1->egid = VAR_2;
    return 0;
}
