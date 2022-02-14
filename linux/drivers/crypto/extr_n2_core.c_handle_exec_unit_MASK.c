
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu_queue {unsigned long q_type; int list; int jobs; int lock; int sharing; } ;
struct spu_mdesc_info {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mdesc_handle {int dummy; } ;
struct list_head {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 struct spu_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct spu_mdesc_info*,char const*,struct spu_queue*,int ) ;
 int FUNC_7 (struct mdesc_handle*,struct platform_device*,int ,struct spu_queue*,struct spu_queue**) ;
 int FUNC_8 (struct spu_queue*) ;

__attribute__((used)) static int FUNC_9(struct spu_mdesc_info *VAR_2, struct list_head *VAR_3,
       struct platform_device *VAR_4, struct mdesc_handle *VAR_5,
       u64 VAR_6, const char *VAR_7, unsigned long VAR_8,
       irq_handler_t VAR_9, struct spu_queue **VAR_10)
{
 struct spu_queue *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(sizeof(struct spu_queue), VAR_1);
 if (!VAR_11) {
  FUNC_2(&VAR_4->dev, "%pOF: Could not allocate SPU queue.\n",
   VAR_4->dev.of_node);
  return -VAR_0;
 }

 FUNC_1(&VAR_11->sharing);
 FUNC_5(&VAR_11->lock);
 VAR_11->q_type = VAR_8;
 FUNC_0(&VAR_11->jobs);
 FUNC_4(&VAR_11->list, VAR_3);

 VAR_12 = FUNC_7(VAR_5, VAR_4, VAR_6, VAR_11, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12)
  return VAR_12;

 return FUNC_6(VAR_4, VAR_2, VAR_7, VAR_11, VAR_9);
}
