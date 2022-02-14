
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
typedef enum elv_merge { ____Placeholder_elv_merge } elv_merge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static enum elv_merge FUNC_3(struct request *VAR_3,
     struct request *VAR_4)
{
 if (FUNC_0(VAR_3))
  return VAR_1;
 else if (FUNC_1(VAR_3) + FUNC_2(VAR_3) == FUNC_1(VAR_4))
  return VAR_0;

 return VAR_2;
}
