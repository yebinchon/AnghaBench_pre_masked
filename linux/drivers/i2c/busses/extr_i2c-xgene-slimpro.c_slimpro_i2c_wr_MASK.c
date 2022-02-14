
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slimpro_i2c_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct slimpro_i2c_dev*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct slimpro_i2c_dev *VAR_2, u32 VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7,
     u32 VAR_8)
{
 u32 VAR_9[3];

 VAR_9[0] = FUNC_1(VAR_0, VAR_3,
     VAR_1, VAR_6, VAR_5, VAR_7);
 VAR_9[1] = FUNC_0(VAR_4);
 VAR_9[2] = VAR_8;

 return FUNC_2(VAR_2, VAR_9, VAR_9);
}
