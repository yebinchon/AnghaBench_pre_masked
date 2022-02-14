
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct intel_engine_cs const*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(const struct intel_engine_cs *VAR_1, const u32 *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  u32 VAR_4 = FUNC_0(VAR_1, VAR_3);
  u32 VAR_5 = VAR_2[VAR_3];

  FUNC_1("RING_NONPRIV[%d]: expected 0x%08x, found 0x%08x\n",
   VAR_3, VAR_4, VAR_5);
 }
}
