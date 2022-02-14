
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; int device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct sony_sc *VAR_4)
{
 int VAR_5;





 if ((VAR_4->quirks & VAR_2) ||
     (VAR_4->quirks & VAR_0)) {
  VAR_5 = FUNC_0(&VAR_3, 0, 0,
     VAR_1);
  if (VAR_5 < 0) {
   VAR_4->device_id = -1;
   return VAR_5;
  }
  VAR_4->device_id = VAR_5;
 } else {
  VAR_4->device_id = -1;
 }

 return 0;
}
