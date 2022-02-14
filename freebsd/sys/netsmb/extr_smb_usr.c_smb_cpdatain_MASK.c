
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbchain {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbchain*) ;
 int FUNC_1 (struct mbchain*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct mbchain *VAR_1, int VAR_2, caddr_t VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0)
  return 0;
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;
 return FUNC_1(VAR_1, VAR_3, VAR_2, VAR_0);
}
