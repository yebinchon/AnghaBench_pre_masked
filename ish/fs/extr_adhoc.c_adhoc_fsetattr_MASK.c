
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int gid; int uid; } ;
struct fd {TYPE_1__ stat; } ;
struct attr {int type; int mode; int gid; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int FUNC_0(struct fd *VAR_2, struct attr VAR_3) {
    switch (VAR_3.type) {
        case 128:
            VAR_2->stat.uid = VAR_3.uid;
            break;
        case 131:
            VAR_2->stat.gid = VAR_3.gid;
            break;
        case 130:
            VAR_2->stat.mode = (VAR_2->stat.mode & VAR_0) | (VAR_3.mode & ~VAR_0);
            break;
        case 129:
            return VAR_1;
    }
    return 0;
}
