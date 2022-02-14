
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms5611_state {int client; } ;
struct device {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct ms5611_state* FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, s32 *VAR_2)
{
 int VAR_3;
 u8 VAR_4[3] = { VAR_0 };
 struct ms5611_state *VAR_5 = FUNC_1(FUNC_0(VAR_1));

 VAR_3 = FUNC_2(VAR_5->client, VAR_4, 1, VAR_4, 3);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = (VAR_4[0] << 16) | (VAR_4[1] << 8) | VAR_4[2];

 return 0;
}
