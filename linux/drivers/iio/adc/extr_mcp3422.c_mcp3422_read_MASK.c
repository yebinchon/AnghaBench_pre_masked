
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mcp3422 {int i2c; int config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int) ;
 int * VAR_1 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct mcp3422 *VAR_2, int *VAR_3, u8 *VAR_4)
{
 int VAR_5 = 0;
 u8 VAR_6 = FUNC_0(VAR_2->config);
 u8 VAR_7[4] = {0, 0, 0, 0};
 u32 VAR_8;

 if (VAR_6 == VAR_0) {
  VAR_5 = FUNC_1(VAR_2->i2c, VAR_7, 4);
  VAR_8 = VAR_7[0] << 16 | VAR_7[1] << 8 | VAR_7[2];
  *VAR_4 = VAR_7[3];
 } else {
  VAR_5 = FUNC_1(VAR_2->i2c, VAR_7, 3);
  VAR_8 = VAR_7[0] << 8 | VAR_7[1];
  *VAR_4 = VAR_7[2];
 }

 *VAR_3 = FUNC_2(VAR_8, VAR_1[VAR_6]);

 return VAR_5;
}
