
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct key_entry {unsigned int code; int keycode; int type; } const key_entry ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key_entry const* FUNC_0 (struct input_dev*,unsigned int) ;
 int FUNC_1 (struct input_dev*,struct key_entry const*,unsigned int,int) ;

bool FUNC_2(struct input_dev *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, bool VAR_5)
{
 const struct key_entry *VAR_6 =
  FUNC_0(VAR_2, VAR_3);
 struct key_entry VAR_7;

 if (VAR_6) {
  FUNC_1(VAR_2, VAR_6, VAR_4, VAR_5);
  return 1;
 }


 VAR_7.type = VAR_1;
 VAR_7.code = VAR_3;
 VAR_7.keycode = VAR_0;
 FUNC_1(VAR_2, &VAR_7, VAR_4, 1);

 return 0;
}
