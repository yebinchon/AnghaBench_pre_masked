
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_index {int dummy; } ;


 void* FUNC_0 (struct delta_index*,void const*,unsigned long,unsigned long*,unsigned long) ;
 struct delta_index* FUNC_1 (void const*,unsigned long) ;
 int FUNC_2 (struct delta_index*) ;

__attribute__((used)) static inline void *
FUNC_3(const void *VAR_0, unsigned long VAR_1,
    const void *VAR_2, unsigned long VAR_3,
    unsigned long *VAR_4, unsigned long VAR_5)
{
 struct delta_index *VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (VAR_6) {
  void *VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3,
        VAR_4, VAR_5);
  FUNC_2(VAR_6);
  return VAR_7;
 }
 return ((void*)0);
}
