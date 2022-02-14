
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct nodeinfo {size_t hooks; } ;
struct ng_mesg {scalar_t__ data; } ;
struct namelist {size_t numnames; struct linkinfo* nodeinfo; } ;
struct linkinfo {scalar_t__ id; size_t* ourhook; } ;
struct hooklist {struct linkinfo* link; struct nodeinfo nodeinfo; } ;
struct asn_oid {size_t len; scalar_t__* subs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ng_mesg*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct asn_oid const*,size_t,struct asn_oid*) ;
 int VAR_4 ;
 struct ng_mesg* FUNC_2 (scalar_t__,int ,int ,int *,int ) ;
 int FUNC_3 (struct linkinfo*,size_t,int,int ) ;
 scalar_t__ VAR_5 ;
 size_t FUNC_4 (size_t*) ;

__attribute__((used)) static int
FUNC_5(const struct asn_oid *VAR_6, u_int VAR_7, struct nodeinfo *VAR_8,
    struct linkinfo *VAR_9)
{
 u_int VAR_10 = VAR_6->len - VAR_7;
 struct namelist *VAR_11;
 struct ng_mesg *VAR_12;
 struct hooklist *VAR_13;
 struct ng_mesg *VAR_14;
 u_int VAR_15;
 struct asn_oid VAR_16;
 u_int VAR_17, VAR_18;




 if ((VAR_12 = FUNC_2(VAR_5, VAR_0, VAR_2,
     ((void*)0), 0)) == ((void*)0))
  return (-1);
 VAR_11 = (struct namelist *)(void *)VAR_12->data;

 FUNC_3(VAR_11->nodeinfo, VAR_11->numnames, sizeof(VAR_11->nodeinfo[0]), VAR_4);





 if (VAR_10 == 0) {
  VAR_15 = 0;
  goto return_first_hook;
 }




 for (VAR_15 = 0; VAR_15 < VAR_11->numnames; VAR_15++)
  if (VAR_11->nodeinfo[VAR_15].id >= VAR_6->subs[VAR_7])
   break;





 if (VAR_10 == 1 || VAR_15 >= VAR_11->numnames ||
     VAR_11->nodeinfo[VAR_15].id > VAR_6->subs[VAR_7])
  goto return_first_hook;






 if ((VAR_14 = FUNC_2(VAR_11->nodeinfo[VAR_15].id,
     VAR_0, VAR_1, ((void*)0), 0)) == ((void*)0)) {
  FUNC_0(VAR_12);
  return (-1);
 }
 VAR_13 = (struct hooklist *)(void *)VAR_14->data;
 if (VAR_13->nodeinfo.hooks > 0) {
  FUNC_3(VAR_13->link, VAR_13->nodeinfo.hooks,
      sizeof(VAR_13->link[0]), VAR_3);
  for (VAR_17 = 0; VAR_17 < VAR_13->nodeinfo.hooks; VAR_17++) {
   VAR_16.len = FUNC_4(VAR_13->link[VAR_17].ourhook) + 1;
   VAR_16.subs[0] = VAR_16.len - 1;
   for (VAR_18 = 0; VAR_18 < VAR_16.len; VAR_18++)
    VAR_16.subs[VAR_18 + 1] = VAR_13->link[VAR_17].ourhook[VAR_18];
   if (FUNC_1(VAR_6, VAR_7 + 1, &VAR_16) < 0)
    break;
  }
  if (VAR_17 < VAR_13->nodeinfo.hooks) {
   *VAR_8 = VAR_13->nodeinfo;
   *VAR_9 = VAR_13->link[VAR_17];

   FUNC_0(VAR_12);
   FUNC_0(VAR_14);
   return (0);
  }
 }



 FUNC_0(VAR_14);
 VAR_15++;

  return_first_hook:
 while (VAR_15 < VAR_11->numnames) {
  if ((VAR_14 = FUNC_2(VAR_11->nodeinfo[VAR_15].id,
      VAR_0, VAR_1, ((void*)0), 0)) == ((void*)0))
   break;
  VAR_13 = (struct hooklist *)(void *)VAR_14->data;
  if (VAR_13->nodeinfo.hooks > 0) {
   FUNC_3(VAR_13->link, VAR_13->nodeinfo.hooks,
       sizeof(VAR_13->link[0]), VAR_3);

   *VAR_8 = VAR_13->nodeinfo;
   *VAR_9 = VAR_13->link[0];

   FUNC_0(VAR_12);
   FUNC_0(VAR_14);
   return (0);
  }


  FUNC_0(VAR_14);
  VAR_15++;
 }

 FUNC_0(VAR_12);
 return (-1);
}
