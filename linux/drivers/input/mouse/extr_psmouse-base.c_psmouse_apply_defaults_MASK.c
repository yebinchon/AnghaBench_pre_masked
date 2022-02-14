
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktsize; int * pt_deactivate; int * pt_activate; int * cleanup; int * disconnect; int * fast_reconnect; int * reconnect; int protocol_handler; int poll; int set_scale; int set_resolution; int set_rate; int * protocol; struct input_dev* dev; } ;
struct input_dev {int propbit; int mscbit; int absbit; int relbit; int keybit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_18)
{
 struct input_dev *VAR_19 = VAR_18->dev;

 FUNC_1(VAR_19->evbit, VAR_3);
 FUNC_1(VAR_19->keybit, VAR_7);
 FUNC_1(VAR_19->relbit, VAR_9);
 FUNC_1(VAR_19->absbit, VAR_0);
 FUNC_1(VAR_19->mscbit, VAR_8);

 FUNC_2(VAR_19, VAR_4, VAR_1);
 FUNC_2(VAR_19, VAR_4, VAR_2);

 FUNC_2(VAR_19, VAR_5, VAR_10);
 FUNC_2(VAR_19, VAR_5, VAR_11);

 FUNC_0(VAR_6, VAR_19->propbit);

 VAR_18->protocol = &VAR_14[0];

 VAR_18->set_rate = VAR_15;
 VAR_18->set_resolution = VAR_16;
 VAR_18->set_scale = VAR_17;
 VAR_18->poll = VAR_12;
 VAR_18->protocol_handler = VAR_13;
 VAR_18->pktsize = 3;
 VAR_18->reconnect = ((void*)0);
 VAR_18->fast_reconnect = ((void*)0);
 VAR_18->disconnect = ((void*)0);
 VAR_18->cleanup = ((void*)0);
 VAR_18->pt_activate = ((void*)0);
 VAR_18->pt_deactivate = ((void*)0);
}
