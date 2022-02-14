
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t_ ;
typedef scalar_t__ uid_t ;
typedef int dword_t ;
struct TYPE_2__ {scalar_t__ gid; scalar_t__ egid; scalar_t__ sgid; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;

dword_t FUNC_2(uid_t_ VAR_2, uid_t_ VAR_3, uid_t_ VAR_4) {
    FUNC_0("setresgid(%d, %d, %d)", VAR_2, VAR_3, VAR_4);
    if (!FUNC_1()) {
        if (VAR_2 != (uid_t) -1 && VAR_2 != VAR_1->gid && VAR_2 != VAR_1->egid && VAR_2 != VAR_1->sgid)
            return VAR_0;
        if (VAR_3 != (uid_t) -1 && VAR_3 != VAR_1->gid && VAR_3 != VAR_1->egid && VAR_3 != VAR_1->sgid)
            return VAR_0;
        if (VAR_4 != (uid_t) -1 && VAR_4 != VAR_1->gid && VAR_4 != VAR_1->egid && VAR_4 != VAR_1->sgid)
            return VAR_0;
    }

    if (VAR_2 != (uid_t) -1)
        VAR_1->gid = VAR_2;
    if (VAR_3 != (uid_t) -1)
        VAR_1->egid = VAR_3;
    if (VAR_4 != (uid_t) -1)
        VAR_1->sgid = VAR_4;
    return 0;
}
