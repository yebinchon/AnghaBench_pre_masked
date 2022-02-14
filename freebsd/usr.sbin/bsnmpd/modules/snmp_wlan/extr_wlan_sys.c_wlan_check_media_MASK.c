
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {scalar_t__ ifm_count; int ifm_status; int ifm_active; int ifm_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifmediareq*) ;
 int FUNC_2 (struct ifmediareq*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

int
FUNC_4(char *VAR_3)
{
 struct ifmediareq VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(struct ifmediareq));
 FUNC_3(VAR_4.ifm_name, VAR_3, sizeof(VAR_4.ifm_name));

 if (FUNC_1(VAR_2, VAR_1, &VAR_4) < 0 || VAR_4.ifm_count == 0)
  return (0);

 if ((VAR_4.ifm_status & VAR_0) == 0)
  return (0);

 return (FUNC_0(VAR_4.ifm_active));
}
