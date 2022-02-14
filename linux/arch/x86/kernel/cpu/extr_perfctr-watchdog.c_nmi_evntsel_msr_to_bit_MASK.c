
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x86_vendor; int x86; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 TYPE_1__ VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_8)
{

 switch (VAR_7.x86_vendor) {
 case 129:
 case 130:
  if (VAR_8 >= VAR_1)
   return (VAR_8 - VAR_1) >> 1;
  return VAR_8 - VAR_2;
 case 128:
  if (FUNC_0(&VAR_7, VAR_6))
   return VAR_8 - VAR_0;

  switch (VAR_7.x86) {
  case 6:
   return VAR_8 - VAR_5;
  case 11:
   return VAR_8 - VAR_3;
  case 15:
   return VAR_8 - VAR_4;
  }
 }
 return 0;

}
