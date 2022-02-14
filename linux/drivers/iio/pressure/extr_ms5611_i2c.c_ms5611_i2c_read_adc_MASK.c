
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms5611_state {int client; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ms5611_state *VAR_1, s32 *VAR_2)
{
 int VAR_3;
 u8 VAR_4[3];

 VAR_3 = FUNC_0(VAR_1->client, VAR_0,
         3, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_2 = (VAR_4[0] << 16) | (VAR_4[1] << 8) | VAR_4[2];

 return 0;
}
