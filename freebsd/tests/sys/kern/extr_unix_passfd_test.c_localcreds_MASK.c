
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int socklen_t ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,int*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool
FUNC_3(int VAR_2)
{
 socklen_t VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = sizeof(VAR_5);
 VAR_4 = FUNC_1(VAR_2, 0, VAR_0, &VAR_5, &VAR_3);
 FUNC_0(VAR_4 != -1, "getsockopt(LOCAL_CREDS) failed: %s",
     FUNC_2(VAR_1));
 return (VAR_5 != 0);
}
