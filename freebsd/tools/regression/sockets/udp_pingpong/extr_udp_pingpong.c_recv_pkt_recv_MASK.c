
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct test_ctx {int * fds; int name; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int,char*,int ,char const*,int ) ;
 int FUNC_2 (int,char*,int ,char const*,int ) ;
 int FUNC_3 (struct test_ctx*) ;
 scalar_t__ FUNC_4 (int ,void*,size_t,int ) ;

__attribute__((used)) static void
FUNC_5(struct test_ctx *VAR_0, int VAR_1, const char *VAR_2, void *VAR_3,
  size_t VAR_4, struct timespec *VAR_5)
{
    ssize_t VAR_6;

    VAR_6 = FUNC_4(VAR_0->fds[VAR_1], VAR_3, VAR_4, 0);
    FUNC_0(FUNC_3(VAR_0), VAR_5);
    if (VAR_6 < 0) {
        FUNC_1(1, "%s: %s: recv(%d)", VAR_0->name, VAR_2, VAR_0->fds[VAR_1]);
    }
    if (VAR_6 < (ssize_t)VAR_4) {
        FUNC_2(1, "%s: %s: recv(%d): short recv", VAR_0->name, VAR_2,
            VAR_0->fds[VAR_1]);
    }
}
