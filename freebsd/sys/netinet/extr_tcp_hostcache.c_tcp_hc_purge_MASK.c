
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnet {int dummy; } ;
struct TYPE_2__ {int prune; scalar_t__ purgeall; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct vnet*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,int,void (*) (void*),void*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 FUNC_1((struct vnet *) VAR_3);
 int VAR_4 = 0;

 if (VAR_1.purgeall) {
  VAR_4 = 1;
  VAR_1.purgeall = 0;
 }

 FUNC_3(VAR_4);

 FUNC_2(&VAR_0, VAR_1.prune * VAR_2,
     FUNC_4, VAR_3);
 FUNC_0();
}
