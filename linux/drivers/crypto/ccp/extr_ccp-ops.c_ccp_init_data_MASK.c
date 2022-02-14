
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct scatterlist {int dummy; } ;
struct ccp_data {int dm_wa; int sg_wa; } ;
struct ccp_cmd_queue {TYPE_1__* ccp; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ccp_data*,struct ccp_cmd_queue*) ;
 int FUNC_1 (int *,struct ccp_cmd_queue*,unsigned int,int) ;
 int FUNC_2 (int *,int ,struct scatterlist*,int ,int) ;
 int FUNC_3 (struct ccp_data*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ccp_data *VAR_0, struct ccp_cmd_queue *VAR_1,
    struct scatterlist *VAR_2, u64 VAR_3,
    unsigned int VAR_4,
    enum dma_data_direction VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 VAR_6 = FUNC_2(&VAR_0->sg_wa, VAR_1->ccp->dev, VAR_2, VAR_3,
       VAR_5);
 if (VAR_6)
  goto e_err;

 VAR_6 = FUNC_1(&VAR_0->dm_wa, VAR_1, VAR_4, VAR_5);
 if (VAR_6)
  goto e_err;

 return 0;

e_err:
 FUNC_0(VAR_0, VAR_1);

 return VAR_6;
}
