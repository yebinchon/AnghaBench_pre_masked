
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct block_device* private_data; } ;
struct block_device {int dummy; } ;


 long FUNC_0 (struct block_device*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static long
FUNC_1(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 struct block_device *VAR_3 = VAR_0->private_data;
 return FUNC_0(VAR_3, 0, VAR_1, VAR_2);
}
