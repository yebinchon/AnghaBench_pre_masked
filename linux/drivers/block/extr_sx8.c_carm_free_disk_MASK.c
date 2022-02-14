
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int flags; scalar_t__ queue; } ;
struct carm_port {struct gendisk* disk; } ;
struct carm_host {struct carm_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct gendisk*) ;

__attribute__((used)) static void FUNC_3(struct carm_host *VAR_1, unsigned int VAR_2)
{
 struct carm_port *VAR_3 = &VAR_1->port[VAR_2];
 struct gendisk *VAR_4 = VAR_3->disk;

 if (!VAR_4)
  return;

 if (VAR_4->flags & VAR_0)
  FUNC_1(VAR_4);
 if (VAR_4->queue)
  FUNC_0(VAR_4->queue);
 FUNC_2(VAR_4);
}
