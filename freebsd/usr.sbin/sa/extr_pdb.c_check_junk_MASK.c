
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct cmdinfo {char* ci_comm; scalar_t__ ci_calls; } ;


 char* FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ,char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const struct cmdinfo *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 FUNC_1(VAR_0, "%s (%jd) -- ", VAR_2->ci_comm, (uintmax_t)VAR_2->ci_calls);
 VAR_3 = FUNC_0(VAR_1, &VAR_4);

 return (VAR_3 && (VAR_3[0] == 'y' || VAR_3[0] == 'Y')) ? 1 : 0;
}
