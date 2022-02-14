
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isar_hw {int* buf; scalar_t__ iis; int clsb; int hw; int (* write_reg ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isar_hw*,int) ;
 int FUNC_1 (struct isar_hw*,int ,int ,int,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct isar_hw *VAR_4)
{
 int VAR_5;


 VAR_4->write_reg(VAR_4->hw, VAR_2, 0);
 VAR_4->buf[0] = VAR_3;
 VAR_4->buf[1] = 0;
 VAR_4->buf[2] = 1;
 if (!FUNC_1(VAR_4, VAR_0, 0, 3, ((void*)0)))
  return -1;
 if (!FUNC_0(VAR_4, 1000))
  return -2;
 if (VAR_4->iis == VAR_1) {
  if (VAR_4->clsb == 1) {
   VAR_5 = VAR_4->buf[0] & 0xf;
   return VAR_5;
  }
  return -3;
 }
 return -4;
}
