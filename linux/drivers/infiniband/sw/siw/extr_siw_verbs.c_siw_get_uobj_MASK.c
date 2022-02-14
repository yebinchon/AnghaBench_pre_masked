
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct siw_uobj {scalar_t__ size; } ;
struct siw_ucontext {int xa; } ;


 struct siw_uobj* FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static struct siw_uobj *FUNC_1(struct siw_ucontext *VAR_0,
         unsigned long VAR_1, u32 VAR_2)
{
 struct siw_uobj *VAR_3 = FUNC_0(&VAR_0->xa, VAR_1);

 if (VAR_3 && VAR_3->size == VAR_2)
  return VAR_3;

 return ((void*)0);
}
