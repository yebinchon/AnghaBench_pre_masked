
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {scalar_t__ pad_input; scalar_t__ pen_input; int data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_3(struct wacom_wac *VAR_0,
  unsigned char *VAR_1)
{
 FUNC_1(VAR_0->data, VAR_1, 10);
 FUNC_2(VAR_0);

 FUNC_0(VAR_0->pen_input);
 if (VAR_0->pad_input)
  FUNC_0(VAR_0->pad_input);
}
