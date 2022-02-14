
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pkcs7_signed_info {TYPE_1__* sig; int * next; } ;
struct pkcs7_message {struct pkcs7_signed_info* signed_infos; } ;
typedef enum hash_algo { ____Placeholder_hash_algo } hash_algo ;
struct TYPE_2__ {int hash_algo; int digest_size; int * digest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct pkcs7_message*,struct pkcs7_signed_info*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(struct pkcs7_message *VAR_3, const u8 **VAR_4, u32 *VAR_5,
       enum hash_algo *VAR_6)
{
 struct pkcs7_signed_info *VAR_7 = VAR_3->signed_infos;
 int VAR_8, VAR_9;




 if (VAR_7 == ((void*)0) || VAR_7->next != ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3, VAR_7);
 if (VAR_9)
  return VAR_9;

 *VAR_4 = VAR_7->sig->digest;
 *VAR_5 = VAR_7->sig->digest_size;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (!FUNC_1(VAR_2[VAR_8], VAR_7->sig->hash_algo)) {
   *VAR_6 = VAR_8;
   break;
  }

 return 0;
}
