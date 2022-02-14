
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int * sopt_td; } ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static inline int
FUNC_2(struct sockopt *VAR_0, void *VAR_1, void *VAR_2, size_t VAR_3)
{

 if (VAR_0->sopt_td != ((void*)0))
  return (FUNC_1(VAR_1, VAR_2, VAR_3));
 FUNC_0(VAR_1, VAR_2, VAR_3);
 return (0);
}
