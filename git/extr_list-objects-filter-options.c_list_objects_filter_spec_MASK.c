
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_6__ {int nr; TYPE_1__* items; } ;
struct list_objects_filter_options {TYPE_2__ filter_spec; } ;
struct TYPE_5__ {char const* string; } ;


 int FUNC_0 (char*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (struct strbuf*,char*,TYPE_2__*) ;
 int FUNC_2 (struct strbuf*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

const char *FUNC_5(struct list_objects_filter_options *VAR_1)
{
 if (!VAR_1->filter_spec.nr)
  FUNC_0("no filter_spec available for this filter");
 if (VAR_1->filter_spec.nr != 1) {
  struct strbuf VAR_2 = VAR_0;
  FUNC_1(
   &VAR_2, "", &VAR_1->filter_spec);
  FUNC_4(&VAR_1->filter_spec, 0);
  FUNC_3(
   &VAR_1->filter_spec, FUNC_2(&VAR_2, ((void*)0)));
 }

 return VAR_1->filter_spec.items[0].string;
}
