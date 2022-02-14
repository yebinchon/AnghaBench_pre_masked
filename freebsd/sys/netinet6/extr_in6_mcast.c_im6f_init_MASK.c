
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_mfilter {int* im6f_st; int im6f_sources; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct in6_mfilter*,int ,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct in6_mfilter *VAR_0, const int VAR_1, const int VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(struct in6_mfilter));
 FUNC_0(&VAR_0->im6f_sources);
 VAR_0->im6f_st[0] = VAR_1;
 VAR_0->im6f_st[1] = VAR_2;
}
