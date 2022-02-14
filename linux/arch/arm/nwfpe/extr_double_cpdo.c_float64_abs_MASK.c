
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union float64_components {int* i; int f64; } ;
struct roundingData {int dummy; } ;
typedef int float64 ;



__attribute__((used)) static float64 FUNC_0(struct roundingData *VAR_0,float64 VAR_1)
{
 union float64_components VAR_2;

 VAR_2.f64 = VAR_1;



 VAR_2.i[1] &= 0x7fffffff;


 return VAR_2.f64;
}
