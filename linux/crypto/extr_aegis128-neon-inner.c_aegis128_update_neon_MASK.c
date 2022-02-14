
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8x16_t ;
struct aegis128_state {int * v; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __attribute__((always_inline))
struct aegis128_state FUNC_1(struct aegis128_state VAR_0,
        uint8x16_t VAR_1)
{
 VAR_1 ^= FUNC_0(VAR_0.v[4]);
 VAR_0.v[4] ^= FUNC_0(VAR_0.v[3]);
 VAR_0.v[3] ^= FUNC_0(VAR_0.v[2]);
 VAR_0.v[2] ^= FUNC_0(VAR_0.v[1]);
 VAR_0.v[1] ^= FUNC_0(VAR_0.v[0]);
 VAR_0.v[0] ^= VAR_1;

 return VAR_0;
}
