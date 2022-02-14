
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t phys_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t*,size_t) ;

__attribute__((used)) static int FUNC_1(phys_addr_t VAR_2, size_t VAR_3)
{
 if ((VAR_2 & VAR_1) || (VAR_3 & VAR_1)) {
  FUNC_0("base %pa size 0x%08zx must align to 1KiB\n",
   &VAR_2, VAR_3);
  return -VAR_0;
 }
 if (VAR_3 == 0)
  return -VAR_0;

 return 0;
}
