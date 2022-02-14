
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kprobe*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct kprobe*) ;

int FUNC_3(struct kprobe *VAR_2)
{
 if ((unsigned long) VAR_2->addr & 0x01)
  return -VAR_0;

 if (FUNC_1(VAR_2->addr))
  return -VAR_0;
 if (FUNC_2(VAR_2))
  return -VAR_1;
 FUNC_0(VAR_2);
 return 0;
}
