
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct gb_svc_conn_destroy_request {void* cport2_id; void* intf2_id; void* cport1_id; void* intf1_id; } ;
struct gb_svc {int dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
typedef int request ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,void*,int ,void*,int ,int) ;
 int FUNC_2 (struct gb_connection*,int ,struct gb_svc_conn_destroy_request*,int,int *,int ) ;

void FUNC_3(struct gb_svc *VAR_1, u8 VAR_2, u16 VAR_3,
          u8 VAR_4, u16 VAR_5)
{
 struct gb_svc_conn_destroy_request VAR_6;
 struct gb_connection *VAR_7 = VAR_1->connection;
 int VAR_8;

 VAR_6.intf1_id = VAR_2;
 VAR_6.cport1_id = FUNC_0(VAR_3);
 VAR_6.intf2_id = VAR_4;
 VAR_6.cport2_id = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_7, VAR_0,
    &VAR_6, sizeof(VAR_6), ((void*)0), 0);
 if (VAR_8) {
  FUNC_1(&VAR_1->dev, "failed to destroy connection (%u:%u %u:%u): %d\n",
   VAR_2, VAR_3, VAR_4, VAR_5, VAR_8);
 }
}
