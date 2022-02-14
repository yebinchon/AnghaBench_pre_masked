
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ims_pcu {scalar_t__ gamepad; int * read_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ims_pcu*,int) ;
 int FUNC_2 (struct ims_pcu*,int) ;

__attribute__((used)) static void FUNC_3(struct ims_pcu *VAR_1)
{
 u32 VAR_2 = FUNC_0(&VAR_1->read_buf[3]);

 FUNC_1(VAR_1, VAR_2 & ~VAR_0);
 if (VAR_1->gamepad)
  FUNC_2(VAR_1, VAR_2);
}
