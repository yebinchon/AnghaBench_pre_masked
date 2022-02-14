
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prison {int pr_flags; int pr_ip4s; struct in_addr* pr_ip4; struct prison* pr_parent; } ;
struct in_addr {scalar_t__ s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in_addr*,struct in_addr*,int) ;
 int FUNC_1 (struct in_addr*,int ) ;
 struct in_addr* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct in_addr*,struct in_addr*) ;

int
FUNC_4(struct prison *VAR_3, struct in_addr *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct prison *VAR_8;

 VAR_8 = VAR_3->pr_parent;
 if (!(VAR_3->pr_flags & VAR_2)) {

  if (VAR_3->pr_ip4s < VAR_8->pr_ip4s) {






   VAR_7 = 1;
   if (VAR_4 == ((void*)0)) {
    VAR_4 = FUNC_2(VAR_8->pr_ip4s * sizeof(*VAR_4),
        VAR_1, VAR_0);
    if (VAR_4 != ((void*)0))
     VAR_7 = 0;
   }
   if (VAR_4 != ((void*)0)) {
    FUNC_0(VAR_8->pr_ip4, VAR_4,
        VAR_8->pr_ip4s * sizeof(*VAR_4));
    FUNC_1(VAR_3->pr_ip4, VAR_1);
    VAR_3->pr_ip4 = VAR_4;
    VAR_3->pr_ip4s = VAR_8->pr_ip4s;
   }
   return (VAR_7);
  }
  VAR_3->pr_ip4s = VAR_8->pr_ip4s;
  if (VAR_3->pr_ip4s > 0)
   FUNC_0(VAR_8->pr_ip4, VAR_3->pr_ip4,
       VAR_3->pr_ip4s * sizeof(*VAR_4));
  else if (VAR_3->pr_ip4 != ((void*)0)) {
   FUNC_1(VAR_3->pr_ip4, VAR_1);
   VAR_3->pr_ip4 = ((void*)0);
  }
 } else if (VAR_3->pr_ip4s > 0) {

  for (VAR_6 = 0; VAR_6 < VAR_8->pr_ip4s; VAR_6++)
   if (VAR_3->pr_ip4[0].s_addr == VAR_8->pr_ip4[VAR_6].s_addr)
    break;
  if (VAR_6 < VAR_8->pr_ip4s)
   VAR_5 = 1;
  else {
   FUNC_0(VAR_3->pr_ip4 + 1, VAR_3->pr_ip4,
       --VAR_3->pr_ip4s * sizeof(*VAR_3->pr_ip4));
   VAR_5 = 0;
  }
  for (VAR_6 = 1; VAR_5 < VAR_3->pr_ip4s; ) {
   if (VAR_3->pr_ip4[VAR_5].s_addr == VAR_8->pr_ip4[0].s_addr) {
    VAR_5++;
    continue;
   }
   switch (VAR_6 >= VAR_8->pr_ip4s ? -1 :
    FUNC_3(&VAR_3->pr_ip4[VAR_5], &VAR_8->pr_ip4[VAR_6])) {
   case -1:
    FUNC_0(VAR_3->pr_ip4 + VAR_5 + 1, VAR_3->pr_ip4 + VAR_5,
        (--VAR_3->pr_ip4s - VAR_5) * sizeof(*VAR_3->pr_ip4));
    break;
   case 0:
    VAR_5++;
    VAR_6++;
    break;
   case 1:
    VAR_6++;
    break;
   }
  }
  if (VAR_3->pr_ip4s == 0) {
   FUNC_1(VAR_3->pr_ip4, VAR_1);
   VAR_3->pr_ip4 = ((void*)0);
  }
 }
 return (0);
}
