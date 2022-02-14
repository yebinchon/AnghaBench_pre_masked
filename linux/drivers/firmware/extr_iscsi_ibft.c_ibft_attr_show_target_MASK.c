
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int index; int flags; } ;
struct ibft_tgt {int port; int nic_assoc; int chap_type; int rev_chap_secret_off; int rev_chap_secret_len; int rev_chap_name_off; int rev_chap_name_len; int chap_secret_off; int chap_secret_len; int chap_name_off; int chap_name_len; int tgt_name_off; int tgt_name_len; int * lun; int ip_addr; TYPE_1__ hdr; } ;
struct ibft_kobject {void* header; struct ibft_tgt* tgt; } ;
typedef int ssize_t ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(void *VAR_0, int VAR_1, char *VAR_2)
{
 struct ibft_kobject *VAR_3 = VAR_0;
 struct ibft_tgt *VAR_4 = VAR_3->tgt;
 void *VAR_5 = VAR_3->header;
 char *VAR_6 = VAR_2;
 int VAR_7;

 if (!VAR_4)
  return 0;

 switch (VAR_1) {
 case 135:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->hdr.index);
  break;
 case 136:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->hdr.flags);
  break;
 case 134:
  VAR_6 += FUNC_1(VAR_6, VAR_4->ip_addr);
  break;
 case 130:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->port);
  break;
 case 133:
  for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
   VAR_6 += FUNC_0(VAR_6, "%x", (u8)VAR_4->lun[VAR_7]);
  VAR_6 += FUNC_0(VAR_6, "\n");
  break;
 case 131:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->nic_assoc);
  break;
 case 137:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->chap_type);
  break;
 case 132:
  VAR_6 += FUNC_2(VAR_6, VAR_4->tgt_name_len,
          (char *)VAR_5 + VAR_4->tgt_name_off);
  break;
 case 139:
  VAR_6 += FUNC_2(VAR_6, VAR_4->chap_name_len,
          (char *)VAR_5 + VAR_4->chap_name_off);
  break;
 case 138:
  VAR_6 += FUNC_2(VAR_6, VAR_4->chap_secret_len,
          (char *)VAR_5 + VAR_4->chap_secret_off);
  break;
 case 129:
  VAR_6 += FUNC_2(VAR_6, VAR_4->rev_chap_name_len,
          (char *)VAR_5 +
          VAR_4->rev_chap_name_off);
  break;
 case 128:
  VAR_6 += FUNC_2(VAR_6, VAR_4->rev_chap_secret_len,
          (char *)VAR_5 +
          VAR_4->rev_chap_secret_off);
  break;
 default:
  break;
 }

 return VAR_6 - VAR_2;
}
