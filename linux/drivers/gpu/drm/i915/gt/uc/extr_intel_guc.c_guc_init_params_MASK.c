
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc {int * params; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct intel_guc*) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (struct intel_guc*) ;
 int FUNC_6 (struct intel_guc*) ;

__attribute__((used)) static void FUNC_7(struct intel_guc *VAR_6)
{
 u32 *VAR_7 = VAR_6->params;
 int VAR_8;

 FUNC_0(sizeof(VAR_6->params) != VAR_5 * sizeof(u32));

 VAR_7[VAR_1] = FUNC_3(VAR_6);
 VAR_7[VAR_4] = FUNC_6(VAR_6);
 VAR_7[VAR_3] = FUNC_5(VAR_6);
 VAR_7[VAR_2] = FUNC_4(VAR_6);
 VAR_7[VAR_0] = FUNC_2(VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  FUNC_1("param[%2d] = %#x\n", VAR_8, VAR_7[VAR_8]);
}
