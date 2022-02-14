
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {struct dm_verity* signature_key_desc; scalar_t__ data_dev; scalar_t__ hash_dev; struct dm_verity* alg_name; scalar_t__ tfm; struct dm_verity* zero_digest; struct dm_verity* root_digest; struct dm_verity* salt; int validated_blocks; scalar_t__ bufio; scalar_t__ verify_wq; } ;
struct dm_target {struct dm_verity* private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dm_target*,scalar_t__) ;
 int FUNC_4 (struct dm_verity*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_verity*) ;

__attribute__((used)) static void FUNC_7(struct dm_target *VAR_0)
{
 struct dm_verity *VAR_1 = VAR_0->private;

 if (VAR_1->verify_wq)
  FUNC_1(VAR_1->verify_wq);

 if (VAR_1->bufio)
  FUNC_2(VAR_1->bufio);

 FUNC_5(VAR_1->validated_blocks);
 FUNC_4(VAR_1->salt);
 FUNC_4(VAR_1->root_digest);
 FUNC_4(VAR_1->zero_digest);

 if (VAR_1->tfm)
  FUNC_0(VAR_1->tfm);

 FUNC_4(VAR_1->alg_name);

 if (VAR_1->hash_dev)
  FUNC_3(VAR_0, VAR_1->hash_dev);

 if (VAR_1->data_dev)
  FUNC_3(VAR_0, VAR_1->data_dev);

 FUNC_6(VAR_1);

 FUNC_4(VAR_1->signature_key_desc);

 FUNC_4(VAR_1);
}
