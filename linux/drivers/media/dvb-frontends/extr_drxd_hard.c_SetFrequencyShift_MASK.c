
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drxd_state {int tuner_mirrors; int fe_fs_add_incr; int org_fe_fs_add_incr; int sys_clock_freq; scalar_t__ intermediate_freq; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_1,
        u32 VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_1->tuner_mirrors == VAR_3);
 VAR_1->fe_fs_add_incr = FUNC_0(VAR_1->intermediate_freq +
      VAR_2,
      1 << 28, VAR_1->sys_clock_freq);

 VAR_1->fe_fs_add_incr &= 0x0FFFFFFFL;
 if (VAR_4)
  VAR_1->fe_fs_add_incr = ((1 << 28) - VAR_1->fe_fs_add_incr);



 VAR_1->org_fe_fs_add_incr = FUNC_0(VAR_1->intermediate_freq,
          1 << 28, VAR_1->sys_clock_freq);

 VAR_1->org_fe_fs_add_incr &= 0x0FFFFFFFL;
 if (VAR_4)
  VAR_1->org_fe_fs_add_incr = ((1L << 28) -
          VAR_1->org_fe_fs_add_incr);

 return FUNC_1(VAR_1, VAR_0,
         VAR_1->fe_fs_add_incr, 0);
}
