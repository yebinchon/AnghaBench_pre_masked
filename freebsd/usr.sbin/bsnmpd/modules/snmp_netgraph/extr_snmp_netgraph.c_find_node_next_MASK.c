
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct nodeinfo {scalar_t__ id; } ;
struct ng_mesg {scalar_t__ data; } ;
struct namelist {scalar_t__ numnames; struct nodeinfo* nodeinfo; } ;
struct asn_oid {scalar_t__ len; scalar_t__* subs; } ;
typedef scalar_t__ ng_ID_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_mesg*) ;
 int VAR_2 ;
 struct ng_mesg* FUNC_1 (int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct nodeinfo*,scalar_t__,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(const struct asn_oid *VAR_4, u_int VAR_5, struct nodeinfo *VAR_6)
{
 u_int VAR_7 = VAR_4->len - VAR_5;
 struct ng_mesg *VAR_8;
 struct namelist *VAR_9;
 ng_ID_t VAR_10;
 u_int VAR_11;

 if ((VAR_8 = FUNC_1(VAR_3, VAR_0, VAR_1,
     ((void*)0), 0)) == ((void*)0))
  return (-1);
 VAR_9 = (struct namelist *)(void *)VAR_8->data;

 FUNC_2(VAR_9->nodeinfo, VAR_9->numnames, sizeof(VAR_9->nodeinfo[0]), VAR_2);

 if (VAR_7 == 0) {
  if (VAR_9->numnames == 0) {
   FUNC_0(VAR_8);
   return (-1);
  }
  *VAR_6 = VAR_9->nodeinfo[0];
  FUNC_0(VAR_8);
  return (0);
 }
 VAR_10 = VAR_4->subs[VAR_5];

 for (VAR_11 = 0; VAR_11 < VAR_9->numnames; VAR_11++)
  if (VAR_9->nodeinfo[VAR_11].id > VAR_10) {
   *VAR_6 = VAR_9->nodeinfo[VAR_11];
   FUNC_0(VAR_8);
   return (0);
  }

 FUNC_0(VAR_8);
 return (-1);
}
