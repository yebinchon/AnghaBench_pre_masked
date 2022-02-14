
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_10__ {int len; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_11__ {scalar_t__ size; TYPE_4__* entries; } ;
typedef TYPE_3__ h2o_headers_t ;
struct TYPE_9__ {char* base; size_t len; } ;
struct TYPE_12__ {int flags; int * orig_name; TYPE_1__ value; TYPE_2__* name; } ;
typedef TYPE_4__ h2o_header_t ;
typedef int h2o_header_flags_t ;
struct TYPE_13__ {int * base; } ;


 TYPE_6__ FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(h2o_mem_pool_t *VAR_0, h2o_headers_t *VAR_1, h2o_iovec_t *VAR_2, const char *VAR_3, const char *VAR_4,
                          size_t VAR_5, h2o_header_flags_t VAR_6)
{
    h2o_header_t *VAR_7;

    FUNC_1(VAR_0, VAR_1, VAR_1->size + 1);
    VAR_7 = VAR_1->entries + VAR_1->size++;

    VAR_7->name = VAR_2;
    VAR_7->value.base = (char *)VAR_4;
    VAR_7->value.len = VAR_5;
    VAR_7->orig_name = VAR_3 ? FUNC_0(VAR_0, VAR_3, VAR_2->len).base : ((void*)0);
    VAR_7->flags = VAR_6;
    return VAR_1->size - 1;
}
