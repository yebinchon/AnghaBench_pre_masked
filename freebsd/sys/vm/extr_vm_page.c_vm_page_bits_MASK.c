
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_bits_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;

vm_page_bits_t
FUNC_1(int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_0(
     VAR_2 + VAR_3 <= VAR_1,
     ("vm_page_bits: illegal base/size %d/%d", VAR_2, VAR_3)
 );

 if (VAR_3 == 0)
  return (0);

 VAR_4 = VAR_2 >> VAR_0;
 VAR_5 = (VAR_2 + VAR_3 - 1) >> VAR_0;

 return (((vm_page_bits_t)2 << VAR_5) -
     ((vm_page_bits_t)1 << VAR_4));
}
