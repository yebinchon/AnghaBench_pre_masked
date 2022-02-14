
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {int taint; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct aoetgt *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->taint++;
 VAR_1->taint += VAR_1->taint * 2;
 if (VAR_2 > VAR_1->taint)
  VAR_1->taint = VAR_2;
 if (VAR_1->taint > VAR_0)
  VAR_1->taint = VAR_0;
}
