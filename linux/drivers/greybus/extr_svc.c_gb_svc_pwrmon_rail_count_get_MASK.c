
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_svc_pwrmon_rail_count_get_response {int rail_count; } ;
struct gb_svc {int dev; int connection; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,int ,struct gb_svc_pwrmon_rail_count_get_response*,int) ;

__attribute__((used)) static int FUNC_2(struct gb_svc *VAR_1, u8 *VAR_2)
{
 struct gb_svc_pwrmon_rail_count_get_response VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->connection,
    VAR_0, ((void*)0), 0,
    &VAR_3, sizeof(VAR_3));
 if (VAR_4) {
  FUNC_0(&VAR_1->dev, "failed to get rail count: %d\n", VAR_4);
  return VAR_4;
 }

 *VAR_2 = VAR_3.rail_count;

 return 0;
}
