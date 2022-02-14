
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_i2c {scalar_t__ need_wr_rd_fence; } ;


 int VAR_0 ;
 int FUNC_0 (struct img_i2c*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct img_i2c *VAR_1)
{
 if (VAR_1->need_wr_rd_fence) {
  FUNC_0(VAR_1, VAR_0, 0);
  FUNC_0(VAR_1, VAR_0, 0);
 }
}
