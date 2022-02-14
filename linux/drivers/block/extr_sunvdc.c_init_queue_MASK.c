
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdc_port {int tag_set; } ;
struct request_queue {struct vdc_port* queuedata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request_queue*) ;
 int VAR_1 ;
 struct request_queue* FUNC_1 (int *,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct request_queue *FUNC_2(struct vdc_port *VAR_3)
{
 struct request_queue *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->tag_set, &VAR_2, VAR_1,
     VAR_0);
 if (FUNC_0(VAR_4))
  return VAR_4;

 VAR_4->queuedata = VAR_3;
 return VAR_4;
}
