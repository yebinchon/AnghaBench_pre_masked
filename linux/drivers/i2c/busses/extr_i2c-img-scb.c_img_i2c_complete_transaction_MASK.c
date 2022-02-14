
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int msg_status; int msg_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct img_i2c*,int ) ;
 int FUNC_2 (struct img_i2c*,int) ;

__attribute__((used)) static void FUNC_3(struct img_i2c *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1, VAR_0);
 if (VAR_2) {
  VAR_1->msg_status = VAR_2;
  FUNC_2(VAR_1, 0);
 }
 FUNC_0(&VAR_1->msg_complete);
}
