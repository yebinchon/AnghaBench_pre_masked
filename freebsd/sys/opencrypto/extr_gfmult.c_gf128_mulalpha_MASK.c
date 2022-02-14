
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gf128 {int* v; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct gf128
FUNC_0(struct gf128 VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = !!(VAR_1.v[1] & 1);
 VAR_2 = ~(VAR_2 - 1);
 VAR_1.v[1] = (VAR_1.v[1] >> 1) | ((VAR_1.v[0] & 1) << 63);
 VAR_1.v[0] = (VAR_1.v[0] >> 1) ^ ((VAR_2 & VAR_0) << 56);

 return VAR_1;
}
