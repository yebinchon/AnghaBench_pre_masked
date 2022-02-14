
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct locked_reg {int key; int lockreg; } ;
struct TYPE_2__ {scalar_t__ base; scalar_t__* kick_key; int * kick_reg; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,scalar_t__,int ,scalar_t__) ;
 struct locked_reg* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(u32 VAR_1, u32 VAR_2)
{
 struct locked_reg *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  FUNC_0(VAR_1, VAR_2, VAR_3->lockreg, VAR_3->key);
 else if (VAR_0.kick_key[0])
  FUNC_1(VAR_1, VAR_2, VAR_0.kick_reg[0], VAR_0.kick_key[0],
       VAR_0.kick_reg[1], VAR_0.kick_key[1]);
 else
  FUNC_3(VAR_2, VAR_0.base + VAR_1);
}
