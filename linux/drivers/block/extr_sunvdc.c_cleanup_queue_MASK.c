
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdc_port {int tag_set; } ;
struct request_queue {struct vdc_port* queuedata; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_0)
{
 struct vdc_port *VAR_1 = VAR_0->queuedata;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_1->tag_set);
}
