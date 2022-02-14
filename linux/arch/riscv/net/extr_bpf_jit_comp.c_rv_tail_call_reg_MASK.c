
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv_jit_context {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rv_jit_context*) ;
 scalar_t__ FUNC_2 (struct rv_jit_context*) ;

__attribute__((used)) static u8 FUNC_3(struct rv_jit_context *VAR_3)
{
 FUNC_1(VAR_3);

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_0, &VAR_3->flags);
  return VAR_2;
 }
 return VAR_1;
}
