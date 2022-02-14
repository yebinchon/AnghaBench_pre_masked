
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mma8452_data*,int ,int) ;
 int FUNC_2 (struct mma8452_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mma8452_data *VAR_2,
        int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = FUNC_0(VAR_2->client,
           VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= ~VAR_1;
 VAR_6 |= VAR_5;

 return FUNC_1(VAR_2, VAR_0, VAR_6);
}
