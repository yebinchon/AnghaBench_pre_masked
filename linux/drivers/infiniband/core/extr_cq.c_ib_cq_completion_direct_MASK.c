
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_cq {int dummy; } ;


 int FUNC_0 (int,char*,struct ib_cq*) ;

__attribute__((used)) static void FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 FUNC_0(1, "got unsolicited completion for CQ 0x%p\n", VAR_0);
}
