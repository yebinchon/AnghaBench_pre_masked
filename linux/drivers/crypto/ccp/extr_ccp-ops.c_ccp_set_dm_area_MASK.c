
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ccp_dm_workarea {unsigned int length; scalar_t__ address; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,struct scatterlist*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct ccp_dm_workarea *VAR_1, unsigned int VAR_2,
      struct scatterlist *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5)
{
 FUNC_0(!VAR_1->address);

 if (VAR_5 > (VAR_1->length - VAR_2))
  return -VAR_0;

 FUNC_1(VAR_1->address + VAR_2, VAR_3, VAR_4, VAR_5,
     0);
 return 0;
}
