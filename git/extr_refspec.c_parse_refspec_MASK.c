
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {int force; int matching; int pattern; int exact_sha1; int * dst; int * src; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {size_t hexsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct object_id*) ;
 scalar_t__ FUNC_2 (char const*,char,size_t) ;
 scalar_t__ FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;
 TYPE_1__* VAR_2 ;
 void* FUNC_6 (char const*,size_t) ;

__attribute__((used)) static int FUNC_7(struct refspec_item *VAR_3, const char *VAR_4, int VAR_5)
{
 size_t VAR_6;
 int VAR_7;
 const char *VAR_8, *VAR_9;
 int VAR_10;

 VAR_7 = 0;

 VAR_8 = VAR_4;
 if (*VAR_8 == '+') {
  VAR_3->force = 1;
  VAR_8++;
 }

 VAR_9 = FUNC_5(VAR_8, ':');





 if (!VAR_5 && VAR_9 == VAR_8 && VAR_9[1] == '\0') {
  VAR_3->matching = 1;
  return 1;
 }

 if (VAR_9) {
  size_t VAR_11 = FUNC_4(++VAR_9);
  VAR_7 = (1 <= VAR_11 && FUNC_3(VAR_9, '*'));
  VAR_3->dst = FUNC_6(VAR_9, VAR_11);
 } else {
  VAR_3->dst = ((void*)0);
 }

 VAR_6 = (VAR_9 ? (VAR_9 - VAR_8 - 1) : FUNC_4(VAR_8));
 if (1 <= VAR_6 && FUNC_2(VAR_8, '*', VAR_6)) {
  if ((VAR_9 && !VAR_7) || (!VAR_9 && VAR_5))
   return 0;
  VAR_7 = 1;
 } else if (VAR_9 && VAR_7) {
  return 0;
 }

 VAR_3->pattern = VAR_7;
 VAR_3->src = FUNC_6(VAR_8, VAR_6);
 VAR_10 = VAR_0 | (VAR_7 ? VAR_1 : 0);

 if (VAR_5) {
  struct object_id VAR_12;


  if (!*VAR_3->src)
   ;
  else if (VAR_6 == VAR_2->hexsz && !FUNC_1(VAR_3->src, &VAR_12))
   VAR_3->exact_sha1 = 1;
  else if (!FUNC_0(VAR_3->src, VAR_10))
   ;
  else
   return 0;

  if (!VAR_3->dst)
   ;
  else if (!*VAR_3->dst)
   ;
  else if (!FUNC_0(VAR_3->dst, VAR_10))
   ;
  else
   return 0;
 } else {







  if (!*VAR_3->src)
   ;
  else if (VAR_7) {
   if (FUNC_0(VAR_3->src, VAR_10))
    return 0;
  }
  else
   ;







  if (!VAR_3->dst) {
   if (FUNC_0(VAR_3->src, VAR_10))
    return 0;
  } else if (!*VAR_3->dst) {
   return 0;
  } else {
   if (FUNC_0(VAR_3->dst, VAR_10))
    return 0;
  }
 }

 return 1;
}
