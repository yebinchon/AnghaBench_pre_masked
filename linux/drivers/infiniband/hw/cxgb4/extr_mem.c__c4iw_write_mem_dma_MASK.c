
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct c4iw_wr_wait {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct c4iw_rdev {TYPE_2__ lldi; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c4iw_rdev*,int,int,int,struct sk_buff*,struct c4iw_wr_wait*) ;
 int FUNC_1 (struct c4iw_rdev*,int,int,void*,struct sk_buff*,struct c4iw_wr_wait*) ;
 int FUNC_2 (int *,void*,int,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct c4iw_rdev *VAR_4, u32 VAR_5, u32 VAR_6,
          void *VAR_7, struct sk_buff *VAR_8,
          struct c4iw_wr_wait *VAR_9)
{
 u32 VAR_10 = VAR_6;
 u32 VAR_11;
 int VAR_12 = 0;
 dma_addr_t VAR_13;
 dma_addr_t VAR_14;

 VAR_13 = FUNC_2(&VAR_4->lldi.pdev->dev, VAR_7, VAR_6, VAR_0);
 if (FUNC_3(&VAR_4->lldi.pdev->dev, VAR_13))
  return -1;
 VAR_14 = VAR_13;

 while (VAR_10 > VAR_3) {
  if (VAR_10 < VAR_1) {
   if (VAR_10 & ~VAR_2)
    VAR_11 = VAR_10 & ~(VAR_2-1);
   else
    VAR_11 = VAR_10;
  } else
   VAR_11 = VAR_1;
  VAR_10 -= VAR_11;
  VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_11, VAR_13,
       VAR_8, VAR_10 ? ((void*)0) : VAR_9);
  if (VAR_12)
   goto out;
  VAR_5 += VAR_11 >> 5;
  VAR_7 += VAR_11;
  VAR_13 += VAR_11;
 }
 if (VAR_10)
  VAR_12 = FUNC_1(VAR_4, VAR_5, VAR_10, VAR_7, VAR_8,
          VAR_9);
out:
 FUNC_4(&VAR_4->lldi.pdev->dev, VAR_14, VAR_6, VAR_0);
 return VAR_12;
}
