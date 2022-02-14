
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct core_vmid {int num_vmid; int dc; } ;


 int FUNC_0 (struct core_vmid*,int) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct core_vmid *VAR_0)
{
 int VAR_1;
 uint16_t VAR_2 = FUNC_1(VAR_0->dc);


 for (VAR_1 = 1; VAR_1 < VAR_0->num_vmid; VAR_1++) {
  if (VAR_2 & (1u << VAR_1))
   FUNC_0(VAR_0, VAR_1);
 }
}
