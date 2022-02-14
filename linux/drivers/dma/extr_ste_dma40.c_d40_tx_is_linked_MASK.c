
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d40_chan {TYPE_1__* lcpa; } ;
struct TYPE_2__ {int lcsp3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct d40_chan*) ;
 scalar_t__ FUNC_1 (struct d40_chan*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct d40_chan *VAR_3)
{
 bool VAR_4;

 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_2(&VAR_3->lcpa->lcsp3) & VAR_1;
 else
  VAR_4 = FUNC_2(FUNC_0(VAR_3) + VAR_0)
     & VAR_2;

 return VAR_4;
}
