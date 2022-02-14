
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region {int dummy; } ;
struct histindex {scalar_t__ cnt; scalar_t__ max_chain_length; scalar_t__ has_common; } ;


 unsigned int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct histindex*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct histindex*,struct region*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(
 struct histindex *VAR_0, struct region *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3,
 unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 if (FUNC_1(VAR_0, VAR_2, VAR_3))
  return -1;

 VAR_0->cnt = VAR_0->max_chain_length + 1;

 for (VAR_6 = VAR_4; VAR_6 <= FUNC_0(2); )
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_0->has_common && VAR_0->max_chain_length < VAR_0->cnt;
}
