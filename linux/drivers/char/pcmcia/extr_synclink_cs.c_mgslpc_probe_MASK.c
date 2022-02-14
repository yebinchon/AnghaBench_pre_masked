
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_8__ {int close_delay; int closing_wait; int * ops; } ;
struct TYPE_7__ {int max_frame_size; int imra_value; int imrb_value; int pim_value; TYPE_2__ port; struct pcmcia_device* p_dev; int idle_mode; int params; int netlock; int lock; int event_wait_q; int status_event_wait_q; int task; int magic; } ;
typedef int MGSL_PARAMS ;
typedef TYPE_1__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct pcmcia_device *VAR_10)
{
 MGSLPC_INFO *VAR_11;
 int VAR_12;

 if (VAR_7 >= VAR_0)
  FUNC_8("mgslpc_attach\n");

 VAR_11 = FUNC_3(sizeof(MGSLPC_INFO), VAR_2);
 if (!VAR_11) {
  FUNC_8("Error can't allocate device instance data\n");
  return -VAR_1;
 }

 VAR_11->magic = VAR_5;
 FUNC_11(&VAR_11->port);
 VAR_11->port.ops = &VAR_9;
 FUNC_0(&VAR_11->task, VAR_6);
 VAR_11->max_frame_size = 4096;
 VAR_11->port.close_delay = 5*VAR_4/10;
 VAR_11->port.closing_wait = 30*VAR_4;
 FUNC_1(&VAR_11->status_event_wait_q);
 FUNC_1(&VAR_11->event_wait_q);
 FUNC_9(&VAR_11->lock);
 FUNC_9(&VAR_11->netlock);
 FUNC_4(&VAR_11->params,&VAR_8,sizeof(MGSL_PARAMS));
 VAR_11->idle_mode = VAR_3;
 VAR_11->imra_value = 0xffff;
 VAR_11->imrb_value = 0xffff;
 VAR_11->pim_value = 0xff;

 VAR_11->p_dev = VAR_10;
 VAR_10->priv = VAR_11;



 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12 != 0)
  goto failed;

 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12 != 0)
  goto failed_release;

 return 0;

failed_release:
 FUNC_7((u_long)VAR_10);
failed:
 FUNC_10(&VAR_11->port);
 FUNC_2(VAR_11);
 return VAR_12;
}
