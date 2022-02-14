
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {unsigned int timestamp; int lock; int system_mtx; scalar_t__ system_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char const*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 () ;

int
FUNC_6(vm_map_t VAR_1, const char *VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_1->system_map) {
  FUNC_0(&VAR_1->system_mtx, VAR_0, VAR_2, VAR_3);
 } else {
  if (!FUNC_2(&VAR_1->lock, VAR_2, VAR_3)) {
   VAR_4 = VAR_1->timestamp;
   FUNC_1(&VAR_1->lock, VAR_2, VAR_3);
   FUNC_5();




   FUNC_3(&VAR_1->lock, VAR_2, VAR_3);
   if (VAR_4 != VAR_1->timestamp) {
    FUNC_4(&VAR_1->lock, VAR_2, VAR_3);
    return (1);
   }
  }
 }
 VAR_1->timestamp++;
 return (0);
}
