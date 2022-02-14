
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int lock; } ;
struct dma_ops_domain {TYPE_1__ domain; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,struct dma_ops_domain*,unsigned int,int ) ;
 int FUNC_2 (struct dma_ops_domain*,int,unsigned int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,size_t) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int,int ) ;
 unsigned int FUNC_7 (int,size_t,int) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static dma_addr_t FUNC_11(struct device *VAR_4,
          struct dma_ops_domain *VAR_5,
          phys_addr_t VAR_6,
          size_t VAR_7,
          enum dma_data_direction VAR_8,
          u64 VAR_9)
{
 dma_addr_t VAR_10 = VAR_6 & ~VAR_2;
 dma_addr_t VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 unsigned int VAR_15;
 int VAR_16 = 0;
 int VAR_17;

 VAR_15 = FUNC_7(VAR_6, VAR_7, VAR_3);
 VAR_6 &= VAR_2;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_15, VAR_9);
 if (!VAR_11)
  goto out;

 VAR_16 = FUNC_0(VAR_8);

 VAR_12 = VAR_11;
 for (VAR_17 = 0; VAR_17 < VAR_15; ++VAR_17) {
  VAR_13 = FUNC_6(&VAR_5->domain, VAR_12, VAR_6,
         VAR_3, VAR_16, VAR_1);
  if (VAR_13)
   goto out_unmap;

  VAR_6 += VAR_3;
  VAR_12 += VAR_3;
 }
 VAR_11 += VAR_10;

 FUNC_4(&VAR_5->domain, VAR_11, VAR_7);

out:
 return VAR_11;

out_unmap:

 for (--VAR_17; VAR_17 >= 0; --VAR_17) {
  VAR_12 -= VAR_3;
  FUNC_8(&VAR_5->domain, VAR_12, VAR_3);
 }

 FUNC_9(&VAR_5->domain.lock, VAR_14);
 FUNC_5(&VAR_5->domain);
 FUNC_3(&VAR_5->domain);
 FUNC_10(&VAR_5->domain.lock, VAR_14);

 FUNC_2(VAR_5, VAR_11, VAR_15);

 return VAR_0;
}
