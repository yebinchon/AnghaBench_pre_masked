
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; int use_dio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct loop_device*,int) ;

__attribute__((used)) static int FUNC_1(struct loop_device *VAR_3, unsigned long VAR_4)
{
 int VAR_5 = -VAR_1;
 if (VAR_3->lo_state != VAR_2)
  goto out;

 FUNC_0(VAR_3, !!VAR_4);
 if (VAR_3->use_dio == !!VAR_4)
  return 0;
 VAR_5 = -VAR_0;
 out:
 return VAR_5;
}
