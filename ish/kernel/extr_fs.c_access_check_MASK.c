
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct statbuf {scalar_t__ uid; scalar_t__ gid; int mode; } ;
struct TYPE_2__ {scalar_t__ euid; scalar_t__ egid; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 () ;

int FUNC_1(struct statbuf *VAR_2, int VAR_3) {
    if (FUNC_0()) return 0;
    if (VAR_3 == 0) return 0;

    if (VAR_1->euid == VAR_2->uid) {
        VAR_3 <<= 6;
    } else if (VAR_1->egid == VAR_2->gid) {
        VAR_3 <<= 3;
    }
    if (!(VAR_2->mode & VAR_3))
        return VAR_0;
    return 0;
}
