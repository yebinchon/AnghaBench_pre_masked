
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxj_hi_cmd {int param2; int param1; int cmd; } ;
struct drx_demod_instance {int my_i2c_dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct drxj_hi_cmd*,int *) ;

__attribute__((used)) static int
FUNC_1(struct drx_demod_instance *VAR_5, bool *VAR_6)
{
 struct drxj_hi_cmd VAR_7;
 u16 VAR_8 = 0;


 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7.cmd = VAR_1;
 VAR_7.param1 = VAR_2;
 if (*VAR_6)
  VAR_7.param2 = VAR_3;
 else
  VAR_7.param2 = VAR_4;

 return FUNC_0(VAR_5->my_i2c_dev_addr, &VAR_7, &VAR_8);
}
