
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vupdate_keepout_params {int enable; int end_offset; int start_offset; } ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(struct timing_generator *VAR_4,
     const struct vupdate_keepout_params *VAR_5)
{
 struct optc *VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_3, 0,
  VAR_1, VAR_5->start_offset,
  VAR_0, VAR_5->end_offset,
  VAR_2, VAR_5->enable);
}
