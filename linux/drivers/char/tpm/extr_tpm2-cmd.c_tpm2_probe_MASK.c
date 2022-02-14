
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_header {int tag; } ;
struct tpm_chip {int flags; } ;
struct tpm_buf {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tpm_buf*,int) ;
 int FUNC_2 (struct tpm_buf*) ;
 int FUNC_3 (struct tpm_buf*,scalar_t__,int ) ;
 int FUNC_4 (struct tpm_chip*,struct tpm_buf*,int ,int *) ;

int FUNC_5(struct tpm_chip *VAR_5)
{
 struct tpm_header *VAR_6;
 struct tpm_buf VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_7, VAR_2, VAR_1);
 if (VAR_8)
  return VAR_8;
 FUNC_1(&VAR_7, VAR_0);
 FUNC_1(&VAR_7, VAR_4);
 FUNC_1(&VAR_7, 1);
 VAR_8 = FUNC_4(VAR_5, &VAR_7, 0, ((void*)0));

 if (VAR_8 >= 0) {
  VAR_6 = (struct tpm_header *)VAR_7.data;
  if (FUNC_0(VAR_6->tag) == VAR_2)
   VAR_5->flags |= VAR_3;
 }
 FUNC_2(&VAR_7);
 return 0;
}
