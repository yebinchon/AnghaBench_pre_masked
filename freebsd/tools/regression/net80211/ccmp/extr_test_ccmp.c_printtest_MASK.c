
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ciphertest {int keyix; int plaintext_len; int key_len; int pn; } ;


 int FUNC_0 (char*,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(const struct ciphertest *VAR_0)
{
 FUNC_0("keyix %u pn %llu key_len %u plaintext_len %u\n"
  , VAR_0->keyix
  , VAR_0->pn
  , VAR_0->key_len
  , VAR_0->plaintext_len
 );
}
