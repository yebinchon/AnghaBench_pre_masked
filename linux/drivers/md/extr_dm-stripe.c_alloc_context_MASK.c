
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_c {int dummy; } ;
struct stripe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,unsigned int) ;
 struct stripe_c* FUNC_1 (size_t,int ) ;

__attribute__((used)) static inline struct stripe_c *FUNC_2(unsigned int VAR_1)
{
 size_t VAR_2;

 if (FUNC_0(sizeof(struct stripe_c), sizeof(struct stripe),
        VAR_1))
  return ((void*)0);

 VAR_2 = sizeof(struct stripe_c) + (sizeof(struct stripe) * VAR_1);

 return FUNC_1(VAR_2, VAR_0);
}
