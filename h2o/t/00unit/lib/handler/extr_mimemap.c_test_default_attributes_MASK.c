
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_compressible; scalar_t__ priority; } ;
typedef TYPE_1__ h2o_mime_attributes_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void)
{
    h2o_mime_attributes_t VAR_2;

    FUNC_0("text/plain", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_1);

    FUNC_0("text/plain; charset=utf-8", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_1);

    FUNC_0("application/xhtml+xml", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_1);

    FUNC_0("application/xhtml+xml; charset=utf-8", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_1);

    FUNC_0("text/css", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_0);

    FUNC_0("text/css; charset=utf-8", &VAR_2);
    FUNC_1(VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_0);

    FUNC_0("application/octet-stream", &VAR_2);
    FUNC_1(!VAR_2.is_compressible);
    FUNC_1(VAR_2.priority == VAR_1);
}
