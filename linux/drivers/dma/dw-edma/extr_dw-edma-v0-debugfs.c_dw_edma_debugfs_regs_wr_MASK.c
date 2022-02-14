
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


struct dentry {int dummy; } ;
struct debugfs_entries {int dummy; } ;
typedef int name ;
struct TYPE_12__ {scalar_t__ mode; int wr_ch_cnt; } ;
struct TYPE_11__ {int * end; int * start; } ;
struct TYPE_8__ {TYPE_1__* ch; } ;
struct TYPE_9__ {TYPE_2__ unroll; } ;
struct TYPE_10__ {TYPE_3__ type; } ;
struct TYPE_7__ {int * padding_1; int wr; } ;


 int FUNC_0 (struct debugfs_entries const*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 struct debugfs_entries const FUNC_1 (int ) ;
 struct debugfs_entries const FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct dentry* FUNC_3 (char*,struct dentry*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_6__* VAR_22 ;
 int FUNC_4 (struct debugfs_entries const*,int,struct dentry*) ;
 int FUNC_5 (int *,struct dentry*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_5__** VAR_31 ;
 int VAR_32 ;
 TYPE_4__* VAR_33 ;
 int FUNC_6 (char*,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_7(struct dentry *VAR_34)
{
 const struct debugfs_entries VAR_35[] = {

  FUNC_1(VAR_24),
  FUNC_1(VAR_21),
  FUNC_1(VAR_18),
  FUNC_1(VAR_17),

  FUNC_1(VAR_30),
  FUNC_1(VAR_29),
  FUNC_1(VAR_28),
  FUNC_1(VAR_27),
  FUNC_1(VAR_20),
  FUNC_1(VAR_19),
  FUNC_1(VAR_4),
  FUNC_1(VAR_3),
  FUNC_1(VAR_5),
  FUNC_1(VAR_8),
  FUNC_1(VAR_11),
  FUNC_1(VAR_14),
  FUNC_1(VAR_32),
 };
 const struct debugfs_entries VAR_36[] = {

  FUNC_2(VAR_23),
  FUNC_2(VAR_26),
  FUNC_2(VAR_25),
  FUNC_2(VAR_6),
  FUNC_2(VAR_7),
  FUNC_2(VAR_9),
  FUNC_2(VAR_10),
  FUNC_2(VAR_12),
  FUNC_2(VAR_13),
  FUNC_2(VAR_15),
  FUNC_2(VAR_16),
 };
 struct dentry *VAR_37, *VAR_38;
 int VAR_39, VAR_40;
 char VAR_41[16];

 VAR_37 = FUNC_3(VAR_2, VAR_34);
 if (!VAR_37)
  return;

 VAR_39 = FUNC_0(VAR_35);
 FUNC_4(VAR_35, VAR_39, VAR_37);

 if (VAR_22->mode == VAR_1) {
  VAR_39 = FUNC_0(VAR_36);
  FUNC_4(VAR_36, VAR_39,
        VAR_37);
 }

 for (VAR_40 = 0; VAR_40 < VAR_22->wr_ch_cnt; VAR_40++) {
  FUNC_6(VAR_41, sizeof(VAR_41), "%s:%d", VAR_0, VAR_40);

  VAR_38 = FUNC_3(VAR_41, VAR_37);
  if (!VAR_38)
   return;

  FUNC_5(&VAR_33->type.unroll.ch[VAR_40].wr, VAR_38);

  VAR_31[0][VAR_40].start = &VAR_33->type.unroll.ch[VAR_40].wr;
  VAR_31[0][VAR_40].end = &VAR_33->type.unroll.ch[VAR_40].padding_1[0];
 }
}
