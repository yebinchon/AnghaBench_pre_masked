
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int num_chan; } ;
struct TYPE_4__ {TYPE_1__ spu; int next_chan; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static u8 FUNC_1(void)
{
 u8 VAR_1 = FUNC_0(&VAR_0.next_chan);

 return VAR_1 % VAR_0.spu.num_chan;
}
