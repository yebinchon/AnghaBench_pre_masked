
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icade_key {int to; } ;
struct hid_usage {int hid; } ;
struct hid_input {TYPE_1__* input; } ;
struct hid_field {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hid_input*,struct hid_usage*,unsigned long**,int*,int ,int ) ;
 struct icade_key* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4, struct hid_input *VAR_5,
  struct hid_field *VAR_6, struct hid_usage *VAR_7,
  unsigned long **VAR_8, int *VAR_9)
{
 const struct icade_key *VAR_10;

 if ((VAR_7->hid & VAR_3) == VAR_1) {
  VAR_10 = FUNC_1(VAR_7->hid & VAR_2);

  if (!VAR_10)
   return -1;

  FUNC_0(VAR_5, VAR_7, VAR_8, VAR_9, VAR_0, VAR_10->to);
  FUNC_2(VAR_10->to, VAR_5->input->keybit);

  return 1;
 }


 return -1;

}
