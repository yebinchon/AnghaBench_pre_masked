
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int dummy; } ;
struct patch_util {int shown; scalar_t__ matching; } ;
struct diff_options {int output_format; } ;
struct TYPE_2__ {int string; struct patch_util* util; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct diff_options*,int,struct strbuf*,struct strbuf*,struct patch_util*,struct patch_util*) ;
 int FUNC_2 (int ,int ,struct diff_options*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static void FUNC_4(struct string_list *VAR_2, struct string_list *VAR_3,
     struct diff_options *VAR_4)
{
 struct strbuf VAR_5 = VAR_1, VAR_6 = VAR_1;
 int VAR_7 = FUNC_0(1 + (VAR_2->nr > VAR_3->nr ? VAR_2->nr : VAR_3->nr));
 int VAR_8 = 0, VAR_9 = 0;
 while (VAR_8 < VAR_2->nr || VAR_9 < VAR_3->nr) {
  struct patch_util *VAR_10, *VAR_11;
  VAR_10 = VAR_8 < VAR_2->nr ? VAR_2->items[VAR_8].util : ((void*)0);
  VAR_11 = VAR_9 < VAR_3->nr ? VAR_3->items[VAR_9].util : ((void*)0);


  while (VAR_8 < VAR_2->nr && VAR_10->shown)
   VAR_10 = ++VAR_8 < VAR_2->nr ? VAR_2->items[VAR_8].util : ((void*)0);


  if (VAR_8 < VAR_2->nr && VAR_10->matching < 0) {
   FUNC_1(VAR_4, VAR_7,
        &VAR_5, &VAR_6, VAR_10, ((void*)0));
   VAR_8++;
   continue;
  }


  while (VAR_9 < VAR_3->nr && VAR_11->matching < 0) {
   FUNC_1(VAR_4, VAR_7,
        &VAR_5, &VAR_6, ((void*)0), VAR_11);
   VAR_11 = ++VAR_9 < VAR_3->nr ? VAR_3->items[VAR_9].util : ((void*)0);
  }


  if (VAR_9 < VAR_3->nr) {
   VAR_10 = VAR_2->items[VAR_11->matching].util;
   FUNC_1(VAR_4, VAR_7,
        &VAR_5, &VAR_6, VAR_10, VAR_11);
   if (!(VAR_4->output_format & VAR_0))
    FUNC_2(VAR_2->items[VAR_11->matching].string,
        VAR_3->items[VAR_9].string, VAR_4);
   VAR_10->shown = 1;
   VAR_9++;
  }
 }
 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);
}
