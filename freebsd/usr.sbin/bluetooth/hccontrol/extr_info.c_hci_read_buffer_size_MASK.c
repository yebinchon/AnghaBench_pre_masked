
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rp ;
struct TYPE_2__ {int status; int max_sco_size; int num_sco_pkt; int num_acl_pkt; int max_acl_size; } ;
typedef TYPE_1__ ng_hci_read_buffer_size_rp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,char*,int*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(int VAR_6, int VAR_7, char **VAR_8)
{
 ng_hci_read_buffer_size_rp VAR_9;
 int VAR_10;

 VAR_10 = sizeof(VAR_9);
 if (FUNC_2(VAR_6, FUNC_0(VAR_3,
   VAR_2),
   (char *) &VAR_9, &VAR_10) == VAR_0)
  return (VAR_0);

 if (VAR_9.status != 0x00) {
  FUNC_1(VAR_5, "Status: %s [%#02x]\n",
   FUNC_3(VAR_9.status), VAR_9.status);
  return (VAR_1);
 }

 FUNC_1(VAR_5, "Max. ACL packet size: %d bytes\n",
  FUNC_4(VAR_9.max_acl_size));
 FUNC_1(VAR_5, "Number of ACL packets: %d\n",
  FUNC_4(VAR_9.num_acl_pkt));
 FUNC_1(VAR_5, "Max. SCO packet size: %d bytes\n",
  VAR_9.max_sco_size);
 FUNC_1(VAR_5, "Number of SCO packets: %d\n",
  FUNC_4(VAR_9.num_sco_pkt));

 return (VAR_4);
}
