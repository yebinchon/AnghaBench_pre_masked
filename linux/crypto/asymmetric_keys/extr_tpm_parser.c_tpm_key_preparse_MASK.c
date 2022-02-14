
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpm_key {int owner; } ;
struct TYPE_2__ {struct tpm_key** data; } ;
struct key_preparsed_payload {int datalen; int quotalen; TYPE_1__ payload; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tpm_key*) ;
 int FUNC_1 (struct tpm_key*) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct tpm_key VAR_5 ;
 struct tpm_key* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct key_preparsed_payload *VAR_6)
{
 struct tpm_key *VAR_7;





 if (VAR_6->datalen > 256 * 4)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_6->data, VAR_6->datalen);

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 FUNC_2(VAR_5.owner);
 VAR_6->payload.data[VAR_4] = &VAR_5;
 VAR_6->payload.data[VAR_3] = ((void*)0);
 VAR_6->payload.data[VAR_2] = VAR_7;
 VAR_6->payload.data[VAR_1] = ((void*)0);
 VAR_6->quotalen = 100;
 return 0;
}
