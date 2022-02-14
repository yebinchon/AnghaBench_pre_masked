
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ rc_num_split_allocs; } ;
struct tcp_bbr {int alloc_limit_reported; TYPE_1__ r_ctl; } ;
struct bbr_sendmap {scalar_t__ r_limit_type; } ;


 int FUNC_0 (int ) ;
 struct bbr_sendmap* FUNC_1 (struct tcp_bbr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct bbr_sendmap *
FUNC_2(struct tcp_bbr *VAR_3, uint8_t VAR_4)
{
 struct bbr_sendmap *VAR_5;

 if (VAR_4) {

  if (VAR_2 > 0 &&
      VAR_3->r_ctl.rc_num_split_allocs >= VAR_2) {
   FUNC_0(VAR_1);
   if (!VAR_3->alloc_limit_reported) {
    VAR_3->alloc_limit_reported = 1;
    FUNC_0(VAR_0);
   }
   return (((void*)0));
  }
 }


 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 != ((void*)0) && VAR_4) {
  VAR_5->r_limit_type = VAR_4;
  VAR_3->r_ctl.rc_num_split_allocs++;
 }
 return (VAR_5);
}
