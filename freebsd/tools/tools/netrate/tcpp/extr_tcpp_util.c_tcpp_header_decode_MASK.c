
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpp_header {int th_len; int th_magic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct tcpp_header *VAR_0)
{

 VAR_0->th_magic = FUNC_0(VAR_0->th_magic);
 VAR_0->th_len = FUNC_1(VAR_0->th_len);
}
