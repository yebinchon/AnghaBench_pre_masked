
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int real_fd; } ;
struct attr {int type; int size; int mode; int gid; int uid; } ;






 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_0, struct attr VAR_1) {
    int VAR_2 = VAR_0->real_fd;
    int VAR_3;
    switch (VAR_1.type) {
        case 128:
            VAR_3 = FUNC_2(VAR_2, VAR_1.uid, -1);
            break;
        case 131:
            VAR_3 = FUNC_2(VAR_2, VAR_1.gid, -1);
            break;
        case 130:
            VAR_3 = FUNC_1(VAR_2, VAR_1.mode);
            break;
        case 129:
            VAR_3 = FUNC_3(VAR_2, VAR_1.size);
            break;
    }
    if (VAR_3 < 0)
        return FUNC_0();
    return VAR_3;
}
