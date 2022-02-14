
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t util_state; int libassist; int maj_flt; int min_flt; int hash_flt; int invol_ctx_switch; int vol_ctx_switch; } ;
struct spu_context {TYPE_1__ stats; } ;
struct seq_file {struct spu_context* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*,int ) ;
 int FUNC_4 (struct spu_context*) ;
 int FUNC_5 (struct spu_context*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_5, void *VAR_6)
{
 struct spu_context *VAR_7 = VAR_5->private;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_5, "%s %llu %llu %llu %llu "
        "%llu %llu %llu %llu %llu %llu %llu %llu\n",
  VAR_4[VAR_7->stats.util_state],
  FUNC_3(VAR_7, VAR_3),
  FUNC_3(VAR_7, VAR_2),
  FUNC_3(VAR_7, VAR_1),
  FUNC_3(VAR_7, VAR_0),
  VAR_7->stats.vol_ctx_switch,
  VAR_7->stats.invol_ctx_switch,
  FUNC_5(VAR_7),
  VAR_7->stats.hash_flt,
  VAR_7->stats.min_flt,
  VAR_7->stats.maj_flt,
  FUNC_4(VAR_7),
  VAR_7->stats.libassist);
 FUNC_2(VAR_7);
 return 0;
}
