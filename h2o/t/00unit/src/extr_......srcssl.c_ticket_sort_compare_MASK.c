
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_session_ticket_t {scalar_t__ not_before; int name; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
    struct st_session_ticket_t *VAR_2 = *(void **)VAR_0, *VAR_3 = *(void **)VAR_1;

    if (VAR_2->not_before != VAR_3->not_before)
        return VAR_2->not_before > VAR_3->not_before ? -1 : 1;
    return FUNC_0(VAR_2->name, VAR_3->name, sizeof(VAR_2->name));
}
