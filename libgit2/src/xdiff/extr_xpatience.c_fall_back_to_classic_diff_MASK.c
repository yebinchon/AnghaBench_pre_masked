
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ xpparam_t ;
struct hashmap {int env; TYPE_1__* xpp; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hashmap *VAR_1,
  int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 xpparam_t VAR_6;
 VAR_6.flags = VAR_1->xpp->flags & ~VAR_0;

 return FUNC_0(VAR_1->env, &VAR_6,
      VAR_2, VAR_3, VAR_4, VAR_5);
}
