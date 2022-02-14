
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct gf128table {int* b; int* d; scalar_t__* c; scalar_t__* a; } ;
struct gf128 {int* v; } ;



__attribute__((used)) static inline struct gf128
FUNC_0(struct gf128table *VAR_0, unsigned VAR_1)
{
 struct gf128 VAR_2;

 VAR_1 = VAR_1 % 16;

 VAR_2.v[0] = ((uint64_t)VAR_0->a[VAR_1] << 32) | VAR_0->b[VAR_1];
 VAR_2.v[1] = ((uint64_t)VAR_0->c[VAR_1] << 32) | VAR_0->d[VAR_1];

 return VAR_2;
}
