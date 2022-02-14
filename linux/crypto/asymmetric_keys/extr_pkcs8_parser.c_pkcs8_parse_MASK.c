
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct public_key {int key_is_private; int keylen; int key; } ;
struct pkcs8_parse_context {unsigned long data; struct public_key* pub; int key_size; int key; } ;
typedef int ctx ;


 long VAR_0 ;
 struct public_key* FUNC_0 (long) ;
 int VAR_1 ;
 long FUNC_1 (int *,struct pkcs8_parse_context*,void const*,size_t) ;
 int FUNC_2 (struct public_key*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct public_key* FUNC_4 (int,int ) ;
 int FUNC_5 (struct pkcs8_parse_context*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static struct public_key *FUNC_6(const void *VAR_3, size_t VAR_4)
{
 struct pkcs8_parse_context VAR_5;
 struct public_key *VAR_6;
 long VAR_7;

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));

 VAR_7 = -VAR_0;
 VAR_5.pub = FUNC_4(sizeof(struct public_key), VAR_1);
 if (!VAR_5.pub)
  goto error;

 VAR_5.data = (unsigned long)VAR_3;


 VAR_7 = FUNC_1(&VAR_2, &VAR_5, VAR_3, VAR_4);
 if (VAR_7 < 0)
  goto error_decode;

 VAR_7 = -VAR_0;
 VAR_6 = VAR_5.pub;
 VAR_6->key = FUNC_3(VAR_5.key, VAR_5.key_size, VAR_1);
 if (!VAR_6->key)
  goto error_decode;

 VAR_6->keylen = VAR_5.key_size;
 VAR_6->key_is_private = 1;
 return VAR_6;

error_decode:
 FUNC_2(VAR_5.pub);
error:
 return FUNC_0(VAR_7);
}
