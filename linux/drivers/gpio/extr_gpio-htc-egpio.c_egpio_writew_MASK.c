
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct egpio_info {int bus_shift; scalar_t__ base_addr; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(u16 VAR_0, struct egpio_info *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, VAR_1->base_addr + (VAR_2 << VAR_1->bus_shift));
}
