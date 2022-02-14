
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_sizelimit; int lo_offset; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (int ,int ,struct file*) ;

__attribute__((used)) static loff_t FUNC_1(struct loop_device *VAR_0, struct file *VAR_1)
{
 return FUNC_0(VAR_0->lo_offset, VAR_0->lo_sizelimit, VAR_1);
}
