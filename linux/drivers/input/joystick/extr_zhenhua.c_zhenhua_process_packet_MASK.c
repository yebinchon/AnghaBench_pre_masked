
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zhenhua {unsigned char* data; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,unsigned char) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct zhenhua *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->dev;
 unsigned char *VAR_6 = VAR_4->data;

 FUNC_0(VAR_5, VAR_2, VAR_6[1]);
 FUNC_0(VAR_5, VAR_1, VAR_6[2]);
 FUNC_0(VAR_5, VAR_0, VAR_6[3]);
 FUNC_0(VAR_5, VAR_3, VAR_6[4]);

 FUNC_1(VAR_5);
}
