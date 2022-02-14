
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct public_key {char* id_type; int owner; int pkey_algo; } ;
struct TYPE_2__ {struct public_key** data; } ;
struct key_preparsed_payload {int quotalen; TYPE_1__ payload; int datalen; int data; } ;


 scalar_t__ FUNC_0 (struct public_key*) ;
 int FUNC_1 (struct public_key*) ;
 int FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct public_key* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ) ;
 struct public_key VAR_4 ;

__attribute__((used)) static int FUNC_5(struct key_preparsed_payload *VAR_5)
{
 struct public_key *VAR_6;

 VAR_6 = FUNC_3(VAR_5->data, VAR_5->datalen);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 FUNC_4("Cert Key Algo: %s\n", VAR_6->pkey_algo);
 VAR_6->id_type = "PKCS8";


 FUNC_2(VAR_4.owner);
 VAR_5->payload.data[VAR_3] = &VAR_4;
 VAR_5->payload.data[VAR_2] = ((void*)0);
 VAR_5->payload.data[VAR_1] = VAR_6;
 VAR_5->payload.data[VAR_0] = ((void*)0);
 VAR_5->quotalen = 100;
 return 0;
}
