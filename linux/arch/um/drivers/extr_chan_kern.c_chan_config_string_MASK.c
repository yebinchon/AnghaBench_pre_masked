
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {struct chan* chan_out; struct chan* chan_in; } ;
struct chan {int primary; } ;


 int FUNC_0 (struct chan*,struct chan*,char*,int,char**) ;

int FUNC_1(struct line *VAR_0, char *VAR_1, int VAR_2,
         char **VAR_3)
{
 struct chan *VAR_4 = VAR_0->chan_in, *VAR_5 = VAR_0->chan_out;

 if (VAR_4 && !VAR_4->primary)
  VAR_4 = ((void*)0);
 if (VAR_5 && !VAR_5->primary)
  VAR_5 = ((void*)0);

 return FUNC_0(VAR_4, VAR_5, VAR_1, VAR_2, VAR_3);
}
