
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr_in6 {int sin6_len; scalar_t__ sin6_scope_id; int sin6_addr; int sin6_family; } ;
struct TYPE_2__ {int sin6_addr; } ;
struct in6_defrouter {scalar_t__ if_index; TYPE_1__ rtaddr; } ;
typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int*,int ) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int,struct sockaddr_in6*,scalar_t__,int,int *,int ) ;
 scalar_t__ FUNC_7 (int*,int ,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(uint32_t VAR_6, uint32_t VAR_7)
{
 static int VAR_8 = -1;
 struct sockaddr_in6 VAR_9;
 struct in6_defrouter *VAR_10, *VAR_11;
 char *VAR_12;
 size_t VAR_13;
 int VAR_14[4];

 if (VAR_6 == 0)
  return (0);
 if (FUNC_2(&VAR_8, VAR_4) != 0)
  return (-1);

 VAR_14[0] = VAR_1;
 VAR_14[1] = VAR_5;
 VAR_14[2] = VAR_3;
 VAR_14[3] = VAR_2;
 if (FUNC_7(VAR_14, FUNC_5(VAR_14), ((void*)0), &VAR_13, ((void*)0), 0) < 0)
  return (-1);
 if (VAR_13 == 0)
  return (0);

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.sin6_family = VAR_0;
 VAR_9.sin6_len = sizeof(VAR_9);

 VAR_12 = FUNC_3(VAR_13);
 if (VAR_12 == ((void*)0))
  return (-1);
 if (FUNC_7(VAR_14, FUNC_5(VAR_14), VAR_12, &VAR_13, ((void*)0), 0) < 0)
  return (-1);
 VAR_11 = (struct in6_defrouter *)(void *)(VAR_12 + VAR_13);
 for (VAR_10 = (struct in6_defrouter *)(void *)VAR_12; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_6 != VAR_10->if_index)
   continue;
  if (!FUNC_0(&VAR_10->rtaddr.sin6_addr))
   continue;
  VAR_9.sin6_addr = VAR_10->rtaddr.sin6_addr;
  VAR_9.sin6_scope_id = VAR_7;
  (void)FUNC_6(VAR_8, &VAR_9, VAR_6, 1, ((void*)0), 0);
 }
 FUNC_1(VAR_12);

 return (0);
}
