
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct gb_svc_conn_create_request {void* flags; scalar_t__ tc; void* cport2_id; void* intf2_id; void* cport1_id; void* intf1_id; } ;
struct gb_svc {int connection; } ;
typedef int request ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct gb_svc_conn_create_request*,int,int *,int ) ;

int FUNC_2(struct gb_svc *VAR_1,
        u8 VAR_2, u16 VAR_3,
        u8 VAR_4, u16 VAR_5,
        u8 VAR_6)
{
 struct gb_svc_conn_create_request VAR_7;

 VAR_7.intf1_id = VAR_2;
 VAR_7.cport1_id = FUNC_0(VAR_3);
 VAR_7.intf2_id = VAR_4;
 VAR_7.cport2_id = FUNC_0(VAR_5);
 VAR_7.tc = 0;
 VAR_7.flags = VAR_6;

 return FUNC_1(VAR_1->connection, VAR_0,
     &VAR_7, sizeof(VAR_7), ((void*)0), 0);
}
