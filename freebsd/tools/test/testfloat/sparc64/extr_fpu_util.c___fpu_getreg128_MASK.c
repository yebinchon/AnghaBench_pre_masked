
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct TYPE_3__ {int high; int low; } ;
typedef TYPE_1__ float128 ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static __inline float128
FUNC_0(int VAR_1)
{
 float128 VAR_2;

 VAR_2.high = ((u_int64_t)VAR_0[VAR_1] << 32 | (u_int64_t)VAR_0[VAR_1 + 1]);
 VAR_2.low = ((u_int64_t)VAR_0[VAR_1 + 2] << 32 | (u_int64_t)VAR_0[VAR_1 + 3]);
 return (VAR_2);
}
