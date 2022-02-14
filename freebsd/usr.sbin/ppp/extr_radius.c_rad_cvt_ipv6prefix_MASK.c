
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct in6_addr {int dummy; } ;


 int * FUNC_0 (size_t const) ;
 int FUNC_1 (int *,void const*,size_t) ;
 int FUNC_2 (int *,int ,size_t const) ;

__attribute__((used)) static uint8_t *
FUNC_3(const void *VAR_0, size_t VAR_1)
{
 const size_t VAR_2 = sizeof(struct in6_addr) + 2;
 uint8_t *VAR_3;

 if (VAR_1 > VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_3, 0, VAR_2);
  FUNC_1(VAR_3, VAR_0, VAR_1);
 }
 return VAR_3;
}
