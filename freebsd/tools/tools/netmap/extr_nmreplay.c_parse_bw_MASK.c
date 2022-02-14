
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct _sm {char* member_0; int member_1; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct _sm*,int*) ;

__attribute__((used)) static uint64_t
FUNC_1(const char *VAR_1)
{
    struct _sm VAR_2[] = {
 {"", 1}, {"kK", 1000}, {"mM", 1000000}, {"gG", 1000000000}, {((void*)0), 0}
    };
    int VAR_3;
    uint64_t VAR_4 = (uint64_t)FUNC_0(VAR_1, VAR_2, &VAR_3);
    return VAR_3 ? VAR_0 : VAR_4;
}
