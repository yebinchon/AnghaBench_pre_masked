
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_seg_set_psv {void* ref_tag; void* transient_sig; void* psv_num; } ;
struct TYPE_3__ {int bg; int app_tag; int ref_tag; } ;
struct TYPE_4__ {TYPE_1__ dif; } ;
struct ib_sig_domain {int sig_type; TYPE_2__ sig; } ;


 int VAR_0 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_seg_set_psv*,int ,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct ib_sig_domain *VAR_1,
        u32 VAR_2, void **VAR_3, int *VAR_4)
{
 struct mlx5_seg_set_psv *VAR_5 = *VAR_3;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->psv_num = FUNC_0(VAR_2);
 switch (VAR_1->sig_type) {
 case 129:
  break;
 case 128:
  VAR_5->transient_sig = FUNC_0(VAR_1->sig.dif.bg << 16 |
           VAR_1->sig.dif.app_tag);
  VAR_5->ref_tag = FUNC_0(VAR_1->sig.dif.ref_tag);
  break;
 default:
  FUNC_2("Bad signature type (%d) is given.\n",
         VAR_1->sig_type);
  return -VAR_0;
 }

 *VAR_3 += sizeof(*VAR_5);
 *VAR_4 += sizeof(*VAR_5) / 16;

 return 0;
}
