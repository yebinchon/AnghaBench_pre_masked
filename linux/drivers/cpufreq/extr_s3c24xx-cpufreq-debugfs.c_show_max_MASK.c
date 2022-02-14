
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct s3c_freq {int armclk; int pclk; int hclk; int fclk; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct s3c_freq *VAR_1)
{
 FUNC_0(VAR_0, "MAX: F=%lu, H=%lu, P=%lu, A=%lu\n",
     VAR_1->fclk, VAR_1->hclk, VAR_1->pclk, VAR_1->armclk);
}
