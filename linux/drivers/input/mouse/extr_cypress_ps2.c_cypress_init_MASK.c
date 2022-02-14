
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktsize; int model; struct cytp_data* private; scalar_t__ resync_time; int (* cleanup ) (struct psmouse*) ;int reconnect; int disconnect; int set_rate; int protocol_handler; int dev; } ;
struct cytp_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 int VAR_4 ;
 int FUNC_1 (struct psmouse*) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 scalar_t__ FUNC_3 (int ,struct cytp_data*) ;
 int VAR_5 ;
 int FUNC_4 (struct cytp_data*) ;
 struct cytp_data* FUNC_5 (int,int ) ;
 int FUNC_6 (struct psmouse*,char*) ;

int FUNC_7(struct psmouse *VAR_6)
{
 struct cytp_data *VAR_7;

 VAR_7 = FUNC_5(sizeof(struct cytp_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->private = VAR_7;
 VAR_6->pktsize = 8;

 FUNC_1(VAR_6);

 if (FUNC_0(VAR_6)) {
  FUNC_6(VAR_6, "Unable to query Trackpad hardware.\n");
  goto err_exit;
 }

 if (FUNC_2(VAR_6)) {
  FUNC_6(VAR_6, "init: Unable to initialize Cypress absolute mode.\n");
  goto err_exit;
 }

 if (FUNC_3(VAR_6->dev, VAR_7) < 0) {
  FUNC_6(VAR_6, "init: Unable to set input params.\n");
  goto err_exit;
 }

 VAR_6->model = 1;
 VAR_6->protocol_handler = VAR_3;
 VAR_6->set_rate = VAR_5;
 VAR_6->disconnect = VAR_2;
 VAR_6->reconnect = VAR_4;
 VAR_6->cleanup = FUNC_1;
 VAR_6->resync_time = 0;

 return 0;

err_exit:




 FUNC_1(VAR_6);

 VAR_6->private = ((void*)0);
 FUNC_4(VAR_7);

 return -1;
}
