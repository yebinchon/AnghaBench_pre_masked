
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mma8452_data*) ;
 int FUNC_2 (struct mma8452_data*) ;
 int**** VAR_2 ;

__attribute__((used)) static int FUNC_3(struct mma8452_data *VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_3->client, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 &= VAR_1;
 *VAR_4 = VAR_2[VAR_6][VAR_7][VAR_8][0];
 *VAR_5 = VAR_2[VAR_6][VAR_7][VAR_8][1];

 return 0;
}
