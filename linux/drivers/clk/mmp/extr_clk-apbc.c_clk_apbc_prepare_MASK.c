
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_apbc {int flags; scalar_t__ lock; int base; int delay; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct clk_apbc* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_6)
{
 struct clk_apbc *VAR_7 = FUNC_3(VAR_6);
 unsigned int VAR_8;
 unsigned long VAR_9 = 0;





 if (VAR_7->lock)
  FUNC_1(VAR_7->lock, VAR_9);

 VAR_8 = FUNC_0(VAR_7->base);
 if (VAR_7->flags & VAR_4)
  VAR_8 |= VAR_3;
 VAR_8 |= VAR_1;
 FUNC_5(VAR_8, VAR_7->base);

 if (VAR_7->lock)
  FUNC_2(VAR_7->lock, VAR_9);

 FUNC_4(VAR_7->delay);

 if (VAR_7->lock)
  FUNC_1(VAR_7->lock, VAR_9);

 VAR_8 = FUNC_0(VAR_7->base);
 VAR_8 |= VAR_0;
 FUNC_5(VAR_8, VAR_7->base);

 if (VAR_7->lock)
  FUNC_2(VAR_7->lock, VAR_9);

 FUNC_4(VAR_7->delay);

 if (!(VAR_7->flags & VAR_2)) {
  if (VAR_7->lock)
   FUNC_1(VAR_7->lock, VAR_9);

  VAR_8 = FUNC_0(VAR_7->base);
  VAR_8 &= ~VAR_5;
  FUNC_5(VAR_8, VAR_7->base);

  if (VAR_7->lock)
   FUNC_2(VAR_7->lock, VAR_9);
 }

 return 0;
}
