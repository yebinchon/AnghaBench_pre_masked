
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_6__ {int features; scalar_t__ reg; scalar_t__ base; } ;
struct TYPE_5__ {unsigned int shift; int width; } ;
struct TYPE_4__ {unsigned int shift; int width; scalar_t__ offset; } ;
struct ccu_mp {unsigned long fixed_post_div; TYPE_3__ common; TYPE_2__ p; TYPE_1__ m; int mux; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (TYPE_3__*,int *,int,unsigned long) ;
 struct ccu_mp* FUNC_1 (struct clk_hw*) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct ccu_mp *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;


 VAR_2 = FUNC_0(&VAR_3->common, &VAR_3->mux, -1,
        VAR_2);

 VAR_7 = FUNC_2(VAR_3->common.base + VAR_3->common.reg);

 VAR_5 = VAR_7 >> VAR_3->m.shift;
 VAR_5 &= (1 << VAR_3->m.width) - 1;
 VAR_5 += VAR_3->m.offset;
 if (!VAR_5)
  VAR_5++;

 VAR_6 = VAR_7 >> VAR_3->p.shift;
 VAR_6 &= (1 << VAR_3->p.width) - 1;

 VAR_4 = (VAR_2 >> VAR_6) / VAR_5;
 if (VAR_3->common.features & VAR_0)
  VAR_4 /= VAR_3->fixed_post_div;

 return VAR_4;
}
