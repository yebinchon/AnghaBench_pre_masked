
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct memtype {scalar_t__ start; scalar_t__ end; scalar_t__ subtree_max_end; int rb; } ;


 int VAR_0 ;
 struct memtype* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct memtype*) ;
 struct memtype* FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int *) ;

struct memtype *FUNC_4(u64 VAR_5, u64 VAR_6)
{
 struct memtype *VAR_7;
 VAR_7 = FUNC_2(&VAR_4, VAR_5, VAR_6,
    VAR_2);
 if (!VAR_7) {
  VAR_7 = FUNC_2(&VAR_4, VAR_5, VAR_6,
     VAR_1);
  if (!VAR_7)
   return FUNC_0(-VAR_0);
 }

 if (VAR_7->start == VAR_5) {

  FUNC_3(&VAR_7->rb, &VAR_4,
     &VAR_3);
 } else {

  FUNC_3(&VAR_7->rb, &VAR_4,
     &VAR_3);
  VAR_7->end = VAR_5;
  VAR_7->subtree_max_end = VAR_7->end;
  FUNC_1(&VAR_4, VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
