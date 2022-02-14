
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {unsigned long long sysbase; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (unsigned long long,unsigned int) ;
 unsigned long long FUNC_6 (int) ;
 TYPE_1__* FUNC_7 (int) ;
 unsigned int FUNC_8 (unsigned long long,int ) ;

__attribute__((used)) static unsigned int FUNC_9(int VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
 uint64_t VAR_6, VAR_7, VAR_8;

 if (FUNC_4()) {
  VAR_8 = FUNC_6(VAR_0);
  VAR_3 = FUNC_8(VAR_8,
     FUNC_0(VAR_1));
  VAR_4 = FUNC_8(VAR_8,
     FUNC_1(VAR_1));
 } else {
  VAR_7 = FUNC_7(VAR_0)->sysbase;
  VAR_3 = FUNC_8(VAR_7,
      FUNC_2(VAR_1));
  VAR_4 = FUNC_8(VAR_7,
      FUNC_3(VAR_1));
 }


 switch ((VAR_3 >> 24) & 0x7) {
 case 1:
  VAR_2 = 2;
  break;
 case 3:
  VAR_2 = 4;
  break;
 case 7:
  VAR_2 = 8;
  break;
 case 6:
  VAR_2 = 16;
  break;
 case 0:
 default:
  VAR_2 = 1;
  break;
 }

 VAR_6 = 1000000ULL * (400 * 3 + 100 * (VAR_4 & 0x3f));
 VAR_5 = 3 * VAR_2;
 FUNC_5(VAR_6, VAR_5);

 return (unsigned int)VAR_6;
}
