
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{

 FUNC_1("XIVE: Allocating VP block for pool size %u\n", VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_2 == VAR_0))
  FUNC_2("XIVE: Failed to allocate pool VP, KVM might not function\n");

 FUNC_1("XIVE: Pool VPs allocated at 0x%x for %u max CPUs\n",
   VAR_2, VAR_1);
}
