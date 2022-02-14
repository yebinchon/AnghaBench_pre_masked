
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IO_APIC_route_entry {int dummy; } ;
union entry_union {struct IO_APIC_route_entry entry; void* w2; void* w1; } ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static struct IO_APIC_route_entry FUNC_1(int VAR_0, int VAR_1)
{
 union entry_union VAR_2;

 VAR_2.w1 = FUNC_0(VAR_0, 0x10 + 2 * VAR_1);
 VAR_2.w2 = FUNC_0(VAR_0, 0x11 + 2 * VAR_1);

 return VAR_2.entry;
}
