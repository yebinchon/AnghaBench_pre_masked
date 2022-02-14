
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int src; int dst; int pattern; } ;
typedef TYPE_1__ git_refspec ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (TYPE_1__ const*,char const*) ;
 int FUNC_5 (int *,int ,int ,char const*) ;

int FUNC_6(git_buf *VAR_1, const git_refspec *VAR_2, const char *VAR_3)
{
 FUNC_0(VAR_1 && VAR_2 && VAR_3);
 FUNC_2(VAR_1);

 if (!FUNC_4(VAR_2, VAR_3)) {
  FUNC_3(VAR_0, "ref '%s' doesn't match the destination", VAR_3);
  return -1;
 }

 if (!VAR_2->pattern)
  return FUNC_1(VAR_1, VAR_2->src);

 return FUNC_5(VAR_1, VAR_2->dst, VAR_2->src, VAR_3);
}
