
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_ptr {unsigned long address; int size; } ;
typedef int __u16 ;


 int FUNC_0 (struct desc_ptr*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, __u16 VAR_1)
{
 struct desc_ptr VAR_2;


 VAR_2.size = VAR_1;
 VAR_2.address = (unsigned long)VAR_0;

 FUNC_0(&VAR_2);
}
