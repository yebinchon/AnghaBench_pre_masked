
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3x_i2c {int error; int busy; int wait; int state; scalar_t__ is_last_msg; int * msg; scalar_t__ processed; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct rk3x_i2c*,int ) ;
 int FUNC_1 (struct rk3x_i2c*,unsigned int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rk3x_i2c *VAR_7, int VAR_8)
{
 unsigned int VAR_9;

 VAR_7->processed = 0;
 VAR_7->msg = ((void*)0);
 VAR_7->error = VAR_8;

 if (VAR_7->is_last_msg) {

  FUNC_1(VAR_7, VAR_4, VAR_3);

  VAR_7->state = VAR_6;

  VAR_9 = FUNC_0(VAR_7, VAR_0);
  VAR_9 |= VAR_1;
  FUNC_1(VAR_7, VAR_9, VAR_0);
 } else {

  VAR_7->busy = 0;
  VAR_7->state = VAR_5;






  VAR_9 = FUNC_0(VAR_7, VAR_0) & VAR_2;
  FUNC_1(VAR_7, VAR_9, VAR_0);


  FUNC_2(&VAR_7->wait);
 }
}
