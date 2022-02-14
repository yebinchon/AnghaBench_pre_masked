
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtrng_info {int busy; int data_avail; int have_data; scalar_t__ hwrng_removed; } ;
struct hwrng {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtrng_info*,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_1, void *VAR_2, size_t VAR_3, bool VAR_4)
{
 int VAR_5;
 struct virtrng_info *VAR_6 = (struct virtrng_info *)VAR_1->priv;

 if (VAR_6->hwrng_removed)
  return -VAR_0;

 if (!VAR_6->busy) {
  VAR_6->busy = 1;
  FUNC_1(&VAR_6->have_data);
  FUNC_0(VAR_6, VAR_2, VAR_3);
 }

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_2(&VAR_6->have_data);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6->busy = 0;

 return VAR_6->data_avail;
}
