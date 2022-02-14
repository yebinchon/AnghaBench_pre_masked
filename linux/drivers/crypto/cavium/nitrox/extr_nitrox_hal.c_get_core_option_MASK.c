
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;


__attribute__((used)) static const char *FUNC_0(u8 VAR_1, u8 VAR_2)
{
 const char *VAR_3 = "";

 if (VAR_2 == VAR_0) {
  switch (VAR_1) {
  case 128:
   VAR_3 = "60";
   break;
  case 40:
   VAR_3 = "60s";
   break;
  }
 } else if (VAR_2 == (VAR_0 / 2)) {
  VAR_3 = "30";
 } else {
  VAR_3 = "60i";
 }

 return VAR_3;
}
