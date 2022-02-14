
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx4_ib_dev {int * sl2vl; int ib_dev; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__*) ;
 int FUNC_2 (char*,int,int) ;

void FUNC_3(struct mlx4_ib_dev *VAR_0, int VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_0->ib_dev, VAR_1, &VAR_2);
 if (VAR_3) {
  FUNC_2("Unable to get current sl to vl mapping for port %d.  Using all zeroes (%d)\n",
         VAR_1, VAR_3);
  VAR_2 = 0;
 }
 FUNC_0(&VAR_0->sl2vl[VAR_1 - 1], VAR_2);
}
