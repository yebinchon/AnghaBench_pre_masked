
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct tpm_buf {int dummy; } ;


 int FUNC_0 (struct tpm_buf*,int const*,scalar_t__) ;
 int FUNC_1 (struct tpm_buf*,scalar_t__) ;
 int FUNC_2 (struct tpm_buf*,scalar_t__) ;
 int FUNC_3 (struct tpm_buf*,int ) ;

__attribute__((used)) static void FUNC_4(struct tpm_buf *VAR_0, u32 VAR_1,
     const u8 *VAR_2, u16 VAR_3,
     u8 VAR_4,
     const u8 *VAR_5, u16 VAR_6)
{
 FUNC_2(VAR_0, 9 + VAR_3 + VAR_6);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_3);

 if (VAR_2 && VAR_3)
  FUNC_0(VAR_0, VAR_2, VAR_3);

 FUNC_3(VAR_0, VAR_4);
 FUNC_1(VAR_0, VAR_6);

 if (VAR_5 && VAR_6)
  FUNC_0(VAR_0, VAR_5, VAR_6);
}
