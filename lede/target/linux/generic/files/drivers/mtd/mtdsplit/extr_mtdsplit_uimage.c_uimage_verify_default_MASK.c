
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct uimage_header {scalar_t__ ih_magic; scalar_t__ ih_os; scalar_t__ ih_type; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(u_char *VAR_4, size_t VAR_5)
{
 struct uimage_header *VAR_6 = (struct uimage_header *)VAR_4;


 if (FUNC_0(VAR_6->ih_magic) != VAR_1) {
  FUNC_1("invalid uImage magic: %08x\n",
    FUNC_0(VAR_6->ih_magic));
  return -VAR_0;
 }

 if (VAR_6->ih_os != VAR_2) {
  FUNC_1("invalid uImage OS: %08x\n",
    FUNC_0(VAR_6->ih_os));
  return -VAR_0;
 }

 if (VAR_6->ih_type != VAR_3) {
  FUNC_1("invalid uImage type: %08x\n",
    FUNC_0(VAR_6->ih_type));
  return -VAR_0;
 }

 return 0;
}
