
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int cbm_len; int shareable_bits; int min_cbm_bits; } ;
struct rdt_resource {int num_closid; int alloc_capable; int alloc_enabled; TYPE_1__ cache; scalar_t__ default_ctrl; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 struct rdt_resource* VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_3(void)
{
 struct rdt_resource *VAR_4 = &VAR_3[VAR_1];
 u32 VAR_5, VAR_6, VAR_7 = FUNC_0(20) - 1;

 if (FUNC_2(VAR_0, VAR_7, 0))
  return;

 FUNC_1(VAR_0, VAR_5, VAR_6);


 if (VAR_5 != VAR_7)
  return;

 VAR_4->num_closid = 4;
 VAR_4->default_ctrl = VAR_7;
 VAR_4->cache.cbm_len = 20;
 VAR_4->cache.shareable_bits = 0xc0000;
 VAR_4->cache.min_cbm_bits = 2;
 VAR_4->alloc_capable = 1;
 VAR_4->alloc_enabled = 1;

 VAR_2 = 1;
}
