
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int size; scalar_t__ entries; } ;
typedef TYPE_1__ h2o_headers_t ;
typedef int h2o_header_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

ssize_t FUNC_2(h2o_headers_t *VAR_0, ssize_t VAR_1)
{
    FUNC_0(VAR_1 != -1);

    --VAR_0->size;
    FUNC_1(VAR_0->entries + VAR_1, VAR_0->entries + VAR_1 + 1, sizeof(h2o_header_t) * (VAR_0->size - VAR_1));

    return VAR_1;
}
