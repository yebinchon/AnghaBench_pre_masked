
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* src; char* dst; scalar_t__ force; } ;
typedef TYPE_1__ git_refspec ;
typedef int git_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*,char*) ;
 int FUNC_2 (int *,char) ;

int FUNC_3(git_buf *VAR_0, const git_refspec *VAR_1)
{
 if (VAR_1->force)
  FUNC_2(VAR_0, '+');

 FUNC_1(VAR_0, "%s:%s",
  VAR_1->src != ((void*)0) ? VAR_1->src : "",
  VAR_1->dst != ((void*)0) ? VAR_1->dst : "");

 return FUNC_0(VAR_0) == 0;
}
