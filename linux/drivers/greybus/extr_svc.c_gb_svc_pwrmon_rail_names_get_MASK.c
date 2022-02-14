
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_svc_pwrmon_rail_names_get_response {int status; } ;
struct gb_svc {int dev; int connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,int ,struct gb_svc_pwrmon_rail_names_get_response*,size_t) ;

__attribute__((used)) static int FUNC_2(struct gb_svc *VAR_3,
  struct gb_svc_pwrmon_rail_names_get_response *VAR_4,
  size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->connection,
    VAR_2, ((void*)0), 0,
    VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(&VAR_3->dev, "failed to get rail names: %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_4->status != VAR_1) {
  FUNC_0(&VAR_3->dev,
   "SVC error while getting rail names: %u\n",
   VAR_4->status);
  return -VAR_0;
 }

 return 0;
}
