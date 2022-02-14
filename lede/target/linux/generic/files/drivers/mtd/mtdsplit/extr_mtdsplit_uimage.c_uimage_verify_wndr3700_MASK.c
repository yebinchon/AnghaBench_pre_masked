
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int u_char ;
struct uimage_header {scalar_t__ ih_os; scalar_t__ ih_type; int ih_magic; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static ssize_t FUNC_1(u_char *VAR_4, size_t VAR_5)
{
 struct uimage_header *VAR_6 = (struct uimage_header *)VAR_4;
 uint8_t VAR_7 = VAR_2;

 switch (FUNC_0(VAR_6->ih_magic)) {
 case 129:
 case 135:
 case 134:
 case 133:
 case 132:
 case 130:
 case 137:
 case 136:
 case 128:
  break;
 case 131:
  VAR_7 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->ih_os != VAR_1 ||
     VAR_6->ih_type != VAR_7)
  return -VAR_0;

 return 0;
}
