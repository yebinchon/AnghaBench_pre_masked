
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bochs_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, u8 *VAR_2,
    unsigned int VAR_3, size_t VAR_4)
{
 struct bochs_device *VAR_5 = VAR_1;
 size_t VAR_6, VAR_7 = VAR_3 * VAR_0;

 if (VAR_7 + VAR_4 > 0x400 )
  return -1;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_2[VAR_6] = FUNC_0(VAR_5->mmio + VAR_7 + VAR_6);
 }
 return 0;
}
