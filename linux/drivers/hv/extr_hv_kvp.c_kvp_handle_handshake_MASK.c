
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int operation; } ;
struct hv_kvp_msg {TYPE_1__ kvp_hdr; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct hv_kvp_msg *VAR_2)
{
 switch (VAR_2->kvp_hdr.operation) {
 case 129:
  VAR_1 = 129;
  FUNC_2("KVP: IP injection functionality not available\n");
  FUNC_2("KVP: Upgrade the KVP daemon\n");
  break;
 case 128:
  VAR_1 = 128;
  break;
 default:
  FUNC_2("KVP: incompatible daemon\n");
  FUNC_2("KVP: KVP version: %d, Daemon version: %d\n",
   128, VAR_2->kvp_hdr.operation);
  return -VAR_0;
 }




 FUNC_1("KVP: userspace daemon ver. %d connected\n",
   VAR_2->kvp_hdr.operation);
 FUNC_0(VAR_1);

 return 0;
}
