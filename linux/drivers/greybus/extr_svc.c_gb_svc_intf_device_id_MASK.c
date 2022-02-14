
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_svc_intf_device_id_request {void* device_id; void* intf_id; } ;
struct gb_svc {int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_svc_intf_device_id_request*,int,int *,int ) ;

int FUNC_1(struct gb_svc *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct gb_svc_intf_device_id_request VAR_4;

 VAR_4.intf_id = VAR_2;
 VAR_4.device_id = VAR_3;

 return FUNC_0(VAR_1->connection, VAR_0,
     &VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
