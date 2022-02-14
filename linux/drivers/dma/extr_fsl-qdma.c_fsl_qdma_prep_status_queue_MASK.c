
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fsl_qdma_queue {unsigned int n_cq; int * comp_pool; scalar_t__ cq; scalar_t__ virt_tail; scalar_t__ virt_head; int bus_addr; } ;
struct fsl_qdma_format {int dummy; } ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,struct fsl_qdma_queue*) ;
 struct fsl_qdma_queue* FUNC_2 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int *,int ) ;
 int FUNC_4 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static struct fsl_qdma_queue
*FUNC_5(struct platform_device *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct fsl_qdma_queue *VAR_6;
 struct device_node *VAR_7 = VAR_3->dev.of_node;

 VAR_4 = FUNC_4(VAR_7, "status-sizes", &VAR_5);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "Can't get status-sizes.\n");
  return ((void*)0);
 }
 if (VAR_5 > VAR_0 ||
     VAR_5 < VAR_1) {
  FUNC_0(&VAR_3->dev, "Get wrong status_size.\n");
  return ((void*)0);
 }
 VAR_6 = FUNC_2(&VAR_3->dev,
       sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return ((void*)0);




 VAR_6->cq = FUNC_3(&VAR_3->dev,
          sizeof(struct fsl_qdma_format) *
          VAR_5,
          &VAR_6->bus_addr,
          VAR_2);
 if (!VAR_6->cq) {
  FUNC_1(&VAR_3->dev, VAR_6);
  return ((void*)0);
 }
 VAR_6->n_cq = VAR_5;
 VAR_6->virt_head = VAR_6->cq;
 VAR_6->virt_tail = VAR_6->cq;
 VAR_6->comp_pool = ((void*)0);

 return VAR_6;
}
