
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8452_data {int client; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct mma8452_data*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct mma8452_data *VAR_1, __be16 VAR_2[3])
{
 int VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1->client, 1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1->client, VAR_0,
         3 * sizeof(__be16), (u8 *)VAR_2);

 VAR_3 = FUNC_2(VAR_1->client, 0);

 return VAR_3;
}
