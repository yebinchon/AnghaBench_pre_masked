
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_guc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_guc*,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_guc *VAR_1,
        u32 VAR_2,
        u32 VAR_3)
{
 u32 VAR_4[] = {
  VAR_0,
  VAR_2,
  VAR_3
 };
 int VAR_5;


 VAR_5 = FUNC_3(VAR_1, VAR_4, FUNC_0(VAR_4), ((void*)0), 0);
 if (VAR_5)
  FUNC_1("CT: deregister %s buffer failed; owner=%d err=%d\n",
     FUNC_2(VAR_3), VAR_2, VAR_5);
 return VAR_5;
}
