
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_2__ {unsigned long long sysbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long,unsigned int) ;
 TYPE_1__* FUNC_1 (int) ;
 unsigned int FUNC_2 (unsigned long long,int ) ;

__attribute__((used)) static unsigned int FUNC_3(int VAR_2, int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11, VAR_12;

 VAR_12 = FUNC_1(VAR_2)->sysbase;
 VAR_8 = FUNC_2(VAR_12, VAR_1);
 VAR_9 = FUNC_2(VAR_12, VAR_0);
 VAR_4 = ((VAR_8 >> 10) & 0x7f) + 1;
 VAR_5 = ((VAR_8 >> 8) & 0x3) + 1;
 VAR_7 = ((VAR_8 >> 30) & 0x3) + 1;
 VAR_6 = ((VAR_9 >> (VAR_3 * 4)) & 0xf) + 1;

 VAR_11 = 800000000ULL * VAR_4;
 VAR_10 = 3 * VAR_5 * VAR_7 * VAR_6;
 FUNC_0(VAR_11, VAR_10);

 return (unsigned int)VAR_11;
}
