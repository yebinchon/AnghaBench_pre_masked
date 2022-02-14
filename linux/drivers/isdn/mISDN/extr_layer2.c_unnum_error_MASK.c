
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; scalar_t__ len; } ;
struct layer2 {int flag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct layer2*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct layer2 *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 int VAR_4 = (*VAR_2->data & 0x2) >> 1;
 if (FUNC_1(VAR_0, &VAR_1->flag))
  VAR_4 = !VAR_4;
 if (VAR_4 != VAR_3)
  return 'L';
 if (VAR_2->len != FUNC_0(VAR_1) + 1)
  return 'N';
 return 0;
}
