
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,...) ;
 int FUNC_1 (struct mb86a16_state*,int,unsigned char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_4,
      unsigned char *VAR_5)
{
 unsigned char VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_4, 0x0d, &VAR_6) != 2)
  goto err;

 FUNC_0(VAR_3, VAR_2, 1, "Status = %02x,", VAR_6);
 VAR_7 = VAR_6 & 0x01;
 *VAR_5 = (VAR_6 & 0x1c) >> 2;

 return VAR_7;
err:
 FUNC_0(VAR_3, VAR_1, 1, "I2C transfer error");
 *VAR_5 = 0;
 return -VAR_0;

}
