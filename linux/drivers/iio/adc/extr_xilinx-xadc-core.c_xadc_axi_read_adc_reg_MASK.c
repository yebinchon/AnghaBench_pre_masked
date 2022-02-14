
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct xadc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xadc*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct xadc *VAR_1, unsigned int VAR_2,
 uint16_t *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_1, VAR_0 + VAR_2 * 4, &VAR_4);
 *VAR_3 = VAR_4 & 0xffff;

 return 0;
}
