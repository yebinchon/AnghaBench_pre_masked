
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnxt_qplib_rcfw_sbuf {int sb; int dma_addr; int size; } ;
struct bnxt_qplib_rcfw {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct bnxt_qplib_rcfw_sbuf*) ;
 struct bnxt_qplib_rcfw_sbuf* FUNC_2 (int,int ) ;

struct bnxt_qplib_rcfw_sbuf *FUNC_3(
  struct bnxt_qplib_rcfw *VAR_1,
  u32 VAR_2)
{
 struct bnxt_qplib_rcfw_sbuf *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->size = VAR_2;
 VAR_3->sb = FUNC_0(&VAR_1->pdev->dev, VAR_3->size,
          &VAR_3->dma_addr, VAR_0);
 if (!VAR_3->sb)
  goto bail;

 return VAR_3;
bail:
 FUNC_1(VAR_3);
 return ((void*)0);
}
