
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {int gid_num; scalar_t__ const* gid_arr; } ;
struct TYPE_4__ {TYPE_1__ proc_cred; } ;


 scalar_t__ FUNC_0 (scalar_t__ const*,scalar_t__ const*,int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,char const*,int,int ) ;
 int FUNC_2 (char*,char const*,...) ;

int
FUNC_3(const char *VAR_1, const gid_t *VAR_2,
    const char *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
  FUNC_1("%s[%d] %lu", VAR_1, VAR_6, (u_long)VAR_2[VAR_6]);

 if (VAR_5) {
  if (VAR_4 != VAR_0.proc_cred.gid_num) {
   FUNC_2("%s %d != %d", VAR_3, VAR_4,
       VAR_0.proc_cred.gid_num);
   return (-1);
  }
 } else {
  if (VAR_4 > VAR_0.proc_cred.gid_num) {
   FUNC_2("%s %d > %d", VAR_3, VAR_4,
       VAR_0.proc_cred.gid_num);
   return (-1);
  }
 }
 if (FUNC_0(VAR_2, VAR_0.proc_cred.gid_arr,
     VAR_4 * sizeof(*VAR_2)) != 0) {
  FUNC_2("%s content is wrong", VAR_1);
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
   if (VAR_2[VAR_6] != VAR_0.proc_cred.gid_arr[VAR_6]) {
    FUNC_2("%s[%d] %lu != %lu",
        VAR_1, VAR_6, (u_long)VAR_2[VAR_6],
        (u_long)VAR_0.proc_cred.gid_arr[VAR_6]);
    break;
   }
  return (-1);
 }
 return (0);
}
