
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_control_connected_request {int cport_id; } ;
struct gb_control {int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct gb_control_connected_request*,int,int *,int ) ;

int FUNC_2(struct gb_control *VAR_1, u16 VAR_2)
{
 struct gb_control_connected_request VAR_3;

 VAR_3.cport_id = FUNC_0(VAR_2);
 return FUNC_1(VAR_1->connection, VAR_0,
     &VAR_3, sizeof(VAR_3), ((void*)0), 0);
}
