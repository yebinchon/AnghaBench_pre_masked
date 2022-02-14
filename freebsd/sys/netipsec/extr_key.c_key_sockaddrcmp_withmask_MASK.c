
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_family; scalar_t__ sa_len; } ;
struct TYPE_4__ {int sin_addr; } ;
struct TYPE_3__ {int sin6_addr; int sin6_scope_id; } ;




 int FUNC_0 (int *,int *,size_t) ;
 TYPE_2__* FUNC_1 (struct sockaddr const*) ;
 TYPE_1__* FUNC_2 (struct sockaddr const*) ;

int
FUNC_3(const struct sockaddr *VAR_0,
    const struct sockaddr *VAR_1, size_t VAR_2)
{
 if (VAR_0->sa_family != VAR_1->sa_family || VAR_0->sa_len != VAR_1->sa_len)
  return (1);

 switch (VAR_0->sa_family) {
 }
 return (1);
}
