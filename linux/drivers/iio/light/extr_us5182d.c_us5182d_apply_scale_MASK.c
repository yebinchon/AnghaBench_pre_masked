
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct us5182d_data*,int) ;

__attribute__((used)) static int FUNC_3(struct us5182d_data *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->client, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = VAR_4 & (~VAR_0);
 VAR_4 |= VAR_3;

 VAR_4 = FUNC_1(VAR_2->client, VAR_1, VAR_4);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_2(VAR_2, VAR_3);
}
