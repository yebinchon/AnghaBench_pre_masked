
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1145_data {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct si1145_data*,int) ;

__attribute__((used)) static int FUNC_2(struct si1145_data *VAR_1, u8 VAR_2, u8 VAR_3,
          u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->client,
  VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_1, VAR_2 | (VAR_3 & 0x1F));
}
