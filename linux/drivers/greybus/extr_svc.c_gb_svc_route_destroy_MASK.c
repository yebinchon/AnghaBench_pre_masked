
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_svc_route_destroy_request {void* intf2_id; void* intf1_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,void*,void*,int) ;
 int FUNC_1 (int ,int ,struct gb_svc_route_destroy_request*,int,int *,int ) ;

void FUNC_2(struct gb_svc *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct gb_svc_route_destroy_request VAR_4;
 int VAR_5;

 VAR_4.intf1_id = VAR_2;
 VAR_4.intf2_id = VAR_3;

 VAR_5 = FUNC_1(VAR_1->connection, VAR_0,
    &VAR_4, sizeof(VAR_4), ((void*)0), 0);
 if (VAR_5) {
  FUNC_0(&VAR_1->dev, "failed to destroy route (%u %u): %d\n",
   VAR_2, VAR_3, VAR_5);
 }
}
