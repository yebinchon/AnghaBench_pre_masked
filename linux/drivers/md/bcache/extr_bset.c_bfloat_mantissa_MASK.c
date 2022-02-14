
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bkey_float {int exponent; } ;
struct bkey {int low; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int const,int const,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct bkey *VAR_1,
           struct bkey_float *VAR_2)
{
 const uint64_t *VAR_3 = &VAR_1->low - (VAR_2->exponent >> 6);

 return FUNC_0(VAR_3[-1], VAR_3[0], VAR_2->exponent & 63) & VAR_0;
}
