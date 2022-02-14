
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* attributes; int shutdown; int cleanup; int apply; int check; int version; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static git_filter *FUNC_2(void)
{
 git_filter *VAR_5 = FUNC_1(1, sizeof(git_filter));
 FUNC_0(VAR_5);

 VAR_5->version = VAR_0;
 VAR_5->attributes = "filter=*";
 VAR_5->check = VAR_2;
 VAR_5->apply = VAR_1;
 VAR_5->cleanup = VAR_3;
 VAR_5->shutdown = VAR_4;

 return VAR_5;
}
