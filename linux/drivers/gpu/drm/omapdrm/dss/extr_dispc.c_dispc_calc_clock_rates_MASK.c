
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int dummy; } ;
struct dispc_clock_info {int lck_div; int pck_div; unsigned long lck; int pck; } ;


 int VAR_0 ;

int FUNC_0(struct dispc_device *VAR_1,
      unsigned long VAR_2,
      struct dispc_clock_info *VAR_3)
{
 if (VAR_3->lck_div > 255 || VAR_3->lck_div == 0)
  return -VAR_0;
 if (VAR_3->pck_div < 1 || VAR_3->pck_div > 255)
  return -VAR_0;

 VAR_3->lck = VAR_2 / VAR_3->lck_div;
 VAR_3->pck = VAR_3->lck / VAR_3->pck_div;

 return 0;
}
