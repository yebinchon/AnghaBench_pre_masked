
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request*) ;

__attribute__((used)) static inline bool FUNC_2(struct request *VAR_1)
{
 if (FUNC_1(VAR_1) == VAR_0 &&
     FUNC_0(VAR_1->q) > 1)
  return 1;
 return 0;
}
