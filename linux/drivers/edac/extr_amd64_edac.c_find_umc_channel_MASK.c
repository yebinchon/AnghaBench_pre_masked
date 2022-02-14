
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int ipid; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct mce *VAR_0)
{
 return (VAR_0->ipid & FUNC_0(31, 0)) >> 20;
}
