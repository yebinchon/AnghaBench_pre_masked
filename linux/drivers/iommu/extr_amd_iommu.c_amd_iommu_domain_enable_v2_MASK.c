
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {scalar_t__ dev_cnt; int flags; int glx; int lock; int * gcr3_tbl; } ;
struct iommu_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct protection_domain* FUNC_3 (struct iommu_domain*) ;
 int FUNC_4 (struct protection_domain*) ;

int FUNC_5(struct iommu_domain *VAR_7, int VAR_8)
{
 struct protection_domain *VAR_9 = FUNC_3(VAR_7);
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8 <= 0 || VAR_8 > (VAR_4 + 1))
  return -VAR_1;


 for (VAR_11 = 0; (VAR_8 - 1) & ~0x1ff; VAR_8 >>= 9)
  VAR_11 += 1;

 if (VAR_11 > VAR_6)
  return -VAR_1;

 FUNC_1(&VAR_9->lock, VAR_10);






 VAR_12 = -VAR_0;
 if (VAR_9->dev_cnt > 0 || VAR_9->flags & VAR_5)
  goto out;

 VAR_12 = -VAR_2;
 VAR_9->gcr3_tbl = (void *)FUNC_0(VAR_3);
 if (VAR_9->gcr3_tbl == ((void*)0))
  goto out;

 VAR_9->glx = VAR_11;
 VAR_9->flags |= VAR_5;

 FUNC_4(VAR_9);

 VAR_12 = 0;

out:
 FUNC_2(&VAR_9->lock, VAR_10);

 return VAR_12;
}
