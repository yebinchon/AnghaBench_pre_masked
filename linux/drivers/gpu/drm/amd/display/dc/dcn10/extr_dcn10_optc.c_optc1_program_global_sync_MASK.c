
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int vready_offset; int vstartup_start; int vupdate_offset; int vupdate_width; } ;


 int FUNC_0 () ;
 struct optc* FUNC_1 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(
  struct timing_generator *VAR_7,
  int VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11)
{
 struct optc *VAR_12 = FUNC_1(VAR_7);

 VAR_12->vready_offset = VAR_8;
 VAR_12->vstartup_start = VAR_9;
 VAR_12->vupdate_offset = VAR_10;
 VAR_12->vupdate_width = VAR_11;

 if (VAR_12->vstartup_start == 0) {
  FUNC_0();
  return;
 }

 FUNC_2(VAR_1, 0,
  VAR_4, VAR_12->vstartup_start);

 FUNC_3(VAR_2, 0,
   VAR_5, VAR_12->vupdate_offset,
   VAR_6, VAR_12->vupdate_width);

 FUNC_2(VAR_0, 0,
   VAR_3, VAR_12->vready_offset);
}
