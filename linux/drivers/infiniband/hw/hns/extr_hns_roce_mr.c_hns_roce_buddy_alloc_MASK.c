
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct hns_roce_buddy {int max_order; int lock; scalar_t__* num_free; int * bits; } ;


 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_buddy *VAR_0, int VAR_1,
    unsigned long *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_0->lock);

 for (VAR_3 = VAR_1; VAR_3 <= VAR_0->max_order; ++VAR_3) {
  if (VAR_0->num_free[VAR_3]) {
   VAR_4 = 1 << (VAR_0->max_order - VAR_3);
   *VAR_2 = FUNC_1(VAR_0->bits[VAR_3], VAR_4);
   if (*VAR_2 < VAR_4)
    goto found;
  }
 }
 FUNC_4(&VAR_0->lock);
 return -1;

 found:
 FUNC_0(*VAR_2, VAR_0->bits[VAR_3]);
 --VAR_0->num_free[VAR_3];

 while (VAR_3 > VAR_1) {
  --VAR_3;
  *VAR_2 <<= 1;
  FUNC_2(*VAR_2 ^ 1, VAR_0->bits[VAR_3]);
  ++VAR_0->num_free[VAR_3];
 }

 FUNC_4(&VAR_0->lock);

 *VAR_2 <<= VAR_1;
 return 0;
}
