
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_chip {int flags; } ;
typedef int cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tpm_chip*,int ,int *,char const*,int ) ;
 int FUNC_1 (struct tpm_chip*,int,int *,char const*) ;

__attribute__((used)) static int FUNC_2(struct tpm_chip *VAR_2)
{
 const char *VAR_3 = "attempting to generate an interrupt";
 u32 VAR_4;
 cap_t VAR_5;

 if (VAR_2->flags & VAR_1)
  return FUNC_1(VAR_2, 0x100, &VAR_4, VAR_3);
 else
  return FUNC_0(VAR_2, VAR_0, &VAR_5, VAR_3,
      0);
}
