
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int dummy; } ;
struct stat {int dummy; } ;
struct mount {int root_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct statbuf*,struct stat*) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int ,int ,struct stat*,int ) ;

__attribute__((used)) static int FUNC_4(struct mount *VAR_1, const char *VAR_2, struct statbuf *VAR_3, bool VAR_4) {
    struct stat VAR_5;
    if (FUNC_3(VAR_1->root_fd, FUNC_2(VAR_2), &VAR_5, VAR_4 ? 0 : VAR_0) < 0)
        return FUNC_1();
    FUNC_0(VAR_3, &VAR_5);
    return 0;
}
