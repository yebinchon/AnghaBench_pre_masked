
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline size_t FUNC_1(off_t VAR_0)
{
 size_t VAR_1 = (size_t) VAR_0;

 if (VAR_0 != (off_t) VAR_1)
  FUNC_0("Cannot handle files this big");
 return VAR_1;
}
