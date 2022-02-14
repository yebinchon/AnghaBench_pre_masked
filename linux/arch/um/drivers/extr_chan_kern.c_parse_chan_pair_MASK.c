
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct line {struct chan* chan_out; struct chan* chan_in; struct list_head chan_list; } ;
struct chan_opts {int dummy; } ;
struct chan {int input; int output; int list; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct list_head*) ;
 struct chan* FUNC_4 (struct line*,char*,int,struct chan_opts const*,char**) ;
 char* FUNC_5 (char*,char) ;

int FUNC_6(char *VAR_0, struct line *VAR_1, int VAR_2,
      const struct chan_opts *VAR_3, char **VAR_4)
{
 struct list_head *VAR_5 = &VAR_1->chan_list;
 struct chan *VAR_6;
 char *VAR_7, *VAR_8;

 if (!FUNC_3(VAR_5)) {
  VAR_1->chan_in = VAR_1->chan_out = ((void*)0);
  FUNC_1(VAR_5);
  FUNC_0(VAR_5);
 }

 if (!VAR_0)
  return 0;

 VAR_8 = FUNC_5(VAR_0, ',');
 if (VAR_8 != ((void*)0)) {
  VAR_7 = VAR_0;
  *VAR_8 = '\0';
  VAR_8++;
  VAR_6 = FUNC_4(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4);
  if (VAR_6 == ((void*)0))
   return -1;

  VAR_6->input = 1;
  FUNC_2(&VAR_6->list, VAR_5);
  VAR_1->chan_in = VAR_6;

  VAR_6 = FUNC_4(VAR_1, VAR_8, VAR_2, VAR_3, VAR_4);
  if (VAR_6 == ((void*)0))
   return -1;

  FUNC_2(&VAR_6->list, VAR_5);
  VAR_6->output = 1;
  VAR_1->chan_out = VAR_6;
 }
 else {
  VAR_6 = FUNC_4(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
  if (VAR_6 == ((void*)0))
   return -1;

  FUNC_2(&VAR_6->list, VAR_5);
  VAR_6->input = 1;
  VAR_6->output = 1;
  VAR_1->chan_in = VAR_1->chan_out = VAR_6;
 }
 return 0;
}
