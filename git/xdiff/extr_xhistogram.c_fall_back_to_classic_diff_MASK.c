
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xdfenv_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(xpparam_t const *VAR_1, xdfenv_t *VAR_2,
  int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 xpparam_t VAR_7;
 VAR_7.flags = VAR_1->flags & ~VAR_0;

 return FUNC_0(VAR_2, &VAR_7,
      VAR_3, VAR_4, VAR_5, VAR_6);
}
