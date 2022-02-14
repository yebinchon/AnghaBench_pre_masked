
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {int at_cur_cmd; int at_cur_data; scalar_t__ raw_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct img_i2c*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct img_i2c *VAR_9)
{
 VAR_9->raw_timeout = 0;
 FUNC_0(VAR_9, VAR_8,
  VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_4 |
  VAR_3 |
  ((VAR_9->at_cur_cmd & VAR_0) << VAR_1) |
  (VAR_9->at_cur_data << VAR_2));
}
