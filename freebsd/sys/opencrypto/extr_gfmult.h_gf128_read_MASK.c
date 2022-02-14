
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct gf128 {void** v; } ;


 void* FUNC_0 (int const*) ;

__attribute__((used)) static inline struct gf128
FUNC_1(const uint8_t *VAR_0)
{
 struct gf128 VAR_1;

 VAR_1.v[0] = FUNC_0(VAR_0);
 VAR_0 += sizeof(uint64_t);

 VAR_1.v[1] = FUNC_0(VAR_0);

 return VAR_1;
}
