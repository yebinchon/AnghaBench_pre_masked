
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* attributes; int stream; int version; } ;
typedef TYPE_1__ git_filter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int,int) ;

git_filter *FUNC_2(void)
{
 git_filter *VAR_2 = FUNC_1(1, sizeof(git_filter));
 FUNC_0(VAR_2);

 VAR_2->version = VAR_0;
 VAR_2->attributes = "+compress";
 VAR_2->stream = VAR_1;

 return VAR_2;
}
