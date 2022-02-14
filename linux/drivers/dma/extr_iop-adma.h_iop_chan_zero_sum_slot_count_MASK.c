
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (size_t,int,int*) ;

__attribute__((used)) static inline int FUNC_1(size_t VAR_1, int VAR_2,
      int *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_1 <= VAR_0)
  return VAR_4;

 VAR_1 -= VAR_0;
 while (VAR_1 > VAR_0) {
  VAR_1 -= VAR_0;
  VAR_4 += *VAR_3;
 }

 VAR_4 += *VAR_3;

 return VAR_4;
}
