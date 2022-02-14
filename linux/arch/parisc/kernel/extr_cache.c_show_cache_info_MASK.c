
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_10__ {int num_comb; int num_d; int num_i; } ;
struct TYPE_9__ {int num_comb; int num_d; int num_i; } ;
struct TYPE_12__ {int max_size; TYPE_4__ variable_range_info; TYPE_3__ fixed_range_info; } ;
struct TYPE_8__ {scalar_t__ tc_sh; } ;
struct TYPE_7__ {scalar_t__ cc_sh; scalar_t__ cc_wt; } ;
struct TYPE_11__ {int ic_size; int dc_loop; int dc_size; TYPE_2__ dt_conf; int dt_size; int it_size; TYPE_1__ dc_conf; } ;


 TYPE_6__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (char*,int,char*,int) ;

void
FUNC_2(struct seq_file *VAR_2)
{
 char VAR_3[32];

 FUNC_0(VAR_2, "I-cache\t\t: %ld KB\n",
  VAR_1.ic_size/1024 );
 if (VAR_1.dc_loop != 1)
  FUNC_1(VAR_3, 32, "%lu-way associative", VAR_1.dc_loop);
 FUNC_0(VAR_2, "D-cache\t\t: %ld KB (%s%s, %s)\n",
  VAR_1.dc_size/1024,
  (VAR_1.dc_conf.cc_wt ? "WT":"WB"),
  (VAR_1.dc_conf.cc_sh ? ", shared I/D":""),
  ((VAR_1.dc_loop == 1) ? "direct mapped" : VAR_3));
 FUNC_0(VAR_2, "ITLB entries\t: %ld\n" "DTLB entries\t: %ld%s\n",
  VAR_1.it_size,
  VAR_1.dt_size,
  VAR_1.dt_conf.tc_sh ? " - shared with ITLB":""
 );



 if (VAR_0.max_size==0) {
  FUNC_0(VAR_2, "BTLB\t\t: not supported\n" );
 } else {
  FUNC_0(VAR_2,
  "BTLB fixed\t: max. %d pages, pagesize=%d (%dMB)\n"
  "BTLB fix-entr.\t: %d instruction, %d data (%d combined)\n"
  "BTLB var-entr.\t: %d instruction, %d data (%d combined)\n",
  VAR_0.max_size, (int)4096,
  VAR_0.max_size>>8,
  VAR_0.fixed_range_info.num_i,
  VAR_0.fixed_range_info.num_d,
  VAR_0.fixed_range_info.num_comb,
  VAR_0.variable_range_info.num_i,
  VAR_0.variable_range_info.num_d,
  VAR_0.variable_range_info.num_comb
  );
 }

}
