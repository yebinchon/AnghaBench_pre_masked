
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;



__attribute__((used)) static int FUNC_0(off_t VAR_0, off_t VAR_1,
       enum object_type VAR_2,
       enum object_type VAR_3)
{
 int VAR_4 = VAR_2 - VAR_3;
 if (VAR_4)
  return VAR_4;
 return VAR_0 < VAR_1 ? -1 :
        VAR_0 > VAR_1 ? 1 :
        0;
}
