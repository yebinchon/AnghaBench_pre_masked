
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tpm_header {void* ordinal; void* length; int tag; } ;
struct tpm_buf {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct tpm_buf *VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct tpm_header *VAR_3 = (struct tpm_header *)VAR_0->data;

 VAR_3->tag = FUNC_0(VAR_1);
 VAR_3->length = FUNC_1(sizeof(*VAR_3));
 VAR_3->ordinal = FUNC_1(VAR_2);
}
