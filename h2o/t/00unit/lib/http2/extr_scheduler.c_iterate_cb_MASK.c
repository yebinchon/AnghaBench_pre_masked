
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int still_is_active; int bail_out; } ;
typedef TYPE_1__ node_t ;
typedef int h2o_http2_scheduler_openref_t ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(h2o_http2_scheduler_openref_t *VAR_2, int *VAR_3, void *VAR_4)
{
    node_t *VAR_5 = (void *)VAR_2;

    if (VAR_1[0] != '\0')
        FUNC_0(VAR_1, ",");
    FUNC_0(VAR_1, VAR_5->name);
    *VAR_3 = VAR_5->still_is_active;

    if (--VAR_0 == 0)
        return 1;
    return VAR_5->bail_out;
}
