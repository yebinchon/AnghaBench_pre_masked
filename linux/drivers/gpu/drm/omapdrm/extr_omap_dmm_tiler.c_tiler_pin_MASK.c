
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tiler_block {int area; } ;
struct page {int dummy; } ;


 int FUNC_0 (int *,struct page**,int ,int ,int) ;
 int FUNC_1 (struct tiler_block*) ;

int FUNC_2(struct tiler_block *VAR_0, struct page **VAR_1,
  u32 VAR_2, u32 VAR_3, bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_0->area, VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5)
  FUNC_1(VAR_0);

 return VAR_5;
}
