
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bw_fixed {scalar_t__ value; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__ FUNC_4 (int,int) ;

struct bw_fixed FUNC_5(const struct bw_fixed VAR_3, const struct bw_fixed VAR_4)
{
 struct bw_fixed VAR_5;

 bool VAR_6 = VAR_3 < 0;
 bool VAR_7 = VAR_4 < 0;

 uint64_t VAR_8 = FUNC_3(VAR_3);
 uint64_t VAR_9 = FUNC_3(VAR_4);

 uint64_t VAR_10 = FUNC_1(VAR_8);
 uint64_t VAR_11 = FUNC_1(VAR_9);

 uint64_t VAR_12 = FUNC_2(VAR_8);
 uint64_t VAR_13 = FUNC_2(VAR_9);

 uint64_t VAR_14;

 VAR_5.value = VAR_10 * VAR_11;

 FUNC_0(VAR_5.value <= VAR_1);

 VAR_5.value <<= VAR_0;

 VAR_14 = VAR_10 * VAR_13;

 FUNC_0(VAR_14 <= (uint64_t)(VAR_2 - VAR_5.value));

 VAR_5.value += VAR_14;

 VAR_14 = VAR_11 * VAR_12;

 FUNC_0(VAR_14 <= (uint64_t)(VAR_2 - VAR_5.value));

 VAR_5.value += VAR_14;

 VAR_14 = VAR_12 * VAR_13;

 VAR_14 = (VAR_14 >> VAR_0) +
  (VAR_14 >= (uint64_t)(FUNC_4(1, 2).value));

 FUNC_0(VAR_14 <= (uint64_t)(VAR_2 - VAR_5.value));

 VAR_5.value += VAR_14;

 if (VAR_6 ^ VAR_7)
  VAR_5.value = -VAR_5.value;
 return VAR_5;
}
