
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int dummy; } ;


 int FUNC_0 (struct mma8452_data*) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct mma8452_data *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_0(VAR_1);

 if (VAR_0[VAR_3][0] > 0)
  VAR_2 = 1000 / VAR_0[VAR_3][0];
 else
  VAR_2 = 1000;

 return VAR_2 == 0 ? 1 : VAR_2;
}
