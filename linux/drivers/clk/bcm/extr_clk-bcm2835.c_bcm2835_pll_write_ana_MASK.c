
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm2835_cprman {int dummy; } ;


 int FUNC_0 (struct bcm2835_cprman*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct bcm2835_cprman *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 3; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_0, VAR_1 + VAR_3 * 4, VAR_2[VAR_3]);
}
