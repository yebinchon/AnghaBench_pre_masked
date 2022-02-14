
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zs_size; scalar_t__ zs_roffset; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct s_zstate {int zs_in_count; int * zs_fp; TYPE_2__ u; scalar_t__ zs_out_count; int zs_checkpoint; scalar_t__ zs_ratio; scalar_t__ zs_clear_flg; int zs_block_compress; scalar_t__ zs_free_ent; int zs_hsize; int zs_state; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s_zstate* FUNC_0 (int,int) ;
 int * FUNC_1 (int,char*) ;
 int FUNC_2 (struct s_zstate*) ;
 int * FUNC_3 (struct s_zstate*,int ,int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

FILE *
FUNC_4(int VAR_6)
{
 struct s_zstate *VAR_7;

 if ((VAR_7 = FUNC_0(1, sizeof(struct s_zstate))) == ((void*)0))
  return (((void*)0));

 VAR_7->zs_state = VAR_3;


 VAR_7->zs_hsize = VAR_2;
 VAR_7->zs_free_ent = 0;
 VAR_7->zs_block_compress = VAR_0;
 VAR_7->zs_clear_flg = 0;
 VAR_7->zs_ratio = 0;
 VAR_7->zs_checkpoint = VAR_1;
 VAR_7->zs_in_count = 1;
 VAR_7->zs_out_count = 0;
 VAR_7->u.r.zs_roffset = 0;
 VAR_7->u.r.zs_size = 0;





 if ((VAR_7->zs_fp = FUNC_1(VAR_6, "r")) == ((void*)0)) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 return FUNC_3(VAR_7, VAR_5, ((void*)0), ((void*)0), VAR_4);
}
