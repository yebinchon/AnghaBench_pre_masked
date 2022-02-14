
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; int dir; int address; } ;
struct ccp_dm_workarea {unsigned int length; TYPE_2__ dma; int dev; scalar_t__ address; int dma_pool; } ;
struct ccp_cmd_queue {int dma_pool; TYPE_1__* ccp; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct ccp_dm_workarea*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ccp_dm_workarea *VAR_3,
    struct ccp_cmd_queue *VAR_4,
    unsigned int VAR_5,
    enum dma_data_direction VAR_6)
{
 FUNC_4(VAR_3, 0, sizeof(*VAR_3));

 if (!VAR_5)
  return 0;

 VAR_3->dev = VAR_4->ccp->dev;
 VAR_3->length = VAR_5;

 if (VAR_5 <= VAR_0) {
  VAR_3->dma_pool = VAR_4->dma_pool;

  VAR_3->address = FUNC_2(VAR_3->dma_pool, VAR_2,
          &VAR_3->dma.address);
  if (!VAR_3->address)
   return -VAR_1;

  VAR_3->dma.length = VAR_0;

 } else {
  VAR_3->address = FUNC_3(VAR_5, VAR_2);
  if (!VAR_3->address)
   return -VAR_1;

  VAR_3->dma.address = FUNC_0(VAR_3->dev, VAR_3->address, VAR_5,
       VAR_6);
  if (FUNC_1(VAR_3->dev, VAR_3->dma.address))
   return -VAR_1;

  VAR_3->dma.length = VAR_5;
 }
 VAR_3->dma.dir = VAR_6;

 return 0;
}
