
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u64 FUNC_2(int VAR_4)
{
 u64 VAR_5 = 0;

 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_1(VAR_0);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_1);
  break;
 default:
  FUNC_0(VAR_4 < 0 || VAR_4 > VAR_3);
  return -VAR_2;
 }

 return VAR_5;
}
