
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct procstat {int dummy; } ;
struct kinfo_proc {int dummy; } ;


 scalar_t__ FUNC_0 (struct procstat*,struct kinfo_proc*,int*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(struct procstat *VAR_0, struct kinfo_proc *VAR_1)
{
 u_short VAR_2;
 static char VAR_3[4];

 if (FUNC_0(VAR_0, VAR_1, &VAR_2) == 0) {
  FUNC_1(VAR_3, 4, "%03o", VAR_2);
  return (VAR_3);
 } else {
  return ("-");
 }
}
