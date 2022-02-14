
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct table_info {int dummy; } ;
struct numarray {int value; } ;


 struct numarray* FUNC_0 (struct table_info*,void*) ;

__attribute__((used)) static int
FUNC_1(struct table_info *VAR_0, void *VAR_1, uint32_t VAR_2,
    uint32_t *VAR_3)
{
 struct numarray *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);

 if (VAR_4 != ((void*)0)) {
  *VAR_3 = VAR_4->value;
  return (1);
 }

 return (0);
}
