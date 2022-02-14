
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int recursing; int written; struct TYPE_4__* delta; } ;
typedef TYPE_1__ git_pobject ;
typedef int git_packbuilder ;
typedef enum write_one_status { ____Placeholder_write_one_status } write_one_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int (*) (void*,size_t,void*),void*) ;

__attribute__((used)) static int FUNC_1(
 enum write_one_status *VAR_3,
 git_packbuilder *VAR_4,
 git_pobject *VAR_5,
 int (*VAR_6)(void *VAR_7, size_t VAR_8, void *VAR_9),
 void *VAR_10)
{
 int VAR_11;

 if (VAR_5->recursing) {
  *VAR_3 = VAR_0;
  return 0;
 } else if (VAR_5->written) {
  *VAR_3 = VAR_1;
  return 0;
 }

 if (VAR_5->delta) {
  VAR_5->recursing = 1;

  if ((VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5->delta, VAR_6, VAR_10)) < 0)
   return VAR_11;


  if (*VAR_3 == VAR_0)
   VAR_5->delta = ((void*)0);
 }

 *VAR_3 = VAR_2;
 VAR_5->written = 1;
 VAR_5->recursing = 0;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_10);
}
