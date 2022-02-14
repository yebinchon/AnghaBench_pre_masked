
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw_message*,int ,int) ;
 int FUNC_1 (struct raw_message*,void*,int) ;
 int VAR_1 ;

int FUNC_2 (struct raw_message *VAR_2, void *VAR_3, int VAR_4) {
  VAR_1 ++;
  FUNC_0 (VAR_2, 0, sizeof (*VAR_2));
  VAR_2->magic = VAR_0;
  return FUNC_1 (VAR_2, VAR_3, VAR_4);
}
