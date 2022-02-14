
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int err; struct switch_attr* attr; scalar_t__ len; int value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int atype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,struct switch_val*) ;

int
FUNC_2(struct switch_dev *VAR_6, struct switch_attr *VAR_7, struct switch_val *VAR_8)
{
 int VAR_9;
 int VAR_10;

 switch(VAR_7->atype) {
 case 130:
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_8->value, 0, sizeof(VAR_8->value));
 VAR_8->len = 0;
 VAR_8->attr = VAR_7;
 VAR_8->err = -VAR_0;
 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_4, VAR_8);
 if (!VAR_10)
  VAR_10 = VAR_8->err;

 return VAR_10;
}
