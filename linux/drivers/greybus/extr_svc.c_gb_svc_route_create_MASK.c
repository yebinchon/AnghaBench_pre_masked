
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_svc_route_create_request {void* dev2_id; void* intf2_id; void* dev1_id; void* intf1_id; } ;
struct gb_svc {int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_svc_route_create_request*,int,int *,int ) ;

int FUNC_1(struct gb_svc *VAR_1, u8 VAR_2, u8 VAR_3,
   u8 VAR_4, u8 VAR_5)
{
 struct gb_svc_route_create_request VAR_6;

 VAR_6.intf1_id = VAR_2;
 VAR_6.dev1_id = VAR_3;
 VAR_6.intf2_id = VAR_4;
 VAR_6.dev2_id = VAR_5;

 return FUNC_0(VAR_1->connection, VAR_0,
     &VAR_6, sizeof(VAR_6), ((void*)0), 0);
}
