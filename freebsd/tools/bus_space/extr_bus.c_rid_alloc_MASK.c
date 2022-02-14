
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_1(void)
{
 void *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4].fd == -1)
   break;
 }
 if (VAR_4 == VAR_1) {
  VAR_1++;
  VAR_3 = FUNC_0(VAR_2, sizeof(struct resource) * VAR_1);
  if (VAR_3 == ((void*)0)) {
   VAR_1--;
   return (-1);
  } else
   VAR_2 = VAR_3;
 }
 VAR_2[VAR_4].fd = VAR_0;
 return (VAR_4);
}
