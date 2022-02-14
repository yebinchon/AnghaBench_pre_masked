
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {scalar_t__ buddy_got; } ;


 int FUNC_0 (struct params*) ;
 int FUNC_1 (int,char*) ;

void FUNC_2(struct params *VAR_0)
{
 VAR_0->buddy_got = 0;

 if (FUNC_0(VAR_0) == -1)
  FUNC_1(1, "connect_buddy()");
}
