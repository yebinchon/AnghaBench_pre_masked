
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sync_file {struct dma_fence* fence; scalar_t__* user_name; } ;
struct dma_fence {TYPE_1__* ops; int seqno; int context; } ;
struct TYPE_2__ {char* (* get_driver_name ) (struct dma_fence*) ;char* (* get_timeline_name ) (struct dma_fence*) ;} ;


 int FUNC_0 (char*,int,char*,char*,char*,int ,int ) ;
 int FUNC_1 (char*,scalar_t__*,int) ;
 char* FUNC_2 (struct dma_fence*) ;
 char* FUNC_3 (struct dma_fence*) ;
 char* FUNC_4 (struct dma_fence*) ;
 char* FUNC_5 (struct dma_fence*) ;

char *FUNC_6(struct sync_file *VAR_0, char *VAR_1, int VAR_2)
{
 if (VAR_0->user_name[0]) {
  FUNC_1(VAR_1, VAR_0->user_name, VAR_2);
 } else {
  struct dma_fence *VAR_3 = VAR_0->fence;

  FUNC_0(VAR_1, VAR_2, "%s-%s%llu-%lld",
    VAR_3->ops->get_driver_name(VAR_3),
    VAR_3->ops->get_timeline_name(VAR_3),
    VAR_3->context,
    VAR_3->seqno);
 }

 return VAR_1;
}
