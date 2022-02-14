
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dn_sch {int dummy; } ;
struct dn_profile {int dummy; } ;
struct dn_link {int dummy; } ;
struct dn_id {int subtype; } ;
struct dn_fs {int dummy; } ;
struct dn_flow {int dummy; } ;
struct copy_args {int flags; } ;
struct TYPE_2__ {int schk_count; int fsk_count; int queue_count; int si_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct dn_id *VAR_7, struct copy_args *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = sizeof(struct dn_profile) -
  VAR_5*sizeof(int);
 switch (VAR_7->subtype) {
 default:
  return -1;




 case 129:
  VAR_9 = VAR_2 | VAR_4 | VAR_0;
  VAR_10 += VAR_6.schk_count *
   (sizeof(struct dn_fs) + VAR_11) / 2;
  VAR_10 += VAR_6.fsk_count * sizeof(uint32_t);
  break;
 case 128:
  VAR_10 += VAR_6.schk_count *
   (sizeof(struct dn_fs) + VAR_11) / 2;
  VAR_10 += VAR_6.fsk_count * sizeof(uint32_t);
  VAR_9 = VAR_4 | VAR_2 | VAR_0;
  break;
 case 131:
  VAR_9 = VAR_1 | VAR_3;
  break;
 case 130:
  VAR_10 = FUNC_0();
  break;
 }
 VAR_8->flags = VAR_9;
 if (VAR_9 & VAR_4) {
  VAR_10 += VAR_6.schk_count * sizeof(struct dn_sch) / 2;

  VAR_10 += VAR_6.schk_count * sizeof(struct dn_id) / 2;
 }
 if (VAR_9 & VAR_1)
  VAR_10 += VAR_6.fsk_count * sizeof(struct dn_fs);
 if (VAR_9 & VAR_2) {
  VAR_10 += VAR_6.schk_count * sizeof(struct dn_link) / 2;
 }





 if (VAR_9 & VAR_3)
  VAR_10 += VAR_6.queue_count * sizeof(struct dn_flow);
 if (VAR_9 & VAR_0)
  VAR_10 += VAR_6.si_count * (sizeof(struct dn_flow));
 return VAR_10;
}
