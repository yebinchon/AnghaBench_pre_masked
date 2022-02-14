
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void *FUNC_1(loff_t *VAR_2)
{
 if (*VAR_2)
  *VAR_2 = FUNC_0(*VAR_2 - 1, VAR_0);
 return *VAR_2 < VAR_1 ? (void *)*VAR_2 + 1 : ((void*)0);
}
