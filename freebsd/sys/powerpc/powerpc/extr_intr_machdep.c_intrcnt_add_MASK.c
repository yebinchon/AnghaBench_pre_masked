
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,int) ;
 int VAR_2 ;

void
FUNC_3(const char *VAR_3, u_long **VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_1, 1);
 FUNC_0(VAR_5 < VAR_2, ("intrcnt_add: Interrupt counter index %d/%d"
  "reached nintrcnt : %d", VAR_1, VAR_5, VAR_2));
 *VAR_4 = &VAR_0[VAR_5];
 FUNC_2(VAR_3, VAR_5);
}
