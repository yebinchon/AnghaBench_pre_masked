
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct sur40_state {struct sur40_state* bulk_in_buffer; int input; int v4l2; int vdev; int hdl; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sur40_state*) ;
 struct sur40_state* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_1)
{
 struct sur40_state *VAR_2 = FUNC_4(VAR_1);

 FUNC_6(&VAR_2->hdl);
 FUNC_8(&VAR_2->vdev);
 FUNC_7(&VAR_2->v4l2);

 FUNC_2(VAR_2->input);
 FUNC_1(VAR_2->input);
 FUNC_3(VAR_2->bulk_in_buffer);
 FUNC_3(VAR_2);

 FUNC_5(VAR_1, ((void*)0));
 FUNC_0(&VAR_1->dev, "%s is now disconnected\n", VAR_0);
}
