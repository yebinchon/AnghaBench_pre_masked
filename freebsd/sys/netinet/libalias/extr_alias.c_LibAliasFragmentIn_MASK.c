
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int dummy; } ;
struct ip {int ip_dst; int ip_sum; } ;


 int FUNC_0 (int *,int *,int *,int) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*) ;

void
FUNC_3(struct libalias *VAR_0, char *VAR_1,


    char *VAR_2

)
{
 struct ip *VAR_3;
 struct ip *VAR_4;

 FUNC_1(VAR_0);
 (void)VAR_0;
 VAR_3 = (struct ip *)VAR_1;
 VAR_4 = (struct ip *)VAR_2;

 FUNC_0(&VAR_4->ip_sum,
     &VAR_3->ip_dst, &VAR_4->ip_dst, 2);
 VAR_4->ip_dst = VAR_3->ip_dst;
 FUNC_2(VAR_0);
}
