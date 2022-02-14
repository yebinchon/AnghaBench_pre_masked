
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; } ;
struct sockaddr {int sa_family; } ;



 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 unsigned char* FUNC_1 (struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_2(struct sockaddr *VAR_0, struct sockaddr *VAR_1, struct sockaddr *VAR_2)
{
 unsigned char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_0->sa_family != VAR_1->sa_family ||
     (VAR_3 = FUNC_1(VAR_0, &VAR_6)) == ((void*)0) ||
     (VAR_4 = FUNC_1(VAR_1, ((void*)0))) == ((void*)0))
  return (1);

 switch (VAR_0->sa_family) {
 case 128:
  if (((struct sockaddr_in6 *)VAR_0)->sin6_scope_id !=
      ((struct sockaddr_in6 *)VAR_1)->sin6_scope_id)
   return (1);
  break;
 }


 if (VAR_2 == ((void*)0))
  return (FUNC_0(VAR_3, VAR_4, VAR_6));


 if (VAR_0->sa_family != VAR_2->sa_family ||
     (VAR_5 = FUNC_1(VAR_2, ((void*)0))) == ((void*)0))
  return (1);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  if ((VAR_3[VAR_7] & VAR_5[VAR_7]) != (VAR_4[VAR_7] & VAR_5[VAR_7]))
   return (1);
 return (0);
}
