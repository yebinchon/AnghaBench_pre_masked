
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct he_tpd {TYPE_1__* iovec; scalar_t__ reserved; int status; } ;
struct he_dev {int tpd_pool; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct he_tpd* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static struct he_tpd *
FUNC_2(struct he_dev *VAR_1)
{
 struct he_tpd *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_1(VAR_1->tpd_pool, VAR_0, &VAR_3);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_2->status = FUNC_0(VAR_3);
 VAR_2->reserved = 0;
 VAR_2->iovec[0].addr = 0; VAR_2->iovec[0].len = 0;
 VAR_2->iovec[1].addr = 0; VAR_2->iovec[1].len = 0;
 VAR_2->iovec[2].addr = 0; VAR_2->iovec[2].len = 0;

 return VAR_2;
}
