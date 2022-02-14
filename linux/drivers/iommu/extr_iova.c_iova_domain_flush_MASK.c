
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int fq_flush_finish_cnt; int (* flush_cb ) (struct iova_domain*) ;int fq_flush_start_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct iova_domain*) ;

__attribute__((used)) static void FUNC_2(struct iova_domain *VAR_0)
{
 FUNC_0(&VAR_0->fq_flush_start_cnt);
 VAR_0->flush_cb(VAR_0);
 FUNC_0(&VAR_0->fq_flush_finish_cnt);
}
