
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ccp_dm_workarea {scalar_t__ address; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct scatterlist*,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct ccp_dm_workarea *VAR_0, unsigned int VAR_1,
       struct scatterlist *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4)
{
 FUNC_0(!VAR_0->address);

 FUNC_1(VAR_0->address + VAR_1, VAR_2, VAR_3, VAR_4,
     1);
}
