
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,size_t,void const*,size_t) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, size_t VAR_1, unsigned VAR_2, const void *VAR_3,
         size_t VAR_4, unsigned VAR_5)
{
 int VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);

 if (VAR_6)
  return VAR_6;
 if (VAR_2 > VAR_5)
  return 1;
 if (VAR_5 > VAR_2)
  return -1;
 return 0;
}
