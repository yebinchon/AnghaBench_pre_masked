
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct crypto_alg {int dummy; } ;


 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct crypto_alg *VAR_1)
{
 FUNC_1(VAR_0, "type         : rng\n");
 FUNC_1(VAR_0, "seedsize     : %u\n", FUNC_0(VAR_1));
}
