
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_dev {int avail_ird; int qps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct c4iw_dev *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->qps);
 VAR_0->avail_ird += VAR_1;
 FUNC_1(&VAR_0->qps);
}
