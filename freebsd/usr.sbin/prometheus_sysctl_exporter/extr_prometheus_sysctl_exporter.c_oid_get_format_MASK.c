
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidformat {int dummy; } ;
struct oid {int len; int id; } ;
typedef int lookup ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (int*,int,struct oidformat*,size_t*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(const struct oid *VAR_3, struct oidformat *VAR_4)
{
 int VAR_5[VAR_0 + 2];
 size_t VAR_6;

 VAR_5[0] = 0;
 VAR_5[1] = 4;
 FUNC_1(VAR_5 + 2, VAR_3->id, VAR_3->len * sizeof(VAR_5[0]));
 VAR_6 = sizeof(*VAR_4);
 if (FUNC_2(VAR_5, 2 + VAR_3->len, VAR_4, &VAR_6, 0, 0) != 0) {
  if (VAR_2 == VAR_1)
   return (0);
  FUNC_0(1, "sysctl(oidfmt)");
 }
 return (1);
}
