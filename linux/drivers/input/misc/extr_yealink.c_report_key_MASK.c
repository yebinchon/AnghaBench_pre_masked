
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yealink_dev {int key_code; struct input_dev* idev; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (struct input_dev*,int,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct yealink_dev *VAR_0, int VAR_1)
{
 struct input_dev *VAR_2 = VAR_0->idev;

 if (VAR_0->key_code >= 0) {

  FUNC_0(VAR_2, VAR_0->key_code & 0xff, 0);
  if (VAR_0->key_code >> 8)
   FUNC_0(VAR_2, VAR_0->key_code >> 8, 0);
 }

 VAR_0->key_code = VAR_1;
 if (VAR_1 >= 0) {

  FUNC_0(VAR_2, VAR_1 & 0xff, 1);
  if (VAR_1 >> 8)
   FUNC_0(VAR_2, VAR_1 >> 8, 1);
 }
 FUNC_1(VAR_2);
}
