
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_space {int dummy; } ;
struct tpm_header {void* return_code; int tag; void* length; } ;
struct tpm_chip {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct tpm_chip*,struct tpm_space*,int *,int*) ;
 int FUNC_3 (struct tpm_chip*,struct tpm_space*,int *,size_t) ;
 int FUNC_4 (struct tpm_chip*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct tpm_chip *VAR_4, struct tpm_space *VAR_5,
    u8 *VAR_6, size_t VAR_7)
{
 struct tpm_header *VAR_8 = (void *)VAR_6;
 ssize_t VAR_9, VAR_10;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);



 if (VAR_9 == -VAR_0) {
  VAR_8->length = FUNC_1(sizeof(*VAR_8));
  VAR_8->tag = FUNC_0(VAR_2);
  VAR_8->return_code = FUNC_1(VAR_1 |
        VAR_3);
  VAR_9 = sizeof(*VAR_8);
 }
 if (VAR_9)
  goto out_rc;

 VAR_10 = FUNC_4(VAR_4, VAR_6, VAR_7);
 if (VAR_10 < 0)
  VAR_9 = VAR_10;

 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_10);

out_rc:
 return VAR_9 ? VAR_9 : VAR_10;
}
