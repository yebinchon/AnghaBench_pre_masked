
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct sysctl_req {int dummy; } ;
struct sysctl_oid {int oid_kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct ucred *VAR_4, struct sysctl_oid *VAR_5,
    void *VAR_6, int VAR_7, struct sysctl_req *VAR_8)
{
 struct sysctl_oid *VAR_9;


 if ((VAR_3 & VAR_2) == 0)
  return (0);

 VAR_9 = VAR_5;
 if (VAR_9->oid_kind & VAR_0) {
  return (VAR_1);
 }
 return 0;
}
