
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,unsigned long*,int) ;
 int FUNC_3 (int,unsigned long*,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int,int ,...) ;
 int FUNC_7 (int,unsigned long) ;
 int FUNC_8 (unsigned long*) ;

__attribute__((used)) static void
FUNC_9(int VAR_8)
{
 unsigned long VAR_9[2];
 cap_rights_t VAR_10;

 VAR_9[0] = VAR_3;
 FUNC_1(FUNC_3(VAR_8, VAR_9, 1) == 0);
 VAR_9[0] = VAR_9[1] = 0;
 FUNC_1(FUNC_2(VAR_8, VAR_9, FUNC_8(VAR_9)) == 1);
 FUNC_1(VAR_9[0] == VAR_3);
 FUNC_1(VAR_9[1] == 0);

 FUNC_0(&VAR_10);
 FUNC_4(&VAR_10, VAR_0);

 FUNC_1(FUNC_5(VAR_8, &VAR_10) == 0);
 FUNC_1(FUNC_2(VAR_8, VAR_9, FUNC_8(VAR_9)) == 0);

 VAR_9[0] = VAR_3;
 VAR_9[1] = VAR_4;
 VAR_7 = 0;
 FUNC_1(FUNC_3(VAR_8, VAR_9, FUNC_8(VAR_9)) == -1);
 FUNC_1(VAR_7 == VAR_1);
 FUNC_1(FUNC_2(VAR_8, VAR_9, FUNC_8(VAR_9)) == 0);
 VAR_9[0] = VAR_3;
 VAR_7 = 0;
 FUNC_1(FUNC_3(VAR_8, VAR_9, 1) == -1);
 FUNC_1(VAR_7 == VAR_1);
 FUNC_1(FUNC_2(VAR_8, VAR_9, FUNC_8(VAR_9)) == 0);

 FUNC_1(FUNC_6(VAR_8, VAR_5) == 0);
 VAR_7 = 0;
 FUNC_1(FUNC_7(VAR_8, VAR_3) == -1);
 FUNC_1(VAR_7 == VAR_1);
 FUNC_1(FUNC_6(VAR_8, VAR_5) == 0);
 FUNC_1(FUNC_6(VAR_8, VAR_6, VAR_2) == 0);
 FUNC_1(FUNC_6(VAR_8, VAR_5) == VAR_2);
 VAR_7 = 0;
 FUNC_1(FUNC_7(VAR_8, VAR_4) == -1);
 FUNC_1(VAR_7 == VAR_1);
 FUNC_1(FUNC_6(VAR_8, VAR_5) == VAR_2);
 FUNC_1(FUNC_6(VAR_8, VAR_6, 0) == 0);
 FUNC_1(FUNC_6(VAR_8, VAR_5) == 0);
}
