
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, const void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 uint64_t VAR_4 = 0;
 const uint8_t *VAR_5 = VAR_1;
 size_t VAR_6 = VAR_2 / 8, VAR_7 = (VAR_2 + VAR_3) / 8;

 FUNC_3(&VAR_4, &VAR_5[VAR_6], VAR_7 - VAR_6 + 1);
 VAR_4 = FUNC_2(FUNC_0(VAR_4) << (VAR_2 % 8));

 FUNC_1(VAR_0, &VAR_4, VAR_3);
}
