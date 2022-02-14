
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_buddy {int lock; int * num_free; int * bits; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_buddy *VAR_0, unsigned long VAR_1,
    int VAR_2)
{
 VAR_1 >>= VAR_2;

 FUNC_2(&VAR_0->lock);

 while (FUNC_4(VAR_1 ^ 1, VAR_0->bits[VAR_2])) {
  FUNC_0(VAR_1 ^ 1, VAR_0->bits[VAR_2]);
  --VAR_0->num_free[VAR_2];
  VAR_1 >>= 1;
  ++VAR_2;
 }

 FUNC_1(VAR_1, VAR_0->bits[VAR_2]);
 ++VAR_0->num_free[VAR_2];

 FUNC_3(&VAR_0->lock);
}
