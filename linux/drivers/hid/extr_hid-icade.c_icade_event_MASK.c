
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icade_key {int press; int to; } ;
struct hid_usage {int hid; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct icade_key* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_2, struct hid_field *VAR_3,
  struct hid_usage *VAR_4, __s32 VAR_5)
{
 const struct icade_key *VAR_6;

 if (!(VAR_2->claimed & VAR_0) || !VAR_3->hidinput ||
   !VAR_4->type)
  return 0;


 if (!VAR_5)
  return 1;

 VAR_6 = FUNC_0(VAR_4->hid & VAR_1);

 if (!VAR_6)
  return 1;

 FUNC_1(VAR_3->hidinput->input, VAR_4->type,
   VAR_6->to, VAR_6->press);

 return 1;
}
