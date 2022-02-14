
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hix5hd2_i2c_priv {int lock; scalar_t__ regs; int msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hix5hd2_i2c_priv*) ;
 int FUNC_1 (struct hix5hd2_i2c_priv*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct hix5hd2_i2c_priv *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_3(&VAR_4->lock, VAR_6);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);

 FUNC_5(FUNC_2(VAR_4->msg),
         VAR_4->regs + VAR_1);

 FUNC_5(VAR_3 | VAR_2, VAR_4->regs + VAR_0);
 FUNC_4(&VAR_4->lock, VAR_6);
}
