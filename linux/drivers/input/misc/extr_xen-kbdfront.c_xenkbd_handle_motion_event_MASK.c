
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_motion {int rel_x; int rel_y; int rel_z; } ;
struct xenkbd_info {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct xenkbd_info *VAR_3,
           struct xenkbd_motion *VAR_4)
{
 if (FUNC_2(!VAR_3->ptr))
  return;

 FUNC_0(VAR_3->ptr, VAR_1, VAR_4->rel_x);
 FUNC_0(VAR_3->ptr, VAR_2, VAR_4->rel_y);
 if (VAR_4->rel_z)
  FUNC_0(VAR_3->ptr, VAR_0, -VAR_4->rel_z);
 FUNC_1(VAR_3->ptr);
}
