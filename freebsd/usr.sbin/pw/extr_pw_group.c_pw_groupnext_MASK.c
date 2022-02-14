
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct userconf {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct userconf*,int) ;
 int FUNC_1 (char*,int ) ;

int
FUNC_2(struct userconf *VAR_1, bool VAR_2)
{
 gid_t VAR_3 = FUNC_0(VAR_1, -1);

 if (VAR_2)
  return (VAR_3);
 FUNC_1("%ju\n", (uintmax_t)VAR_3);

 return (VAR_0);
}
