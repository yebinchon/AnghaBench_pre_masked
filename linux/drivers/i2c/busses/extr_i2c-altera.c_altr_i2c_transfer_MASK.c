
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altr_i2c_dev {int msg_len; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct altr_i2c_dev *VAR_2, u32 VAR_3)
{

 if (VAR_2->msg_len == 1)
  VAR_3 |= VAR_1;
 if (VAR_2->msg_len > 0)
  FUNC_0(VAR_3, VAR_2->base + VAR_0);
}
