
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_device {size_t minor; int list_head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct dvb_device*) ;
 int ** VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dvb_device *VAR_4)
{
 if (!VAR_4)
  return;

 FUNC_2(&VAR_3);
 VAR_2[VAR_4->minor] = ((void*)0);
 FUNC_5(&VAR_3);

 FUNC_3(VAR_4);

 FUNC_1(VAR_1, FUNC_0(VAR_0, VAR_4->minor));

 FUNC_4 (&VAR_4->list_head);
}
