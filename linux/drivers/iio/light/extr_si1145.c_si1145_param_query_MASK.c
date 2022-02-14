
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1145_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct si1145_data*,int) ;

__attribute__((used)) static int FUNC_2(struct si1145_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0 | (VAR_3 & 0x1F));
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_2->client, VAR_1);
}
