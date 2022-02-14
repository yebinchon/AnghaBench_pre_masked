
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {struct ref_storage_be const* be; } ;
struct ref_storage_be {int dummy; } ;



void FUNC_0(struct ref_store *VAR_0,
    const struct ref_storage_be *VAR_1)
{
 VAR_0->be = VAR_1;
}
