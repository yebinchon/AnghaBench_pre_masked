
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*,size_t) ;

__attribute__((used)) static void
FUNC_1(const uint8_t *VAR_1, size_t VAR_2)
{

 FUNC_0(VAR_1, VAR_2);
 while (VAR_2 > 0) {
  VAR_0 += *VAR_1;
  VAR_1++;
  VAR_2--;
 }
}
