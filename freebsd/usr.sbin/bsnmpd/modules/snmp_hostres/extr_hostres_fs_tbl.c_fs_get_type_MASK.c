
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct statfs {int f_fstypename; } ;
struct asn_oid {int dummy; } ;
struct TYPE_2__ {struct asn_oid const* oid; int str; } ;


 size_t VAR_0 ;
 struct asn_oid const VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

const struct asn_oid *
FUNC_2(const struct statfs *VAR_3)
{
 u_int VAR_4;

 FUNC_0(VAR_3 != ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_1(VAR_2[VAR_4].str, VAR_3->f_fstypename) == 0)
   return (VAR_2[VAR_4].oid);

 return (&VAR_1);
}
