
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_timeline {int dummy; } ;
struct file {struct sync_timeline* private_data; } ;


 long VAR_0 ;


 long FUNC_0 (struct sync_timeline*,unsigned long) ;
 long FUNC_1 (struct sync_timeline*,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned int VAR_2,
     unsigned long VAR_3)
{
 struct sync_timeline *VAR_4 = VAR_1->private_data;

 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_4, VAR_3);

 case 128:
  return FUNC_1(VAR_4, VAR_3);

 default:
  return -VAR_0;
 }
}
