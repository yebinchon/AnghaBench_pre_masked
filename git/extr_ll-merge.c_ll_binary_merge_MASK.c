
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ll_merge_options {int variant; scalar_t__ virtual_ancestor; } ;
struct ll_merge_driver {int dummy; } ;
struct TYPE_7__ {int * ptr; int size; } ;
typedef TYPE_1__ mmfile_t ;
struct TYPE_8__ {int size; int * ptr; } ;
typedef TYPE_2__ mmbuffer_t ;




 int FUNC_0 (struct ll_merge_options const*) ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct ll_merge_driver *VAR_0,
      mmbuffer_t *VAR_1,
      const char *VAR_2,
      mmfile_t *VAR_3, const char *VAR_4,
      mmfile_t *VAR_5, const char *VAR_6,
      mmfile_t *VAR_7, const char *VAR_8,
      const struct ll_merge_options *VAR_9,
      int VAR_10)
{
 mmfile_t *VAR_11;
 FUNC_0(VAR_9);






 if (VAR_9->virtual_ancestor) {
  VAR_11 = VAR_3;
 } else {
  switch (VAR_9->variant) {
  default:
   FUNC_1("Cannot merge binary files: %s (%s vs. %s)",
    VAR_2, VAR_6, VAR_8);

  case 129:
   VAR_11 = VAR_5;
   break;
  case 128:
   VAR_11 = VAR_7;
   break;
  }
 }

 VAR_1->ptr = VAR_11->ptr;
 VAR_1->size = VAR_11->size;
 VAR_11->ptr = ((void*)0);





 return (VAR_9->variant ? 0 : 1);
}
