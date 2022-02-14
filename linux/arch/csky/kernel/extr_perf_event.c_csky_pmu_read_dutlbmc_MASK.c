
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static uint64_t FUNC_1(void)
{
 uint32_t VAR_0, VAR_1, VAR_2;
 uint64_t VAR_3;

 do {
  VAR_2 = FUNC_0("<0, 0x17>");
  VAR_0 = FUNC_0("<0, 0x16>");
  VAR_1 = FUNC_0("<0, 0x17>");
 } while (VAR_1 != VAR_2);

 VAR_3 = (uint64_t) (VAR_1) << 32;
 VAR_3 |= VAR_0;

 return VAR_3;
}
