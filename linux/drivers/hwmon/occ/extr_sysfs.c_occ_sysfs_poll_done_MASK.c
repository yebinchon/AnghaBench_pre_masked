
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_9__ ;
typedef struct TYPE_49__ TYPE_8__ ;
typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_25__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_23__ ;
typedef struct TYPE_39__ TYPE_22__ ;
typedef struct TYPE_38__ TYPE_21__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct occ_poll_response_header {int status; int ext_status; scalar_t__ occs_present; } ;
struct TYPE_36__ {scalar_t__ data; } ;
struct occ {int prev_stat; int prev_ext_stat; scalar_t__ prev_occs_present; scalar_t__ error; scalar_t__ prev_error; TYPE_17__* bus_dev; int hwmon; TYPE_1__ resp; } ;
struct TYPE_49__ {char* name; } ;
struct TYPE_50__ {TYPE_8__ attr; } ;
struct TYPE_47__ {char* name; } ;
struct TYPE_48__ {TYPE_6__ attr; } ;
struct TYPE_45__ {char* name; } ;
struct TYPE_46__ {TYPE_4__ attr; } ;
struct TYPE_43__ {char* name; } ;
struct TYPE_44__ {TYPE_2__ attr; } ;
struct TYPE_32__ {char* name; } ;
struct TYPE_42__ {TYPE_16__ attr; } ;
struct TYPE_41__ {TYPE_5__ dev_attr; } ;
struct TYPE_40__ {TYPE_7__ dev_attr; } ;
struct TYPE_39__ {TYPE_9__ dev_attr; } ;
struct TYPE_38__ {TYPE_3__ dev_attr; } ;
struct TYPE_26__ {char* name; } ;
struct TYPE_27__ {TYPE_10__ attr; } ;
struct TYPE_37__ {TYPE_11__ dev_attr; } ;
struct TYPE_28__ {char* name; } ;
struct TYPE_29__ {TYPE_12__ attr; } ;
struct TYPE_35__ {TYPE_13__ dev_attr; } ;
struct TYPE_30__ {char* name; } ;
struct TYPE_31__ {TYPE_14__ attr; } ;
struct TYPE_34__ {TYPE_15__ dev_attr; } ;
struct TYPE_33__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_25__ VAR_6 ;
 TYPE_24__ VAR_7 ;
 TYPE_23__ VAR_8 ;
 TYPE_22__ VAR_9 ;
 TYPE_21__ VAR_10 ;
 TYPE_20__ VAR_11 ;
 TYPE_19__ VAR_12 ;
 TYPE_18__ VAR_13 ;
 int FUNC_0 (int *,int *,char const*) ;

void FUNC_1(struct occ *VAR_14)
{
 const char *VAR_15;
 struct occ_poll_response_header *VAR_16 =
  (struct occ_poll_response_header *)VAR_14->resp.data;





 if (!VAR_14->hwmon)
  goto done;

 if ((VAR_16->status & VAR_5) !=
     (VAR_14->prev_stat & VAR_5)) {
  VAR_15 = VAR_10.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->status & VAR_4) !=
     (VAR_14->prev_stat & VAR_4)) {
  VAR_15 = VAR_7.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->ext_status & VAR_0) !=
     (VAR_14->prev_ext_stat & VAR_0)) {
  VAR_15 = VAR_8.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->ext_status & VAR_1) !=
     (VAR_14->prev_ext_stat & VAR_1)) {
  VAR_15 = VAR_9.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->ext_status & VAR_2) !=
     (VAR_14->prev_ext_stat & VAR_2)) {
  VAR_15 = VAR_11.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->ext_status & VAR_3) !=
     (VAR_14->prev_ext_stat & VAR_3)) {
  VAR_15 = VAR_12.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if ((VAR_16->status & VAR_5) &&
     VAR_16->occs_present != VAR_14->prev_occs_present) {
  VAR_15 = VAR_13.dev_attr.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }

 if (VAR_14->error && VAR_14->error != VAR_14->prev_error) {
  VAR_15 = VAR_6.attr.name;
  FUNC_0(&VAR_14->bus_dev->kobj, ((void*)0), VAR_15);
 }



done:
 VAR_14->prev_error = VAR_14->error;
 VAR_14->prev_stat = VAR_16->status;
 VAR_14->prev_ext_stat = VAR_16->ext_status;
 VAR_14->prev_occs_present = VAR_16->occs_present;
}
