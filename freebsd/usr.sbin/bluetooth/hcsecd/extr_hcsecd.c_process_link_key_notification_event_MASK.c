
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_hci {int hci_node; } ;
struct TYPE_5__ {int key; int bdaddr; } ;
typedef TYPE_1__ ng_hci_link_key_notification_ep ;
typedef TYPE_2__* link_key_p ;
struct TYPE_6__ {char* name; int * key; int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, struct sockaddr_hci *VAR_4,
  ng_hci_link_key_notification_ep *VAR_5)
{
 link_key_p VAR_6 = ((void*)0);

 FUNC_5(VAR_0, "Got Link_Key_Notification event from '%s', " "remote bdaddr %s", VAR_4->hci_node,

   FUNC_0(&VAR_5->bdaddr, ((void*)0)));

 if ((VAR_6 = FUNC_2(&VAR_5->bdaddr, 1)) == ((void*)0)) {
  FUNC_5(VAR_1, "Could not find entry for remote bdaddr %s",
    FUNC_0(&VAR_5->bdaddr, ((void*)0)));
  return (-1);
 }

 FUNC_5(VAR_0, "Updating link key for the entry, " "remote bdaddr %s, name '%s', link key %s",

   FUNC_0(&VAR_6->bdaddr, ((void*)0)),
   (VAR_6->name != ((void*)0))? VAR_6->name : "No name",
   (VAR_6->key != ((void*)0))? "exists" : "doesn't exist");

 if (VAR_6->key == ((void*)0)) {
  VAR_6->key = (uint8_t *) FUNC_3(VAR_2);
  if (VAR_6->key == ((void*)0)) {
   FUNC_5(VAR_1, "Could not allocate link key");
   FUNC_1(1);
  }
 }

 FUNC_4(VAR_6->key, &VAR_5->key, VAR_2);

 return (0);
}
