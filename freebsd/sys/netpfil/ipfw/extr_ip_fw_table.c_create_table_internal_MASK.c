
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct tid_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ subtype; int kidx; int refcnt; int etlv; } ;
struct table_config {int locked; TYPE_1__ no; int limit; int vmask; } ;
struct table_algo {int flags; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {int flags; int limit; int vmask; int tflags; } ;
typedef TYPE_2__ ipfw_xtable_info ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int VAR_6 ;
 struct table_config* FUNC_4 (struct ip_fw_chain*,struct tid_info*,struct table_algo*,char*,int ) ;
 struct table_config* FUNC_5 (struct namedobj_instance*,struct tid_info*) ;
 struct table_algo* FUNC_6 (int ,struct tid_info*,char*) ;
 int FUNC_7 (struct namedobj_instance*,struct table_config*) ;
 scalar_t__ FUNC_8 (struct namedobj_instance*,int *) ;
 int FUNC_9 (struct ip_fw_chain*,struct table_config*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(struct ip_fw_chain *VAR_7, struct tid_info *VAR_8,
    char *VAR_9, ipfw_xtable_info *VAR_10, uint16_t *VAR_11, int VAR_12)
{
 struct namedobj_instance *VAR_13;
 struct table_config *VAR_14, *VAR_15, *VAR_16;
 struct table_algo *VAR_17;
 uint16_t VAR_18;

 VAR_13 = FUNC_0(VAR_7);

 VAR_17 = FUNC_6(FUNC_1(VAR_7), VAR_8, VAR_9);
 if (VAR_17 == ((void*)0))
  return (VAR_3);

 VAR_14 = FUNC_4(VAR_7, VAR_8, VAR_17, VAR_9, VAR_10->tflags);
 if (VAR_14 == ((void*)0))
  return (VAR_2);

 VAR_14->vmask = VAR_10->vmask;
 VAR_14->limit = VAR_10->limit;
 if (VAR_17->flags & VAR_6)
  VAR_14->locked = 1;
 else
  VAR_14->locked = (VAR_10->flags & VAR_4) != 0;

 FUNC_2(VAR_7);


 VAR_15 = FUNC_5(VAR_13, VAR_8);
 if (VAR_15 != ((void*)0)) {






  if (VAR_12 == 0 || VAR_15->no.subtype != VAR_14->no.subtype) {
   FUNC_3(VAR_7);
   FUNC_7(VAR_13, VAR_14);
   return (VAR_1);
  }


  VAR_16 = VAR_14;
  VAR_14 = VAR_15;
  VAR_15 = VAR_16;
 } else {

  if (FUNC_8(VAR_13, &VAR_18) != 0) {
   FUNC_3(VAR_7);
   FUNC_10("Unable to allocate table index."
       " Consider increasing net.inet.ip.fw.tables_max");
   FUNC_7(VAR_13, VAR_14);
   return (VAR_0);
  }
  VAR_14->no.kidx = VAR_18;
  VAR_14->no.etlv = VAR_5;

  FUNC_9(VAR_7, VAR_14);
 }

 if (VAR_12 != 0)
  VAR_14->no.refcnt++;
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_14->no.kidx;

 FUNC_3(VAR_7);

 if (VAR_15 != ((void*)0))
  FUNC_7(VAR_13, VAR_15);

 return (0);
}
