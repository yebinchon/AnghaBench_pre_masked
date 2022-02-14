
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ib_uverbs_attr {int len; int data; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void const*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct ib_uverbs_attr *VAR_0,
       u16 VAR_1)
{
 if (VAR_0->len > sizeof(((struct ib_uverbs_attr *)0)->data))
  return FUNC_0(FUNC_2(VAR_0->data) + VAR_1,
         VAR_0->len - VAR_1);

 return !FUNC_1((const void *)&VAR_0->data + VAR_1,
      0, VAR_0->len - VAR_1);
}
