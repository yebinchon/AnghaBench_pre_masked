
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct mma8452_data*) ;
 int FUNC_3 (struct mma8452_data*) ;
 int ** VAR_0 ;

__attribute__((used)) static int FUNC_4(struct mma8452_data *VAR_1,
           int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_0[VAR_5][VAR_4],
  FUNC_0(VAR_0[0][0]), VAR_2, VAR_3);
}
