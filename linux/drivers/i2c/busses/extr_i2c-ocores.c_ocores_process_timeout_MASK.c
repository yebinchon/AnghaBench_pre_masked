
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocores_i2c {int process_lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocores_i2c*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ocores_i2c *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_3->process_lock, VAR_4);
 VAR_3->state = VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_1);
 FUNC_2(&VAR_3->process_lock, VAR_4);
}
