
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_i2c {int done; scalar_t__ last; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dc_i2c*,int ) ;

__attribute__((used)) static void FUNC_2(struct dc_i2c *VAR_2)
{
 VAR_2->state = VAR_1;
 if (VAR_2->last)
  FUNC_1(VAR_2, VAR_0);
 else
  FUNC_0(&VAR_2->done);
}
