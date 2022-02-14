
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct nodeinfo {int dummy; } ;
struct ng_mesg {scalar_t__ data; } ;
struct asn_oid {int * subs; } ;
typedef int ng_ID_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_mesg*) ;
 struct ng_mesg* FUNC_1 (int ,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(const struct asn_oid *VAR_2, u_int VAR_3, struct nodeinfo *VAR_4)
{
 ng_ID_t VAR_5 = VAR_2->subs[VAR_3];
 struct ng_mesg *VAR_6;

 if ((VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_1,
     ((void*)0), 0)) == ((void*)0))
  return (-1);

 *VAR_4 = *(struct nodeinfo *)(void *)VAR_6->data;
 FUNC_0(VAR_6);
 return (0);
}
