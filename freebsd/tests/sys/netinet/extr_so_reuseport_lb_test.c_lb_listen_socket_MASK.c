
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int one ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,size_t*,int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, int VAR_5)
{
 size_t VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_0 | VAR_5, 0);
 FUNC_0(VAR_8 >= 0, "socket() failed: %s", FUNC_3(VAR_3));

 VAR_6 = 1;
 VAR_7 = FUNC_1(VAR_8, VAR_1, VAR_2, &VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_7 == 0, "setsockopt(SO_REUSEPORT_LB) failed: %s",
     FUNC_3(VAR_3));

 return (VAR_8);
}
