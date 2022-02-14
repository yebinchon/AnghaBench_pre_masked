
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bcom_task {int tasknum; int num_bd; int bd_size; struct bcom_task* cookie; int bd; scalar_t__ irq; int bd_pa; void* priv; } ;
struct TYPE_4__ {TYPE_1__* tdt; int ofnode; int lock; } ;
struct TYPE_3__ {int stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct bcom_task*) ;
 struct bcom_task* FUNC_5 (int,int,int ) ;
 struct bcom_task* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct bcom_task *
FUNC_10(int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = -1;
 struct bcom_task *VAR_8;


 if (!VAR_2)
  return ((void*)0);


 FUNC_8(&VAR_2->lock);

 for (VAR_6=0; VAR_6<VAR_0; VAR_6++)
  if (!VAR_2->tdt[VAR_6].stop) {
   VAR_2->tdt[VAR_6].stop = 0xfffffffful;
   VAR_7 = VAR_6;
   break;
  }

 FUNC_9(&VAR_2->lock);

 if (VAR_7 < 0)
  return ((void*)0);


 VAR_8 = FUNC_6(sizeof(struct bcom_task) + VAR_5, VAR_1);
 if (!VAR_8)
  goto error;

 VAR_8->tasknum = VAR_7;
 if (VAR_5)
  VAR_8->priv = (void*)VAR_8 + sizeof(struct bcom_task);


 VAR_8->irq = FUNC_3(VAR_2->ofnode, VAR_8->tasknum);
 if (!VAR_8->irq)
  goto error;


 if (VAR_3) {
  VAR_8->cookie = FUNC_5(VAR_3, sizeof(void *),
         VAR_1);
  if (!VAR_8->cookie)
   goto error;

  VAR_8->bd = FUNC_0(VAR_3 * VAR_4, 4, &VAR_8->bd_pa);
  if (!VAR_8->bd)
   goto error;
  FUNC_7(VAR_8->bd, 0x00, VAR_3 * VAR_4);

  VAR_8->num_bd = VAR_3;
  VAR_8->bd_size = VAR_4;
 }

 return VAR_8;

error:
 if (VAR_8) {
  if (VAR_8->irq)
   FUNC_2(VAR_8->irq);
  FUNC_1(VAR_8->bd);
  FUNC_4(VAR_8->cookie);
  FUNC_4(VAR_8);
 }

 VAR_2->tdt[VAR_7].stop = 0;

 return ((void*)0);
}
