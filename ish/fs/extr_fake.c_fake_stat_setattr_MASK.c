
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ish_stat {int mode; int gid; int uid; } ;
struct attr {int type; int mode; int gid; int uid; } ;


 int VAR_0 ;




__attribute__((used)) static void FUNC_0(struct ish_stat *VAR_1, struct attr VAR_2) {
    switch (VAR_2.type) {
        case 128:
            VAR_1->uid = VAR_2.uid;
            break;
        case 130:
            VAR_1->gid = VAR_2.gid;
            break;
        case 129:
            VAR_1->mode = (VAR_1->mode & VAR_0) | (VAR_2.mode & ~VAR_0);
            break;
    }
}
