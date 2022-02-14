
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct intel_gt {struct intel_engine_cs*** engine_class; } ;
struct intel_engine_cs {int dummy; } ;


 size_t const VAR_0 ;
 int FUNC_0 (int,char*,size_t const,size_t const) ;
 void FUNC_1 (struct intel_engine_cs*,int const) ;
 scalar_t__ FUNC_2 (struct intel_engine_cs*) ;

__attribute__((used)) static void
FUNC_3(struct intel_gt *VAR_1, const u8 VAR_2,
    const u8 VAR_3, const u16 VAR_4)
{
 struct intel_engine_cs *VAR_5;

 if (VAR_3 <= VAR_0)
  VAR_5 = VAR_1->engine_class[VAR_2][VAR_3];
 else
  VAR_5 = ((void*)0);

 if (FUNC_2(VAR_5))
  return FUNC_1(VAR_5, VAR_4);

 FUNC_0(1, "unhandled engine interrupt class=0x%x, instance=0x%x\n",
    VAR_2, VAR_3);
}
