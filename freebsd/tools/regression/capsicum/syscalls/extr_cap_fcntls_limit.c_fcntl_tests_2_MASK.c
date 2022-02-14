
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int cap_rights_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int,int ,...) ;

__attribute__((used)) static void
FUNC_7(int VAR_12)
{
 uint32_t VAR_13;
 cap_rights_t VAR_14;

 FUNC_0(&VAR_14);
 FUNC_4(&VAR_14, VAR_0);
 FUNC_1(FUNC_5(VAR_12, &VAR_14) == 0);

 VAR_13 = VAR_1;
 FUNC_1(FUNC_2(VAR_12, &VAR_13) == 0);
 FUNC_1(VAR_13 == 0);

 VAR_11 = 0;
 FUNC_1(FUNC_3(VAR_12, VAR_2 | VAR_3) == -1);
 FUNC_1(VAR_11 == VAR_4);
 VAR_13 = VAR_1;
 FUNC_1(FUNC_2(VAR_12, &VAR_13) == 0);
 FUNC_1(VAR_13 == 0);
 VAR_11 = 0;
 FUNC_1(FUNC_3(VAR_12, VAR_2) == -1);
 FUNC_1(VAR_11 == VAR_4);
 VAR_13 = VAR_1;
 FUNC_1(FUNC_2(VAR_12, &VAR_13) == 0);
 FUNC_1(VAR_13 == 0);

 FUNC_1(FUNC_6(VAR_12, VAR_6) == 0);
 FUNC_1(FUNC_6(VAR_12, VAR_8, VAR_5) == 0);
 FUNC_1(FUNC_6(VAR_12, VAR_6) == VAR_5);
 FUNC_1(FUNC_6(VAR_12, VAR_8, 0) == 0);
 FUNC_1(FUNC_6(VAR_12, VAR_6) == 0);

 VAR_11 = 0;
 FUNC_1(FUNC_6(VAR_12, VAR_7) == -1);
 FUNC_1(VAR_11 == VAR_4);
 VAR_11 = 0;
 FUNC_1(FUNC_6(VAR_12, VAR_9, VAR_10) == -1);
 FUNC_1(VAR_11 == VAR_4);
 VAR_11 = 0;
 FUNC_1(FUNC_6(VAR_12, VAR_9, 0) == -1);
 FUNC_1(VAR_11 == VAR_4);
 VAR_11 = 0;
 FUNC_1(FUNC_6(VAR_12, VAR_7) == -1);
 FUNC_1(VAR_11 == VAR_4);
}
