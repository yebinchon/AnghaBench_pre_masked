
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline int FUNC_1(int VAR_3, bool VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  return VAR_3;

 if (VAR_4)
  VAR_5 = VAR_2[VAR_3];
 else
  VAR_5 = VAR_1[VAR_3];

 if (VAR_5)
  return VAR_5;

 if (!FUNC_0(VAR_0))
  VAR_5 = VAR_3;
 else
  VAR_5 = VAR_3 << 1;

 if (VAR_4)
  VAR_2[VAR_3] = VAR_5;
 else
  VAR_1[VAR_3] = VAR_5;

 return VAR_5;
}
