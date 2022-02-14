
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* attributes; int shutdown; int stream; int version; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int,int) ;

git_filter *FUNC_2(const char *VAR_3)
{
 git_filter *VAR_4 = FUNC_1(1, sizeof(git_filter));
 FUNC_0(VAR_4);

 VAR_4->version = VAR_0;
 VAR_4->attributes = VAR_3;
 VAR_4->stream = VAR_2;
 VAR_4->shutdown = VAR_1;

 return VAR_4;
}
