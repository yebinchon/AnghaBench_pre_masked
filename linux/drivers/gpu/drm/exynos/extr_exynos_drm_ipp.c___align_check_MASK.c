
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static inline bool FUNC_1(unsigned int VAR_0, unsigned int VAR_1)
{
 if (VAR_1 && (VAR_0 & (VAR_1 - 1))) {
  FUNC_0("Value %d exceeds HW limits (align %d)\n",
     VAR_0, VAR_1);
  return 0;
 }
 return 1;
}
