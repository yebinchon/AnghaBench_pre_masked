
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sh_name; } ;
struct TYPE_4__ {char* strtab; TYPE_1__ shdr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static const char *FUNC_0(unsigned VAR_5)
{
 const char *VAR_6;
 const char *VAR_7;
 VAR_6 = VAR_2[VAR_4].strtab;
 VAR_7 = "<noname>";
 if (VAR_5 < VAR_3) {
  VAR_7 = VAR_6 + VAR_2[VAR_5].shdr.sh_name;
 }
 else if (VAR_5 == VAR_0) {
  VAR_7 = "ABSOLUTE";
 }
 else if (VAR_5 == VAR_1) {
  VAR_7 = "COMMON";
 }
 return VAR_7;
}
