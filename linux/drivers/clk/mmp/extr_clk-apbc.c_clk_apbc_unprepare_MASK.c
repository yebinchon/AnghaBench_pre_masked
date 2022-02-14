
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_apbc {int flags; scalar_t__ lock; int base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_apbc* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct clk_hw *VAR_4)
{
 struct clk_apbc *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;

 if (VAR_5->lock)
  FUNC_1(VAR_5->lock, VAR_7);

 VAR_6 = FUNC_0(VAR_5->base);
 if (VAR_5->flags & VAR_3)
  VAR_6 &= ~VAR_2;
 VAR_6 &= ~VAR_1;
 FUNC_5(VAR_6, VAR_5->base);

 if (VAR_5->lock)
  FUNC_2(VAR_5->lock, VAR_7);

 FUNC_4(10);

 if (VAR_5->lock)
  FUNC_1(VAR_5->lock, VAR_7);

 VAR_6 = FUNC_0(VAR_5->base);
 VAR_6 &= ~VAR_0;
 FUNC_5(VAR_6, VAR_5->base);

 if (VAR_5->lock)
  FUNC_2(VAR_5->lock, VAR_7);
}
