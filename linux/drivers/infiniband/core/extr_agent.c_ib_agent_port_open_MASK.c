
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int dummy; } ;
struct ib_agent_port_private {void** agent; int port_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (struct ib_device*,int,int ,int *,int ,int *,int *,int *,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct ib_agent_port_private*) ;
 struct ib_agent_port_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (struct ib_device*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct ib_device *VAR_7, int VAR_8)
{
 struct ib_agent_port_private *VAR_9;
 unsigned long VAR_10;
 int VAR_11;


 VAR_9 = FUNC_5(sizeof *VAR_9, VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto error1;
 }

 if (FUNC_7(VAR_7, VAR_8)) {

  VAR_9->agent[0] = FUNC_2(VAR_7, VAR_8,
           VAR_3, ((void*)0), 0,
           &VAR_4,
           ((void*)0), ((void*)0), 0);
  if (FUNC_0(VAR_9->agent[0])) {
   VAR_11 = FUNC_1(VAR_9->agent[0]);
   goto error2;
  }
 }


 VAR_9->agent[1] = FUNC_2(VAR_7, VAR_8,
          VAR_2, ((void*)0), 0,
          &VAR_4,
          ((void*)0), ((void*)0), 0);
 if (FUNC_0(VAR_9->agent[1])) {
  VAR_11 = FUNC_1(VAR_9->agent[1]);
  goto error3;
 }

 FUNC_8(&VAR_6, VAR_10);
 FUNC_6(&VAR_9->port_list, &VAR_5);
 FUNC_9(&VAR_6, VAR_10);

 return 0;

error3:
 if (VAR_9->agent[0])
  FUNC_3(VAR_9->agent[0]);
error2:
 FUNC_4(VAR_9);
error1:
 return VAR_11;
}
