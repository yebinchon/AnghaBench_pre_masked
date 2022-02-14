
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int magic; struct msg_part* first; } ;
struct msg_part {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct raw_message*,int ,int) ;
 int FUNC_2 (struct msg_part*) ;
 int VAR_2 ;

int FUNC_3 (struct raw_message *VAR_3) {
  struct msg_part *VAR_4 = VAR_3->first;
  int VAR_5 = VAR_3->magic;
  FUNC_0 (VAR_3->magic == VAR_0 || VAR_3->magic == VAR_1);
  VAR_2 --;
  FUNC_1 (VAR_3, 0, sizeof (*VAR_3));
  return VAR_5 == VAR_1 ? 0 : FUNC_2 (VAR_4);
}
