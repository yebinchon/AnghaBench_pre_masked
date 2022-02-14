
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_encoder {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_encoder*,int *,int*) ;

bool FUNC_2(struct intel_encoder *VAR_0,
       enum pipe *VAR_1)
{
 u8 VAR_2;
 bool VAR_3;

 FUNC_1(VAR_0, &VAR_2, &VAR_3);

 if (VAR_3 || !VAR_2)
  return 0;

 *VAR_1 = FUNC_0(VAR_2) - 1;

 return 1;
}
