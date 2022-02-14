
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct ccp_dm_workarea {int* address; } ;


 int FUNC_0 (struct ccp_dm_workarea*,unsigned int,struct scatterlist*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ccp_dm_workarea *VAR_0,
       unsigned int VAR_1,
       struct scatterlist *VAR_2,
       unsigned int VAR_3,
       unsigned int VAR_4)
{
 u8 *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 = VAR_0->address + VAR_1;
 VAR_6 = VAR_5 + VAR_4 - 1;
 while (VAR_5 < VAR_6) {
  *VAR_5 = *VAR_5 ^ *VAR_6;
  *VAR_6 = *VAR_5 ^ *VAR_6;
  *VAR_5 = *VAR_5 ^ *VAR_6;
  VAR_5++;
  VAR_6--;
 }
 return 0;
}
