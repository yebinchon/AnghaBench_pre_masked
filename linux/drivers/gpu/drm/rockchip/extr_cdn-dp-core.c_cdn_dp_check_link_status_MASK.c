
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cdn_dp_port {int lanes; } ;
struct TYPE_2__ {int num_lanes; int rate; } ;
struct cdn_dp_device {TYPE_1__ link; int dpcd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct cdn_dp_port* FUNC_1 (struct cdn_dp_device*) ;
 scalar_t__ FUNC_2 (struct cdn_dp_device*,int ,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct cdn_dp_device *VAR_2)
{
 u8 VAR_3[VAR_1];
 struct cdn_dp_port *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5 = FUNC_4(VAR_2->dpcd);

 if (!VAR_4 || !VAR_2->link.rate || !VAR_2->link.num_lanes)
  return 0;

 if (FUNC_2(VAR_2, VAR_0, VAR_3,
        VAR_1)) {
  FUNC_0("Failed to get link status\n");
  return 0;
 }


 return FUNC_3(VAR_3, FUNC_5(VAR_4->lanes, VAR_5));
}
