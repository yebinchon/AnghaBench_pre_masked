
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct IO_APIC_route_entry {int dummy; } ;
struct TYPE_2__ {int member_1; int member_0; } ;
union entry_union {int w1; int w2; struct IO_APIC_route_entry entry; TYPE_1__ member_0; } ;


 int FUNC_0 (int,int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, struct IO_APIC_route_entry VAR_2)
{
 union entry_union VAR_3 = {{0, 0}};

 VAR_3.entry = VAR_2;
 FUNC_0(VAR_0, 0x11 + 2*VAR_1, VAR_3.w2);
 FUNC_0(VAR_0, 0x10 + 2*VAR_1, VAR_3.w1);
}
