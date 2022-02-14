
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct git_graph {int width; } ;


 int FUNC_0 (struct strbuf*,char,int) ;

__attribute__((used)) static void FUNC_1(struct git_graph *VAR_0, struct strbuf *VAR_1,
       int VAR_2)
{







 if (VAR_2 < VAR_0->width)
  FUNC_0(VAR_1, ' ', VAR_0->width - VAR_2);
}
