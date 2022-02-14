
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int t ;
typedef scalar_t__ caddr_t ;
typedef int BF_LONG ;
typedef int BF_KEY ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(caddr_t VAR_0, u_int8_t *VAR_1)
{
 BF_LONG VAR_2[2];

 FUNC_2(VAR_2, VAR_1, sizeof (VAR_2));
 VAR_2[0] = FUNC_3(VAR_2[0]);
 VAR_2[1] = FUNC_3(VAR_2[1]);

 FUNC_0(VAR_2, (BF_KEY *) VAR_0);
 VAR_2[0] = FUNC_1(VAR_2[0]);
 VAR_2[1] = FUNC_1(VAR_2[1]);
 FUNC_2(VAR_1, VAR_2, sizeof (VAR_2));
}
