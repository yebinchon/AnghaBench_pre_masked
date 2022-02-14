
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_preparsed_payload {int datalen; int data; } ;
typedef enum key_being_used_for { ____Placeholder_key_being_used_for } key_being_used_for ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int,int ,struct key_preparsed_payload*) ;

__attribute__((used)) static int FUNC_2(struct key_preparsed_payload *VAR_5)
{
 enum key_being_used_for VAR_6 = VAR_3;

 if (VAR_6 >= VAR_1) {
  FUNC_0("Invalid usage type %d\n", VAR_6);
  return -VAR_0;
 }

 return FUNC_1(((void*)0), 0,
          VAR_5->data, VAR_5->datalen,
          VAR_2, VAR_6,
          VAR_4, VAR_5);
}
