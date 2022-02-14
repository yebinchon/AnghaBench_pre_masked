
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dummyif ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_5()
{
 char VAR_4[VAR_1+8];
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_0, VAR_3, 0)) < 0)
  FUNC_1(1, "socket");
 FUNC_4(VAR_4, "lo0", sizeof(VAR_4));
 if (FUNC_2(VAR_5, VAR_2, (caddr_t)&VAR_4) < 0)
  FUNC_1(1, "ioctl(SIOCSNDFLUSH_IN6)");

 FUNC_0(VAR_5);
}
