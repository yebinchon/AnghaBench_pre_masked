
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned long n_lmbs; unsigned long lmb_size; } ;


 unsigned long VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2)
{
 unsigned long VAR_3 = 0;

 VAR_3 += VAR_1->n_lmbs * VAR_1->lmb_size;
 VAR_3 += FUNC_0() * VAR_0;

 FUNC_1(VAR_2, "MaxMem=%ld\n", VAR_3);
}
