
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gb_svc_dme_peer_set_response {int result_code; } ;
struct gb_svc_dme_peer_set_request {int value; void* selector; void* attr; int intf_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int,int,int ,int) ;
 int FUNC_3 (int ,int ,struct gb_svc_dme_peer_set_request*,int,struct gb_svc_dme_peer_set_response*,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct gb_svc *VAR_2, u8 VAR_3, u16 VAR_4, u16 VAR_5,
   u32 VAR_6)
{
 struct gb_svc_dme_peer_set_request VAR_7;
 struct gb_svc_dme_peer_set_response VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_7.intf_id = VAR_3;
 VAR_7.attr = FUNC_0(VAR_4);
 VAR_7.selector = FUNC_0(VAR_5);
 VAR_7.value = FUNC_1(VAR_6);

 VAR_10 = FUNC_3(VAR_2->connection, VAR_1,
    &VAR_7, sizeof(VAR_7),
    &VAR_8, sizeof(VAR_8));
 if (VAR_10) {
  FUNC_2(&VAR_2->dev, "failed to set DME attribute (%u 0x%04x %u %u): %d\n",
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_10);
  return VAR_10;
 }

 VAR_9 = FUNC_4(VAR_8.result_code);
 if (VAR_9) {
  FUNC_2(&VAR_2->dev, "UniPro error while setting DME attribute (%u 0x%04x %u %u): %u\n",
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
  return -VAR_0;
 }

 return 0;
}
