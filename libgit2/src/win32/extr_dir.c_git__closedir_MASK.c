
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ h; } ;
typedef TYPE_1__ git__DIR ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(git__DIR *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (VAR_1->h != VAR_0) {
  FUNC_0(VAR_1->h);
  VAR_1->h = VAR_0;
 }

 FUNC_1(VAR_1);
 return 0;
}
