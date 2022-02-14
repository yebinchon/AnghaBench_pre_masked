
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(Elf32_Ehdr *VAR_3, void *VAR_4)
{
 uint64_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_3, VAR_0);
 if (VAR_5 == VAR_1)
  VAR_5 = FUNC_1(VAR_3, (char *)VAR_4, VAR_2);
 return VAR_5;
}
