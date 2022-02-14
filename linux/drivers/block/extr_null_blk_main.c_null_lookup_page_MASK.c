
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_page {int dummy; } ;
struct nullb {int dummy; } ;
typedef int sector_t ;


 struct nullb_page* FUNC_0 (struct nullb*,int ,int,int) ;

__attribute__((used)) static struct nullb_page *FUNC_1(struct nullb *VAR_0,
 sector_t VAR_1, bool VAR_2, bool VAR_3)
{
 struct nullb_page *VAR_4 = ((void*)0);

 if (!VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, 1);
 if (VAR_4)
  return VAR_4;
 return FUNC_0(VAR_0, VAR_1, VAR_2, 0);
}
