
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int const* efidp ;
typedef int const efi_char ;
typedef int attributes ;


 size_t VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (char const*,int const**,size_t*) ;

__attribute__((used)) static size_t
FUNC_5(uint8_t *VAR_1, size_t VAR_2, uint32_t VAR_3, efidp VAR_4, size_t VAR_5,
    const char *VAR_6, const uint8_t *VAR_7, size_t VAR_8)
{
 efi_char *VAR_9 = ((void*)0);
 uint8_t *VAR_10 = VAR_1;
 size_t VAR_11 = 0;
 size_t VAR_12;

 if (VAR_7 == ((void*)0) && VAR_8 != 0)
  return VAR_0;
 if (VAR_4 == ((void*)0) && VAR_5 != 0)
  return VAR_0;




 FUNC_4(VAR_6, &VAR_9, &VAR_11);
 VAR_12 = sizeof(uint32_t) + sizeof(uint16_t) + VAR_11 + VAR_5 + VAR_8;
 if (VAR_12 > VAR_2) {
  FUNC_0(VAR_9);
  return VAR_0;
 }

 FUNC_2(VAR_10, VAR_3);
 VAR_10 += sizeof (VAR_3);

 FUNC_1(VAR_10, VAR_5);
 VAR_10 += sizeof (uint16_t);

 FUNC_3(VAR_10, VAR_9, VAR_11);
 VAR_10 += VAR_11;
 FUNC_0(VAR_9);

 FUNC_3(VAR_10, VAR_4, VAR_5);
 VAR_10 += VAR_5;

 if (VAR_7 && VAR_8 > 0) {
  FUNC_3(VAR_10, VAR_7, VAR_8);
  VAR_10 += VAR_8;
 }

 return VAR_10 - VAR_1;
}
