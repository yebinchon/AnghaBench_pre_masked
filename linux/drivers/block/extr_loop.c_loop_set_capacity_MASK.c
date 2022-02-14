
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; int lo_sizelimit; int lo_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct loop_device*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct loop_device *VAR_2)
{
 if (FUNC_1(VAR_2->lo_state != VAR_1))
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_2->lo_offset, VAR_2->lo_sizelimit);
}
