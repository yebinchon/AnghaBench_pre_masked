
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_entry {int dummy; } ;
struct input_keymap_entry {int flags; int index; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct input_keymap_entry const*,unsigned int*) ;
 struct key_entry* FUNC_1 (struct input_dev*,int ) ;
 struct key_entry* FUNC_2 (struct input_dev*,unsigned int) ;

__attribute__((used)) static struct key_entry *FUNC_3(struct input_dev *VAR_1,
     const struct input_keymap_entry *VAR_2)
{
 struct key_entry *VAR_3;
 unsigned int VAR_4;

 if (VAR_2->flags & VAR_0)
  VAR_3 = FUNC_1(VAR_1, VAR_2->index);
 else if (FUNC_0(VAR_2, &VAR_4) == 0)
  VAR_3 = FUNC_2(VAR_1, VAR_4);
 else
  VAR_3 = ((void*)0);

 return VAR_3;
}
