
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_4__ {TYPE_2__* opaque_class; int opaque; } ;
typedef TYPE_1__ IJKFF_Pipeline ;


 int FUNC_0 (char*,int ,char const*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) inline static bool FUNC_1(IJKFF_Pipeline* VAR_1, const char *VAR_2)
{
    if (!VAR_1 || !VAR_1->opaque || !VAR_1->opaque_class) {
        FUNC_0("%s.%s: invalid pipeline\n", VAR_1->opaque_class->name, VAR_2);
        return 0;
    }

    if (VAR_1->opaque_class != &VAR_0) {
        FUNC_0("%s.%s: unsupported method\n", VAR_1->opaque_class->name, VAR_2);
        return 0;
    }

    return 1;
}
