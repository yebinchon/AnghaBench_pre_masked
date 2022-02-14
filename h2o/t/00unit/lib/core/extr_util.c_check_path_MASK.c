
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expected_t {int is_critical; int path; } ;


 int FUNC_0 (char const*,size_t,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, const char *VAR_1, size_t VAR_2, int VAR_3)
{
    struct expected_t **VAR_4 = VAR_0;
    FUNC_1(FUNC_0(VAR_1, VAR_2, (*VAR_4)->path, FUNC_2((*VAR_4)->path)));
    FUNC_1(VAR_3 == (*VAR_4)->is_critical);
    ++*VAR_4;
}
