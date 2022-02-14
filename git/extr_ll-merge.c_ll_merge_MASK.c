
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ll_merge_options {scalar_t__ extra_marker_size; scalar_t__ virtual_ancestor; scalar_t__ renormalize; } ;
struct ll_merge_driver {char const* recursive; int (* fn ) (struct ll_merge_driver const*,int *,char const*,int *,char const*,int *,char const*,int *,char const*,struct ll_merge_options const*,int) ;} ;
struct index_state {int dummy; } ;
struct attr_check {TYPE_1__* items; } ;
typedef int mmfile_t ;
typedef int mmbuffer_t ;
struct TYPE_2__ {char* value; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ll_merge_driver* FUNC_1 (char const*) ;
 int FUNC_2 (struct index_state*,char const*,struct attr_check*) ;
 struct attr_check* FUNC_3 () ;
 int FUNC_4 (int *,char const*,struct index_state*) ;
 int FUNC_5 (struct ll_merge_driver const*,int *,char const*,int *,char const*,int *,char const*,int *,char const*,struct ll_merge_options const*,int) ;

int FUNC_6(mmbuffer_t *VAR_1,
      const char *VAR_2,
      mmfile_t *VAR_3, const char *VAR_4,
      mmfile_t *VAR_5, const char *VAR_6,
      mmfile_t *VAR_7, const char *VAR_8,
      struct index_state *VAR_9,
      const struct ll_merge_options *VAR_10)
{
 struct attr_check *VAR_11 = FUNC_3();
 static const struct ll_merge_options VAR_12;
 const char *VAR_13 = ((void*)0);
 int VAR_14 = VAR_0;
 const struct ll_merge_driver *VAR_15;

 if (!VAR_10)
  VAR_10 = &VAR_12;

 if (VAR_10->renormalize) {
  FUNC_4(VAR_3, VAR_2, VAR_9);
  FUNC_4(VAR_5, VAR_2, VAR_9);
  FUNC_4(VAR_7, VAR_2, VAR_9);
 }

 FUNC_2(VAR_9, VAR_2, VAR_11);
 VAR_13 = VAR_11->items[0].value;
 if (VAR_11->items[1].value) {
  VAR_14 = FUNC_0(VAR_11->items[1].value);
  if (VAR_14 <= 0)
   VAR_14 = VAR_0;
 }
 VAR_15 = FUNC_1(VAR_13);

 if (VAR_10->virtual_ancestor) {
  if (VAR_15->recursive)
   VAR_15 = FUNC_1(VAR_15->recursive);
 }
 if (VAR_10->extra_marker_size) {
  VAR_14 += VAR_10->extra_marker_size;
 }
 return VAR_15->fn(VAR_15, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_10, VAR_14);
}
