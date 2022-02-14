
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpm_key {int dummy; } ;
struct kernel_pkey_params {int op; TYPE_2__* key; } ;
struct TYPE_3__ {struct tpm_key** data; } ;
struct TYPE_4__ {TYPE_1__ payload; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 size_t VAR_1 ;



 int FUNC_1 (struct tpm_key*,struct kernel_pkey_params*,void const*,void*) ;
 int FUNC_2 (struct tpm_key*,struct kernel_pkey_params*,void const*,void*) ;
 int FUNC_3 (struct tpm_key*,struct kernel_pkey_params*,void const*,void*) ;

__attribute__((used)) static int FUNC_4(struct kernel_pkey_params *VAR_2,
     const void *VAR_3, void *VAR_4)
{
 struct tpm_key *VAR_5 = VAR_2->key->payload.data[VAR_1];
 int VAR_6 = -VAR_0;


 switch (VAR_2->op) {
 case 129:
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_0();
 }

 return VAR_6;
}
