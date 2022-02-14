
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bkey {int* ptr; } ;


 size_t FUNC_0 (struct bkey*) ;

__attribute__((used)) static uint64_t FUNC_1(struct bkey *VAR_0, struct bkey *VAR_1)
{
 return (VAR_0->ptr[FUNC_0(VAR_0)] + VAR_1->ptr[FUNC_0(VAR_1)]) &
  ~((uint64_t)1 << 63);
}
