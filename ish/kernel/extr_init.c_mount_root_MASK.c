
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_ops const*,char*,char*,int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (char const*,char*) ;

int FUNC_3(const struct fs_ops *VAR_1, const char *VAR_2) {
    char VAR_3[VAR_0 + 1];
    if (FUNC_2(VAR_2, VAR_3) == ((void*)0))
        return FUNC_1();
    int VAR_4 = FUNC_0(VAR_1, VAR_3, "", 0);
    if (VAR_4 < 0)
        return VAR_4;
    return 0;
}
