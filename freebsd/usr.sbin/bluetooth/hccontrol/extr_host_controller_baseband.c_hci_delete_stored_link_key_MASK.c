
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostent {int h_addr; } ;
struct TYPE_4__ {int status; int num_keys_deleted; } ;
typedef TYPE_1__ ng_hci_delete_stored_link_key_rp ;
struct TYPE_5__ {int delete_all; int bdaddr; } ;
typedef TYPE_2__ ng_hci_delete_stored_link_key_cp ;
typedef int int32_t ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int *) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(int VAR_7, int VAR_8, char **VAR_9)
{
 ng_hci_delete_stored_link_key_cp VAR_10;
 ng_hci_delete_stored_link_key_rp VAR_11;
 int32_t VAR_12;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));

 switch (VAR_8) {
 case 1:

  if (!FUNC_1(VAR_9[0], &VAR_10.bdaddr)) {
   struct hostent *VAR_13 = ((void*)0);

   if ((VAR_13 = FUNC_2(VAR_9[0])) == ((void*)0))
    return (VAR_5);

   FUNC_6(&VAR_10.bdaddr, VAR_13->h_addr, sizeof(VAR_10.bdaddr));
  }
  break;

 default:
  VAR_10.delete_all = 1;
  break;
 }


 VAR_12 = sizeof(VAR_10);
 if (FUNC_4(VAR_7, FUNC_0(VAR_3,
   VAR_2),
   (char const *) &VAR_10, sizeof(VAR_10),
   (char *) &VAR_11, &VAR_12) == VAR_0)
  return (VAR_0);

 if (VAR_11.status != 0x00) {
  FUNC_3(VAR_6, "Status: %s [%#02x]\n",
   FUNC_5(VAR_11.status), VAR_11.status);
  return (VAR_1);
 }

 FUNC_3(VAR_6, "Number of keys deleted: %d\n", VAR_11.num_keys_deleted);

 return (VAR_4);
}
