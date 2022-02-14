
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue {int init_msg_received; int init_done; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct nvkm_msgqueue *VAR_0)
{

 if (!VAR_0)
  return 0;

 VAR_0->init_msg_received = 0;
 FUNC_0(&VAR_0->init_done);

 return 0;
}
