
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_fs_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(int VAR_6, char **VAR_7) {
    if (VAR_6 <= 2) {
        FUNC_0(VAR_5, "Usage: %s <command> <file1> [file2 ...]\n", VAR_7[0]);
        return 1;
    }

    VAR_3 = FUNC_2();
    VAR_2 = VAR_7[1];

    while (VAR_6-- > 2) {
        FUNC_0(VAR_5, "Adding watch on %s\n", VAR_7[VAR_6]);
        uv_fs_event_t *VAR_8 = FUNC_1(sizeof(uv_fs_event_t));
        FUNC_3(VAR_3, VAR_8);

        FUNC_4(VAR_8, VAR_4, VAR_7[VAR_6], VAR_0);
    }

    return FUNC_5(VAR_3, VAR_1);
}
