
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_hci {int hci_node; } ;
typedef TYPE_1__* link_key_p ;
typedef int * bdaddr_p ;
struct TYPE_3__ {char* name; int * key; int bdaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int,struct sockaddr_hci*,int *,int *) ;
 int FUNC_3 (int ,char*,int ,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_1, struct sockaddr_hci *VAR_2,
  bdaddr_p VAR_3)
{
 link_key_p VAR_4 = ((void*)0);

 FUNC_3(VAR_0, "Got Link_Key_Request event from '%s', " "remote bdaddr %s", VAR_2->hci_node,

   FUNC_0(VAR_3, ((void*)0)));

 if ((VAR_4 = FUNC_1(VAR_3, 0)) != ((void*)0)) {
  FUNC_3(VAR_0, "Found matching entry, " "remote bdaddr %s, name '%s', link key %s",

    FUNC_0(&VAR_4->bdaddr, ((void*)0)),
    (VAR_4->name != ((void*)0))? VAR_4->name : "No name",
    (VAR_4->key != ((void*)0))? "exists" : "doesn't exist");

  return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4->key));
 }

 FUNC_3(VAR_0, "Could not find link key for remote bdaddr %s",
   FUNC_0(VAR_3, ((void*)0)));

 return (FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0)));
}
