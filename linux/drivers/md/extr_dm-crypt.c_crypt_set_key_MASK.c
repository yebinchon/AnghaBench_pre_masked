
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_config {int flags; scalar_t__ key_size; int key; int * key_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct crypt_config*,char*) ;
 int FUNC_2 (struct crypt_config*) ;
 scalar_t__ FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct crypt_config *VAR_2, char *VAR_3)
{
 int VAR_4 = -VAR_1;
 int VAR_5 = FUNC_8(VAR_3);


 if (!VAR_2->key_size && FUNC_7(VAR_3, "-"))
  goto out;


 if (VAR_3[0] == ':') {
  VAR_4 = FUNC_1(VAR_2, VAR_3 + 1);
  goto out;
 }


 FUNC_0(VAR_0, &VAR_2->flags);


 FUNC_4(VAR_2->key_string);
 VAR_2->key_string = ((void*)0);


 if (VAR_2->key_size && FUNC_3(VAR_2->key, VAR_3, VAR_2->key_size) < 0)
  goto out;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  FUNC_6(VAR_0, &VAR_2->flags);

out:

 FUNC_5(VAR_3, '0', VAR_5);

 return VAR_4;
}
