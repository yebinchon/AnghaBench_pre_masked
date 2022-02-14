
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct test_ctx {int nsent; int * fds; int name; TYPE_2__* test_pkts; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {TYPE_1__* tss; } ;
struct TYPE_3__ {int sent; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,char const*,int ) ;
 int FUNC_2 (int,char*,int ,char const*,int ) ;
 int FUNC_3 (struct test_ctx*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,size_t,int ) ;

__attribute__((used)) static void
FUNC_5(struct test_ctx *VAR_0, int VAR_1, int VAR_2, const char *VAR_3)
{
    ssize_t VAR_4;
    size_t VAR_5;

    VAR_5 = sizeof(VAR_0->test_pkts[VAR_1]);
    FUNC_0(FUNC_3(VAR_0), &VAR_0->test_pkts[VAR_1].tss[VAR_2].sent);
    VAR_4 = FUNC_4(VAR_0->fds[VAR_2], &VAR_0->test_pkts[VAR_1], VAR_5, 0);
    if (VAR_4 < 0) {
        FUNC_1(1, "%s: %s: send(%d)", VAR_0->name, VAR_3, VAR_0->fds[VAR_2]);
    }
    if (VAR_4 < (ssize_t)VAR_5) {
        FUNC_2(1, "%s: %s: send(%d): short send", VAR_0->name, VAR_3,
          VAR_0->fds[VAR_2]);
    }
    VAR_0->nsent += 1;
}
