
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decon_context {int out_type; scalar_t__ addr; int vblank_lock; scalar_t__ frame_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct decon_context*,int ,int,int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct decon_context *VAR_15)
{
 unsigned long VAR_16;
 u32 VAR_17;
 int VAR_18;

 FUNC_5(0, VAR_15->addr + VAR_7);
 FUNC_2(VAR_15->addr + VAR_7, VAR_17,
      ~VAR_17 & VAR_11, 12, 20000);

 FUNC_5(VAR_12, VAR_15->addr + VAR_7);
 VAR_18 = FUNC_2(VAR_15->addr + VAR_7, VAR_17,
     ~VAR_17 & VAR_12, 12, 20000);

 FUNC_0(VAR_18 < 0, "failed to software reset DECON\n");

 FUNC_3(&VAR_15->vblank_lock, VAR_16);
 VAR_15->frame_id = 0;
 FUNC_4(&VAR_15->vblank_lock, VAR_16);

 if (!(VAR_15->out_type & VAR_9))
  return;

 FUNC_5(VAR_10 | VAR_13, VAR_15->addr + VAR_7);
 FUNC_1(VAR_15, VAR_5,
         VAR_1 | VAR_0, ~0);
 FUNC_5(VAR_14, VAR_15->addr + VAR_8);
 FUNC_5(VAR_3 | VAR_4 | VAR_2,
        VAR_15->addr + VAR_6);
}
