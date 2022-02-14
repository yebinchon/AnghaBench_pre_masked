
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sk_buff {int* data; scalar_t__ len; } ;
struct layer2 {scalar_t__ maxlen; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct layer2*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct layer2 *VAR_2, struct sk_buff *VAR_3)
{
 u_int VAR_4;
 int VAR_5 = *VAR_3->data & 0x2;

 VAR_4 = FUNC_0(VAR_2) + (FUNC_1(VAR_0, &VAR_2->flag) ? 2 : 1);
 if (FUNC_1(VAR_1, &VAR_2->flag))
  VAR_5 = !VAR_5;
 if (VAR_5)
  return 'L';
 if (VAR_3->len < VAR_4)
  return 'N';
 if ((VAR_3->len - VAR_4) > VAR_2->maxlen)
  return 'O';
 return 0;
}
