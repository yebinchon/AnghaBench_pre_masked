
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct dma_ops_domain {int iovad; TYPE_1__ domain; } ;
typedef unsigned int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct dma_ops_domain*,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned int FUNC_4 (unsigned int,size_t,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,unsigned int,scalar_t__) ;
 int FUNC_6 (int *,unsigned int,unsigned int,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct dma_ops_domain *VAR_4,
      dma_addr_t VAR_5,
      size_t VAR_6,
      int VAR_7)
{
 dma_addr_t VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_2);
 VAR_5 &= VAR_0;
 VAR_9 = VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8) {
  FUNC_5(&VAR_4->domain, VAR_9, VAR_2);
  VAR_9 += VAR_2;
 }

 if (VAR_3) {
  unsigned long VAR_11;

  FUNC_7(&VAR_4->domain.lock, VAR_11);
  FUNC_3(&VAR_4->domain);
  FUNC_2(&VAR_4->domain);
  FUNC_8(&VAR_4->domain.lock, VAR_11);
  FUNC_1(VAR_4, VAR_5, VAR_10);
 } else {
  VAR_10 = FUNC_0(VAR_10);
  FUNC_6(&VAR_4->iovad, VAR_5 >> VAR_1, VAR_10, 0);
 }
}
