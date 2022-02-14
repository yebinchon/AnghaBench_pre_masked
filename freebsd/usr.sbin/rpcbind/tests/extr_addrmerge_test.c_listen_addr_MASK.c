
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {scalar_t__ sa_family; int sa_len; int sa_data; } ;
struct TYPE_2__ {scalar_t__ sa_family; int sa_data; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int
FUNC_1(const struct sockaddr *VAR_2)
{
 int VAR_3;

 if (VAR_0 == 0)
  return (1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3]->sa_family != VAR_2->sa_family)
   continue;

  if (0 == FUNC_0(VAR_1[VAR_3]->sa_data, VAR_2->sa_data,
      VAR_2->sa_len))
   return (1);
 }
 return (0);
}
