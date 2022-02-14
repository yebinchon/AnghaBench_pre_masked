
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int busdma_tag_t ;
typedef int busdma_md_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

int
FUNC_1(busdma_tag_t VAR_1, u_int VAR_2, busdma_md_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 == -1)
  return (VAR_0);
 *VAR_3 = VAR_4;
 return (0);
}
