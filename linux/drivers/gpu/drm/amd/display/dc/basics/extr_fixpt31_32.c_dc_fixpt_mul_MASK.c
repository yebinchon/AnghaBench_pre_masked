
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
 TYPE_1__ VAR_3 ;

struct fixed31_32 FUNC_3(struct fixed31_32 VAR_4, struct fixed31_32 VAR_5)
{
 struct fixed31_32 VAR_6;

 bool VAR_7 = VAR_4 < 0;
 bool VAR_8 = VAR_5 < 0;

 unsigned long long VAR_9 = VAR_7 ? -VAR_4 : VAR_4;
 unsigned long long VAR_10 = VAR_8 ? -VAR_5 : VAR_5;

 unsigned long long VAR_11 = FUNC_2(VAR_9);
 unsigned long long VAR_12 = FUNC_2(VAR_10);

 unsigned long long VAR_13 = FUNC_1(VAR_9);
 unsigned long long VAR_14 = FUNC_1(VAR_10);

 unsigned long long VAR_15;

 VAR_6.value = VAR_11 * VAR_12;

 FUNC_0(VAR_6.value <= VAR_2);

 VAR_6.value <<= VAR_0;

 VAR_15 = VAR_11 * VAR_14;

 FUNC_0(VAR_15 <= (unsigned long long)(VAR_1 - VAR_6.value));

 VAR_6.value += VAR_15;

 VAR_15 = VAR_12 * VAR_13;

 FUNC_0(VAR_15 <= (unsigned long long)(VAR_1 - VAR_6.value));

 VAR_6.value += VAR_15;

 VAR_15 = VAR_13 * VAR_14;

 VAR_15 = (VAR_15 >> VAR_0) +
  (VAR_15 >= (unsigned long long)VAR_3.value);

 FUNC_0(VAR_15 <= (unsigned long long)(VAR_1 - VAR_6.value));

 VAR_6.value += VAR_15;

 if (VAR_7 ^ VAR_8)
  VAR_6.value = -VAR_6.value;

 return VAR_6;
}
