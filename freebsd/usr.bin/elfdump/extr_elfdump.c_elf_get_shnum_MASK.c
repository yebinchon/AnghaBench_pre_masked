
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(Elf32_Ehdr *VAR_2, void *VAR_3)
{
 uint64_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_2, VAR_0);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(VAR_2, (char *)VAR_3, VAR_1);
 return VAR_4;
}
