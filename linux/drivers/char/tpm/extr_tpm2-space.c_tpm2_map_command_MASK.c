
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct tpm_space {int dummy; } ;
struct tpm_chip {unsigned int* cc_attrs_tbl; struct tpm_space work_space; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tpm_chip*,unsigned int) ;
 int FUNC_3 (struct tpm_space*,int *) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_4, u32 VAR_5, u8 *VAR_6)
{
 struct tpm_space *VAR_7 = &VAR_4->work_space;
 unsigned int VAR_8;
 u32 VAR_9;
 __be32 *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_4, VAR_5);
 if (VAR_11 < 0)
  return -VAR_0;

 VAR_9 = VAR_4->cc_attrs_tbl[VAR_11];
 VAR_8 = (VAR_9 >> VAR_1) & FUNC_0(2, 0);

 VAR_10 = (__be32 *)&VAR_6[VAR_3];
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++, VAR_10++) {
  if ((FUNC_1(*VAR_10) & 0xFF000000) == VAR_2) {
   if (!FUNC_3(VAR_7, VAR_10))
    return -VAR_0;
  }
 }

 return 0;
}
