
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* attributes; int apply; int shutdown; int version; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;

git_filter *FUNC_2(void)
{
 git_filter *VAR_3 = FUNC_1(1, sizeof(git_filter));
 FUNC_0(VAR_3);

 VAR_3->version = VAR_0;
 VAR_3->attributes = "+bitflip";
 VAR_3->shutdown = VAR_2;
 VAR_3->apply = VAR_1;

 return VAR_3;
}
