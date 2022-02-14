
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static bool_t
FUNC_3(XDR *VAR_1, long *VAR_2)
{
 int32_t *VAR_3;
 int32_t VAR_4;

 VAR_3 = FUNC_2(VAR_1, sizeof(int32_t));
 if (VAR_3) {
  VAR_4 = *VAR_3;
 } else {
  FUNC_1(VAR_1, (char *) &VAR_4, sizeof(int32_t));
 }

 *VAR_2 = FUNC_0(VAR_4);
 return (VAR_0);
}
