
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ablkcipher_alg {int ivsize; int max_keysize; int min_keysize; } ;
struct crypto_alg {int cra_flags; int cra_blocksize; struct ablkcipher_alg cra_ablkcipher; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, struct crypto_alg *VAR_2)
{
 struct ablkcipher_alg *VAR_3 = &VAR_2->cra_ablkcipher;

 FUNC_0(VAR_1, "type         : ablkcipher\n");
 FUNC_0(VAR_1, "async        : %s\n", VAR_2->cra_flags & VAR_0 ?
          "yes" : "no");
 FUNC_0(VAR_1, "blocksize    : %u\n", VAR_2->cra_blocksize);
 FUNC_0(VAR_1, "min keysize  : %u\n", VAR_3->min_keysize);
 FUNC_0(VAR_1, "max keysize  : %u\n", VAR_3->max_keysize);
 FUNC_0(VAR_1, "ivsize       : %u\n", VAR_3->ivsize);
 FUNC_0(VAR_1, "geniv        : <default>\n");
}
