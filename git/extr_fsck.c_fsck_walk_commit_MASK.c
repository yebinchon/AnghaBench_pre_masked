
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {int dummy; } ;
struct fsck_options {int (* walk ) (struct object*,int ,void*,struct fsck_options*) ;} ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct commit {struct commit_list* parents; int object; } ;
struct TYPE_4__ {struct object object; } ;
struct TYPE_3__ {struct object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct commit*) ;
 char* FUNC_1 (struct fsck_options*,int *) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (struct commit*) ;
 int FUNC_4 (struct fsck_options*,struct object*,char*,...) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct object*,int ,void*,struct fsck_options*) ;
 int FUNC_7 (struct object*,int ,void*,struct fsck_options*) ;

__attribute__((used)) static int FUNC_8(struct commit *VAR_2, void *VAR_3, struct fsck_options *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 struct commit_list *VAR_8;
 int VAR_9;
 int VAR_10;
 const char *VAR_11;

 if (FUNC_3(VAR_2))
  return -1;

 VAR_11 = FUNC_1(VAR_4, &VAR_2->object);
 if (VAR_11)
  FUNC_4(VAR_4, &FUNC_0(VAR_2)->object,
    "%s:", VAR_11);

 VAR_10 = VAR_4->walk((struct object *)FUNC_0(VAR_2),
          VAR_1, VAR_3, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 = VAR_10;

 VAR_8 = VAR_2->parents;
 if (VAR_11 && VAR_8) {
  int VAR_12 = FUNC_5(VAR_11), VAR_13;

  if (VAR_12 && VAR_11[VAR_12 - 1] == '^') {
   VAR_6 = 1;
   VAR_7 = VAR_12 - 1;
  }
  else {
   for (VAR_6 = 0, VAR_13 = 1;
        VAR_12 && FUNC_2(VAR_11[VAR_12 - 1]);
        VAR_13 *= 10)
    VAR_6 += VAR_13 * (VAR_11[--VAR_12] - '0');
   if (VAR_13 > 1 && VAR_12 && VAR_11[VAR_12 - 1] == '~')
    VAR_7 = VAR_12 - 1;
  }
 }

 while (VAR_8) {
  if (VAR_11) {
   struct object *VAR_14 = &VAR_8->item->object;

   if (VAR_5++)
    FUNC_4(VAR_4, VAR_14, "%s^%d",
     VAR_11, VAR_5);
   else if (VAR_6 > 0)
    FUNC_4(VAR_4, VAR_14, "%.*s~%d",
     VAR_7, VAR_11, VAR_6 + 1);
   else
    FUNC_4(VAR_4, VAR_14, "%s^", VAR_11);
  }
  VAR_10 = VAR_4->walk((struct object *)VAR_8->item, VAR_0, VAR_3, VAR_4);
  if (VAR_10 < 0)
   return VAR_10;
  if (!VAR_9)
   VAR_9 = VAR_10;
  VAR_8 = VAR_8->next;
 }
 return VAR_9;
}
