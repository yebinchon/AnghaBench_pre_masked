
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tpm_buf {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 int FUNC_1 (struct tpm_buf*,int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct tpm_buf *VAR_0, const u32 VAR_1)
{
 __be32 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, (u8 *) &VAR_2, 4);
}
