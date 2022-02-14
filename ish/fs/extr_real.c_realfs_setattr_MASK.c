
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int root_fd; } ;
struct attr {int type; int size; int mode; int gid; int uid; } ;


 int FUNC_0 (char*) ;




 int FUNC_1 () ;
 int FUNC_2 (int,char const*,int ,int ) ;
 int FUNC_3 (int,char const*,int ,int,int ) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (struct mount*,char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct mount *VAR_0, const char *VAR_1, struct attr VAR_2) {
    VAR_1 = FUNC_4(VAR_1);
    int VAR_3 = VAR_0->root_fd;
    int VAR_4;
    switch (VAR_2.type) {
        case 128:
            VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2.uid, -1, 0);
            break;
        case 131:
            VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2.gid, -1, 0);
            break;
        case 130:
            VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_2.mode, 0);
            break;
        case 129:
            return FUNC_5(VAR_0, VAR_1, VAR_2.size);
        default:
            FUNC_0("other attrs");
    }
    if (VAR_4 < 0)
        return FUNC_1();
    return VAR_4;
}
