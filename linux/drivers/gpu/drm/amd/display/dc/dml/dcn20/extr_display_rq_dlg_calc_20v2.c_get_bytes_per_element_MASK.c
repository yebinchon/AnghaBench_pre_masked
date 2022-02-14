
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_0(enum source_format_class VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = 0;

 if (VAR_6 == VAR_2) {
  if (!VAR_7)
   VAR_8 = 2;
 } else if (VAR_6 == VAR_3) {
  if (!VAR_7)
   VAR_8 = 4;
 } else if (VAR_6 == VAR_4) {
  if (!VAR_7)
   VAR_8 = 8;
 } else if (VAR_6 == VAR_1) {
  if (VAR_7)
   VAR_8 = 2;
  else
   VAR_8 = 1;
 } else if (VAR_6 == VAR_0) {
  if (VAR_7)
   VAR_8 = 4;
  else
   VAR_8 = 2;
 } else if (VAR_6 == VAR_5) {
  VAR_8 = 1;
 }
 return VAR_8;
}
