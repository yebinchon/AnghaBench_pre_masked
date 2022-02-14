
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* attributes; int apply; int shutdown; int version; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;

git_filter *FUNC_1(void)
{
 git_filter *VAR_3 = FUNC_0(1, sizeof(git_filter));
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->version = VAR_0;
 VAR_3->attributes = "+ident";
 VAR_3->shutdown = VAR_1;
 VAR_3->apply = VAR_2;

 return VAR_3;
}
