
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenkbd_position {int rel_z; int abs_y; int abs_x; } ;
struct xenkbd_info {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct xenkbd_info *VAR_3,
      struct xenkbd_position *VAR_4)
{
 if (FUNC_3(!VAR_3->ptr))
  return;

 FUNC_0(VAR_3->ptr, VAR_0, VAR_4->abs_x);
 FUNC_0(VAR_3->ptr, VAR_1, VAR_4->abs_y);
 if (VAR_4->rel_z)
  FUNC_1(VAR_3->ptr, VAR_2, -VAR_4->rel_z);
 FUNC_2(VAR_3->ptr);
}
