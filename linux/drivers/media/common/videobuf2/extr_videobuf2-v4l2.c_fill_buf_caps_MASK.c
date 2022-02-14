
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vb2_queue {int io_modes; scalar_t__ supports_requests; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct vb2_queue *VAR_8, u32 *VAR_9)
{
 *VAR_9 = VAR_2;
 if (VAR_8->io_modes & VAR_6)
  *VAR_9 |= VAR_1;
 if (VAR_8->io_modes & VAR_7)
  *VAR_9 |= VAR_4;
 if (VAR_8->io_modes & VAR_5)
  *VAR_9 |= VAR_0;




}
