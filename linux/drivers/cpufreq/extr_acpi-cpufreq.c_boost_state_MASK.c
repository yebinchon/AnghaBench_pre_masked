
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int x86_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 TYPE_1__ VAR_4 ;
 int FUNC_0 (unsigned int,int ,int*,int*) ;

__attribute__((used)) static bool FUNC_1(unsigned int VAR_5)
{
 u32 VAR_6, VAR_7;
 u64 VAR_8;

 switch (VAR_4.x86_vendor) {
 case 128:
  FUNC_0(VAR_5, VAR_0, &VAR_6, &VAR_7);
  VAR_8 = VAR_6 | ((u64)VAR_7 << 32);
  return !(VAR_8 & VAR_1);
 case 129:
 case 130:
  FUNC_0(VAR_5, VAR_2, &VAR_6, &VAR_7);
  VAR_8 = VAR_6 | ((u64)VAR_7 << 32);
  return !(VAR_8 & VAR_3);
 }
 return 0;
}
