
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int device_id; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct sony_sc *VAR_1)
{
 if (VAR_1->device_id >= 0) {
  FUNC_0(&VAR_0, VAR_1->device_id);
  VAR_1->device_id = -1;
 }
}
