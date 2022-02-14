
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct injected_reply {int len; int buf; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int,int,int *) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(const char *VAR_1, struct injected_reply *VAR_2) {
    FILE *VAR_3;
    if ((VAR_3 = FUNC_3(VAR_1, "r")) == ((void*)0)) {
        FUNC_0(VAR_0, "fopen(%s)", VAR_1);
    }
    struct stat VAR_4;
    if (FUNC_5(FUNC_2(VAR_3), &VAR_4) != 0) {
        FUNC_0(VAR_0, "fstat(%s)", VAR_1);
    }
    VAR_2->len = VAR_4.st_size;
    VAR_2->buf = FUNC_6(VAR_4.st_size);
    int VAR_5 = FUNC_4(VAR_2->buf, 1, VAR_4.st_size, VAR_3);
    if (VAR_5 != VAR_4.st_size) {
        FUNC_0(VAR_0, "fread(%s)", VAR_1);
    }
    FUNC_1(VAR_3);
}
