
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hexline {int len; int addr; int type; int chk; int data; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct hexline*,int ,int) ;

__attribute__((used)) static int FUNC_2(const struct firmware *VAR_1,
    struct hexline *VAR_2, int *VAR_3)
{
 u8 *VAR_4 = (u8 *) &VAR_1->data[*VAR_3];
 int VAR_5 = 4;

 if (*VAR_3 >= VAR_1->size)
  return 0;

 FUNC_1(VAR_2, 0, sizeof(struct hexline));
 VAR_2->len = VAR_4[0];

 if ((*VAR_3 + VAR_2->len + 4) >= VAR_1->size)
  return -VAR_0;

 VAR_2->addr = VAR_4[1] | (VAR_4[2] << 8);
 VAR_2->type = VAR_4[3];

 if (VAR_2->type == 0x04) {


  VAR_2->addr |= (VAR_4[4] << 24) | (VAR_4[5] << 16);
 }

 FUNC_0(VAR_2->data, &VAR_4[VAR_5], VAR_2->len);
 VAR_2->chk = VAR_4[VAR_2->len + VAR_5];
 *VAR_3 += VAR_2->len + 5;

 return *VAR_3;
}
