
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_keymap_entry {int flags; unsigned int index; } ;
struct hid_usage {int dummy; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 struct hid_usage* FUNC_0 (struct hid_device*,int ,unsigned int,unsigned int*) ;
 scalar_t__ FUNC_1 (struct input_keymap_entry const*,unsigned int*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct hid_usage *FUNC_2(struct hid_device *VAR_3,
     const struct input_keymap_entry *VAR_4,
     unsigned int *VAR_5)
{
 struct hid_usage *VAR_6;
 unsigned int VAR_7;

 if (VAR_4->flags & VAR_0)
  VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_4->index, VAR_5);
 else if (FUNC_1(VAR_4, &VAR_7) == 0)
  VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_7, VAR_5);
 else
  VAR_6 = ((void*)0);

 return VAR_6;
}
