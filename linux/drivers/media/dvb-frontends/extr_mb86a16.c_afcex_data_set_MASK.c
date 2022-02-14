
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb86a16_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct mb86a16_state*,int ,unsigned char) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mb86a16_state *VAR_4,
     unsigned char VAR_5,
     unsigned char VAR_6)
{
 if (FUNC_1(VAR_4, VAR_1, VAR_5) < 0)
  goto err;
 if (FUNC_1(VAR_4, VAR_0, VAR_6) < 0)
  goto err;

 return 0;
err:
 FUNC_0(VAR_3, VAR_2, 1, "I2C transfer error");

 return -1;
}
