
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {scalar_t__ cpu_architecture; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (int const,int ,int ) ;
 int FUNC_1 (int const,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int const) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct jit_ctx*) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static const s8 *FUNC_5(const s8 *VAR_3, const s8 *VAR_4,
       struct jit_ctx *VAR_5)
{
 if (FUNC_4(VAR_3[1])) {
  if (VAR_2 >= 6 ||
      VAR_5->cpu_architecture >= VAR_1) {
   FUNC_3(FUNC_0(VAR_4[1], VAR_0,
     FUNC_2(VAR_3[1])), VAR_5);
  } else {
   FUNC_3(FUNC_1(VAR_4[1], VAR_0,
           FUNC_2(VAR_3[1])), VAR_5);
   FUNC_3(FUNC_1(VAR_4[0], VAR_0,
           FUNC_2(VAR_3[0])), VAR_5);
  }
  VAR_3 = VAR_4;
 }
 return VAR_3;
}
