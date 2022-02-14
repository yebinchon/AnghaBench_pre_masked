
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_current; int ifm_name; } ;
typedef int ifmr ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct ifmediareq*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, const char *VAR_3)
{
 struct ifmediareq VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_3(VAR_4.ifm_name, VAR_3, sizeof(VAR_4.ifm_name));
 if (FUNC_1(VAR_2, VAR_1, (caddr_t)&VAR_4) < 0)
  FUNC_0(-1, "%s: cannot get media", VAR_3);
 return (VAR_4.ifm_current & VAR_0) != 0;
}
