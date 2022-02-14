
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct timespec {int dummy; } ;
struct test_ctx {int ts_type; } ;
struct bintime {int dummy; } ;
 int FUNC_0 () ;

__attribute__((used)) static size_t
FUNC_1(struct test_ctx *VAR_0)
{
    switch (VAR_0->ts_type) {
    case 129:
    case 130:
        return (sizeof(struct timeval));

    case 133:
    case 128:
        return (sizeof(struct bintime));

    case 131:
    case 132:
        return (sizeof(struct timespec));
    }
    FUNC_0();
}
