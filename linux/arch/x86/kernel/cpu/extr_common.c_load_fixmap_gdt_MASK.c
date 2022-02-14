
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_ptr {long address; scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct desc_ptr*) ;

void FUNC_2(int VAR_1)
{
 struct desc_ptr VAR_2;

 VAR_2.address = (long)FUNC_0(VAR_1);
 VAR_2.size = VAR_0 - 1;
 FUNC_1(&VAR_2);
}
