
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct base_data {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_2__ {int base_cache_used; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct base_data *VAR_0)
{
 if (VAR_0->data) {
  FUNC_0(VAR_0->data);
  FUNC_1()->base_cache_used -= VAR_0->size;
 }
}
