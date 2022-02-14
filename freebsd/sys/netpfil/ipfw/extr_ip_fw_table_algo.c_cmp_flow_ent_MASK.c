
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct fhashentry {int next; } ;


 scalar_t__ FUNC_0 (struct fhashentry*,struct fhashentry*,size_t) ;

__attribute__((used)) static __inline int
FUNC_1(struct fhashentry *VAR_0, struct fhashentry *VAR_1, size_t VAR_2)
{
 uint64_t *VAR_3, *VAR_4;

 VAR_3 = (uint64_t *)(&VAR_0->next + 1);
 VAR_4 = (uint64_t *)(&VAR_1->next + 1);

 if (*VAR_3 == *VAR_4 && (FUNC_0(VAR_0 + 1, VAR_1 + 1, VAR_2) == 0))
  return (1);

 return (0);
}
