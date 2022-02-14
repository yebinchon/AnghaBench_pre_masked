
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;
struct TYPE_3__ {scalar_t__* clients; } ;
struct TYPE_4__ {TYPE_1__ smp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline u32 FUNC_2(enum mdp5_pipe VAR_2, int VAR_3)
{


 if (FUNC_0(VAR_3 >= FUNC_1(VAR_2)))
  return 0;
 return VAR_1->smp.clients[VAR_2] + VAR_3;
}
