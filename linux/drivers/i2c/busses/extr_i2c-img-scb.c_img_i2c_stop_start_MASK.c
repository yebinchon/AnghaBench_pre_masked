
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int at_slave_event; int at_t_done; int at_cur_cmd; int seq; int int_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct img_i2c*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct img_i2c*,int ) ;
 int FUNC_2 (struct img_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct img_i2c *VAR_3)
{

 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_1, VAR_3->int_enable);
 VAR_3->seq = VAR_2;
 VAR_3->at_slave_event = 1;
 VAR_3->at_t_done = 1;
 VAR_3->at_cur_cmd = -1;


 FUNC_0(VAR_3, 0);
}
