
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int db; } ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_0) {
    int VAR_1 = FUNC_1(VAR_0->db);
    switch (VAR_1) {
        case 129:
        case 128:
        case 130:
            break;

        default:
            FUNC_0("sqlite error: %s", FUNC_2(VAR_0->db));
    }
}
