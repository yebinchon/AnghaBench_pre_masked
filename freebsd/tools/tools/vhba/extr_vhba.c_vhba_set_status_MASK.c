
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int status; int path; } ;
typedef int cam_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

void
FUNC_1(struct ccb_hdr *VAR_3, cam_status VAR_4)
{
 VAR_3->status &= ~VAR_2;
 VAR_3->status |= VAR_4;
 if (VAR_4 != VAR_1) {
  if ((VAR_3->status & VAR_0) == 0) {
   VAR_3->status |= VAR_0;
   FUNC_0(VAR_3->path, 1);
  }
 }
}
