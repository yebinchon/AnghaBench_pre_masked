
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct loop_device* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,struct loop_device**) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct loop_device **VAR_3, int VAR_4)
{
 struct loop_device *VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_4 < 0) {
  int VAR_7;

  VAR_7 = FUNC_1(&VAR_2, &VAR_1, &VAR_5);
  if (VAR_7 == 1) {
   *VAR_3 = VAR_5;
   VAR_6 = VAR_5->lo_number;
  }
  goto out;
 }


 VAR_5 = FUNC_0(&VAR_2, VAR_4);
 if (VAR_5) {
  *VAR_3 = VAR_5;
  VAR_6 = VAR_5->lo_number;
 }
out:
 return VAR_6;
}
