
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tpm_header {int length; } ;
struct tpm_buf {scalar_t__ data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct tpm_buf *VAR_0)
{
 struct tpm_header *VAR_1 = (struct tpm_header *)VAR_0->data;

 return FUNC_0(VAR_1->length);
}
