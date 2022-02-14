
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sa_open_data {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sa_open_data*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sa_open_data *VAR_0, u32 VAR_1,
  int VAR_2, gfp_t VAR_3)
{
 u32 VAR_4;

 if(VAR_2 == 0)
  VAR_4 = 0x00000000;
 else
  VAR_4 = ~(((u32)1 << (32 - VAR_2)) - 1);


 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
