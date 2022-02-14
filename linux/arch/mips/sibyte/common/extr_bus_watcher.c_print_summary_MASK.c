
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_0, uint32_t VAR_1,
     uint32_t VAR_2)
{
 FUNC_3("Bus watcher error counters: %08x %08x\n", VAR_1, VAR_2);
 FUNC_3("\nLast recorded signature:\n");
 FUNC_3("Request %02x from %d, answered by %d with Dcode %d\n",
        (unsigned int)(FUNC_2(VAR_0) & 0x3f),
        (int)(FUNC_2(VAR_0) >> 6),
        (int)FUNC_1(VAR_0),
        (int)FUNC_0(VAR_0));
}
