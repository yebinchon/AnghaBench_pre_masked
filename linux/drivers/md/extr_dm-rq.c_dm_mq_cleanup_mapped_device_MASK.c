
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {scalar_t__ tag_set; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct mapped_device *VAR_0)
{
 if (VAR_0->tag_set) {
  FUNC_0(VAR_0->tag_set);
  FUNC_1(VAR_0->tag_set);
 }
}
