
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;


 int FUNC_0 (int *,struct in_addr*,struct in_addr*,int) ;
 struct in_addr FUNC_1 (struct libalias*,struct in_addr) ;
 int FUNC_2 (struct libalias*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct libalias *VAR_1, struct in_addr *VAR_2, u_short *VAR_3)
{
 struct in_addr VAR_4;

 FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1, *VAR_2);
 FUNC_0(VAR_3,
     &VAR_4, VAR_2, 2);
 *VAR_2 = VAR_4;

 return (VAR_0);
}
