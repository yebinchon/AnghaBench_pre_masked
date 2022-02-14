
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr; } ;
struct remote {TYPE_1__ push; } ;
struct branch {char const** merge_name; int refname; scalar_t__ merge_nr; } ;


 char* FUNC_0 (TYPE_1__*,int ) ;
 char* FUNC_1 (struct branch*,int *) ;
 struct remote* FUNC_2 (char const*) ;

const char *FUNC_3(struct branch *VAR_0, int VAR_1,
      int *VAR_2)
{
 if (VAR_0) {
  if (!VAR_1) {
   if (VAR_0->merge_nr) {
    if (VAR_2)
     *VAR_2 = 1;
    return VAR_0->merge_name[0];
   }
  } else {
   const char *VAR_3, *VAR_4 =
    FUNC_1(VAR_0, ((void*)0));
   struct remote *VAR_5 = FUNC_2(VAR_4);

   if (VAR_5 && VAR_5->push.nr &&
       (VAR_3 = FUNC_0(&VAR_5->push,
        VAR_0->refname))) {
    if (VAR_2)
     *VAR_2 = 1;
    return VAR_3;
   }
  }
 }
 if (VAR_2)
  *VAR_2 = 0;
 return "";
}
