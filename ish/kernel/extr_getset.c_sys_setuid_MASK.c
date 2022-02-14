
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t_ ;
typedef int int_t ;
struct TYPE_2__ {scalar_t__ uid; scalar_t__ suid; scalar_t__ euid; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 () ;

int_t FUNC_2(uid_t_ VAR_2) {
    FUNC_0("setuid(%d)", VAR_2);
    if (FUNC_1()) {
        VAR_1->uid = VAR_1->suid = VAR_2;
    } else {
        if (VAR_2 != VAR_1->uid && VAR_2 != VAR_1->suid)
            return VAR_0;
    }
    VAR_1->euid = VAR_2;
    return 0;
}
