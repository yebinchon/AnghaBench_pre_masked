
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, vm_size_t VAR_2, uint8_t VAR_3)
{

 if ((VAR_3 & VAR_0) == 0)
  FUNC_1("UMA: page_free used with invalid flags %x", VAR_3);

 FUNC_0((vm_offset_t)VAR_1, VAR_2);
}
