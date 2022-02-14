
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

__attribute__((used)) static unsigned int FUNC_0(enum source_format_class VAR_5, bool VAR_6)
{
 unsigned int VAR_7 = 0;

 if (VAR_5 == VAR_2) {
  if (!VAR_6)
   VAR_7 = 2;
 } else if (VAR_5 == VAR_3) {
  if (!VAR_6)
   VAR_7 = 4;
 } else if (VAR_5 == VAR_4) {
  if (!VAR_6)
   VAR_7 = 8;
 } else if (VAR_5 == VAR_1) {
  if (VAR_6)
   VAR_7 = 2;
  else
   VAR_7 = 1;
 } else if (VAR_5 == VAR_0) {
  if (VAR_6)
   VAR_7 = 4;
  else
   VAR_7 = 2;
 }
 return VAR_7;
}
