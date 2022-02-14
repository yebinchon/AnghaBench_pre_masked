
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct capi20_appl {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 struct capi20_appl* FUNC_0 (int ) ;

__attribute__((used)) static inline struct capi20_appl *FUNC_1(u16 VAR_2)
{
 if (VAR_2 < 1 || VAR_2 - 1 >= VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_1[VAR_2 - 1]);
}
