
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int match; int ** attrs; int * class; } ;
struct TYPE_7__ {TYPE_1__ ac; } ;
struct scsi_transport_template {TYPE_2__ host_attrs; int user_scan; int eh_strategy_handler; } ;
struct ata_internal {struct scsi_transport_template t; int ** dev_attrs; int ** link_attrs; int ** port_attrs; TYPE_2__ dev_attr_cont; TYPE_2__ link_attr_cont; } ;
struct TYPE_10__ {int class; } ;
struct TYPE_9__ {int class; } ;
struct TYPE_8__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__ VAR_6 ;
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
 struct ata_internal* FUNC_4 (int,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_25 ;
 int VAR_26 ;

struct scsi_transport_template *FUNC_6(void)
{
 struct ata_internal *VAR_27;
 int VAR_28;

 VAR_27 = FUNC_4(sizeof(struct ata_internal), VAR_3);
 if (!VAR_27)
  return ((void*)0);

 VAR_27->t.eh_strategy_handler = VAR_7;
 VAR_27->t.user_scan = VAR_8;

 VAR_27->t.host_attrs.ac.attrs = &VAR_27->port_attrs[0];
 VAR_27->t.host_attrs.ac.class = &VAR_6.class;
 VAR_27->t.host_attrs.ac.match = VAR_11;
 FUNC_5(&VAR_27->t.host_attrs);

 VAR_27->link_attr_cont.ac.class = &VAR_5.class;
 VAR_27->link_attr_cont.ac.attrs = &VAR_27->link_attrs[0];
 VAR_27->link_attr_cont.ac.match = VAR_10;
 FUNC_5(&VAR_27->link_attr_cont);

 VAR_27->dev_attr_cont.ac.class = &VAR_4.class;
 VAR_27->dev_attr_cont.ac.attrs = &VAR_27->dev_attrs[0];
 VAR_27->dev_attr_cont.ac.match = VAR_9;
 FUNC_5(&VAR_27->dev_attr_cont);

 VAR_28 = 0;
 FUNC_3(VAR_19);
 FUNC_3(VAR_18);
 FUNC_3(VAR_21);
 FUNC_0(VAR_28 > VAR_2);
 VAR_27->port_attrs[VAR_28] = ((void*)0);

 VAR_28 = 0;
 FUNC_2(VAR_16);
 FUNC_2(VAR_23);
 FUNC_2(VAR_22);
 FUNC_0(VAR_28 > VAR_1);
 VAR_27->link_attrs[VAR_28] = ((void*)0);

 VAR_28 = 0;
 FUNC_1(VAR_12);
 FUNC_1(VAR_20);
 FUNC_1(VAR_13);
 FUNC_1(VAR_26);
 FUNC_1(VAR_24);
 FUNC_1(VAR_14);
 FUNC_1(VAR_17);
 FUNC_1(VAR_15);
 FUNC_1(VAR_25);
 FUNC_0(VAR_28 > VAR_0);
 VAR_27->dev_attrs[VAR_28] = ((void*)0);

 return &VAR_27->t;
}
