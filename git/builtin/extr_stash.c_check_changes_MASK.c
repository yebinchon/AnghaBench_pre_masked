
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pathspec {int dummy; } ;


 scalar_t__ FUNC_0 (struct pathspec const*) ;
 scalar_t__ FUNC_1 (struct pathspec const*,int,struct strbuf*) ;

__attribute__((used)) static int FUNC_2(const struct pathspec *VAR_0, int VAR_1,
    struct strbuf *VAR_2)
{
 int VAR_3 = 0;
 if (FUNC_0(VAR_0))
  VAR_3 = 1;

 if (VAR_1 && FUNC_1(VAR_0, VAR_1,
           VAR_2))
  VAR_3 = 1;

 return VAR_3;
}
