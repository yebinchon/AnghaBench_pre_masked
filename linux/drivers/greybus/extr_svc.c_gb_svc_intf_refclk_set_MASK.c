
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc_intf_refclk_response {scalar_t__ result_code; } ;
struct gb_svc_intf_refclk_request {int intf_id; } ;
struct gb_svc {int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct gb_svc_intf_refclk_request*,int,struct gb_svc_intf_refclk_response*,int) ;

int FUNC_1(struct gb_svc *VAR_4, u8 VAR_5, bool VAR_6)
{
 struct gb_svc_intf_refclk_request VAR_7;
 struct gb_svc_intf_refclk_response VAR_8;
 int VAR_9, VAR_10;

 VAR_7.intf_id = VAR_5;

 if (VAR_6)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 VAR_10 = FUNC_0(VAR_4->connection, VAR_9,
    &VAR_7, sizeof(VAR_7),
    &VAR_8, sizeof(VAR_8));
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_8.result_code != VAR_1)
  return -VAR_0;
 return 0;
}
