
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tpm_header {int length; } ;
struct tpm_buf {int flags; int * data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned char const*,unsigned int) ;
 unsigned int FUNC_3 (struct tpm_buf*) ;

__attribute__((used)) static inline void FUNC_4(struct tpm_buf *VAR_2,
      const unsigned char *VAR_3,
      unsigned int VAR_4)
{
 struct tpm_header *VAR_5 = (struct tpm_header *)VAR_2->data;
 u32 VAR_6 = FUNC_3(VAR_2);


 if (VAR_2->flags & VAR_1)
  return;

 if ((VAR_6 + VAR_4) > VAR_0) {
  FUNC_0(1, "tpm_buf: overflow\n");
  VAR_2->flags |= VAR_1;
  return;
 }

 FUNC_2(&VAR_2->data[VAR_6], VAR_3, VAR_4);
 VAR_5->length = FUNC_1(VAR_6 + VAR_4);
}
