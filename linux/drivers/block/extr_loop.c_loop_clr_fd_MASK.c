
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {scalar_t__ lo_state; int lo_flags; int lo_refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct loop_device*,int) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct loop_device *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4);
 if (VAR_6)
  return VAR_6;
 if (VAR_5->lo_state != VAR_2) {
  FUNC_3(&VAR_4);
  return -VAR_0;
 }
 if (FUNC_1(&VAR_5->lo_refcnt) > 1) {
  VAR_5->lo_flags |= VAR_1;
  FUNC_3(&VAR_4);
  return 0;
 }
 VAR_5->lo_state = VAR_3;
 FUNC_3(&VAR_4);

 return FUNC_0(VAR_5, 0);
}
