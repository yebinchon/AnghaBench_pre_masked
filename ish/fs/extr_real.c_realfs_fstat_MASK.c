
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statbuf {int dummy; } ;
struct stat {int dummy; } ;
struct fd {int real_fd; } ;


 int FUNC_0 (struct statbuf*,struct stat*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_3(struct fd *VAR_0, struct statbuf *VAR_1) {
    struct stat VAR_2;
    if (FUNC_2(VAR_0->real_fd, &VAR_2) < 0)
        return FUNC_1();
    FUNC_0(VAR_1, &VAR_2);
    return 0;
}
