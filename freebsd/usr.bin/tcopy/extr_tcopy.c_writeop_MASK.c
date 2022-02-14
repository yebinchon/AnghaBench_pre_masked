
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtop {int mt_op; scalar_t__ mt_count; } ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int,int ,char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, int VAR_2)
{
 struct mtop VAR_3;

 VAR_3.mt_op = VAR_2;
 VAR_3.mt_count = (daddr_t)1;
 if (FUNC_1(VAR_1, VAR_0, (char *)&VAR_3) < 0)
  FUNC_0(6, "tape op");
}
