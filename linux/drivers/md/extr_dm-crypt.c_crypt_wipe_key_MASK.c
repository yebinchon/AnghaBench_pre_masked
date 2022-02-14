
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypt_config {int key_size; int key; int * key_string; TYPE_1__* iv_gen_ops; int flags; } ;
struct TYPE_2__ {int (* wipe ) (struct crypt_config*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct crypt_config*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct crypt_config*) ;

__attribute__((used)) static int FUNC_6(struct crypt_config *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, &VAR_1->flags);
 FUNC_2(&VAR_1->key, VAR_1->key_size);


 if (VAR_1->iv_gen_ops && VAR_1->iv_gen_ops->wipe) {
  VAR_2 = VAR_1->iv_gen_ops->wipe(VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_3(VAR_1->key_string);
 VAR_1->key_string = ((void*)0);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(&VAR_1->key, 0, VAR_1->key_size * sizeof(u8));

 return VAR_2;
}
