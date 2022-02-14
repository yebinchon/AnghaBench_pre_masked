
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fixed31_32 {unsigned long long value; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 unsigned long long VAR_0 ;
 unsigned long long FUNC_1 (unsigned long long) ;
 unsigned long long FUNC_2 (unsigned long long) ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long FUNC_3 (unsigned long long) ;
 TYPE_1__ VAR_3 ;

struct fixed31_32 FUNC_4(struct fixed31_32 VAR_4)
{
 struct fixed31_32 VAR_5;

 unsigned long long VAR_6 = FUNC_3(VAR_4.value);

 unsigned long long VAR_7 = FUNC_2(VAR_6);

 unsigned long long VAR_8 = FUNC_1(VAR_6);

 unsigned long long VAR_9;

 VAR_5.value = VAR_7 * VAR_7;

 FUNC_0(VAR_5.value <= VAR_2);

 VAR_5.value <<= VAR_0;

 VAR_9 = VAR_7 * VAR_8;

 FUNC_0(VAR_9 <= (unsigned long long)(VAR_1 - VAR_5.value));

 VAR_5.value += VAR_9;

 FUNC_0(VAR_9 <= (unsigned long long)(VAR_1 - VAR_5.value));

 VAR_5.value += VAR_9;

 VAR_9 = VAR_8 * VAR_8;

 VAR_9 = (VAR_9 >> VAR_0) +
  (VAR_9 >= (unsigned long long)VAR_3.value);

 FUNC_0(VAR_9 <= (unsigned long long)(VAR_1 - VAR_5.value));

 VAR_5.value += VAR_9;

 return VAR_5;
}
