
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvmppc_spapr_tce_table {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_1)
{
 unsigned long VAR_2 = sizeof(struct kvmppc_spapr_tce_table) +
   (VAR_1 * sizeof(struct page *));

 return VAR_1 + FUNC_0(VAR_2, VAR_0) / VAR_0;
}
