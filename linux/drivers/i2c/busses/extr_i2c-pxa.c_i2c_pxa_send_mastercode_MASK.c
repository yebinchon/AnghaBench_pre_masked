
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_i2c {int highmode_enter; int master_code; int wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (int ,int,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct pxa_i2c *VAR_8)
{
 u32 VAR_9;
 long VAR_10;

 FUNC_3(&VAR_8->lock);
 VAR_8->highmode_enter = 1;
 FUNC_6(VAR_8->master_code, FUNC_1(VAR_8));

 VAR_9 = FUNC_2(FUNC_0(VAR_8)) & ~(VAR_6 | VAR_2);
 VAR_9 |= VAR_3 | VAR_5 | VAR_7 | VAR_4;
 FUNC_6(VAR_9, FUNC_0(VAR_8));

 FUNC_4(&VAR_8->lock);
 VAR_10 = FUNC_5(VAR_8->wait,
   VAR_8->highmode_enter == 0, VAR_0 * 1);

 VAR_8->highmode_enter = 0;

 return (VAR_10 == 0) ? VAR_1 : 0;
}
