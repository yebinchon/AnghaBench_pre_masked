
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_0)
{
 return VAR_0 >= 2048 &&
  (FUNC_0(VAR_0) || VAR_0 == 8192 || VAR_0 == 10240);
}
