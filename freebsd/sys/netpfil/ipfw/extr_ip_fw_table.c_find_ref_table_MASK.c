
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tid_info {scalar_t__ type; } ;
struct tentry_info {int flags; } ;
struct TYPE_2__ {scalar_t__ subtype; int refcnt; } ;
struct table_config {scalar_t__ locked; TYPE_1__ no; } ;
struct namedobj_instance {int dummy; } ;
struct ip_fw_chain {int dummy; } ;


 struct namedobj_instance* FUNC_0 (struct ip_fw_chain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (struct ip_fw_chain*) ;
 int FUNC_3 (struct ip_fw_chain*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct table_config*,struct tentry_info*) ;
 int FUNC_6 (struct ip_fw_chain*,struct tid_info*,int *) ;
 struct table_config* FUNC_7 (struct namedobj_instance*,struct tid_info*) ;
 scalar_t__ FUNC_8 (struct namedobj_instance*,int ) ;

__attribute__((used)) static int
FUNC_9(struct ip_fw_chain *VAR_7, struct tid_info *VAR_8,
    struct tentry_info *VAR_9, uint32_t VAR_10, int VAR_11,
    struct table_config **VAR_12)
{
 struct namedobj_instance *VAR_13;
 struct table_config *VAR_14;
 uint16_t VAR_15;
 int VAR_16;

 FUNC_2(VAR_7);

 VAR_13 = FUNC_0(VAR_7);
 VAR_14 = ((void*)0);
 if ((VAR_14 = FUNC_7(VAR_13, VAR_8)) != ((void*)0)) {

  if (VAR_14->no.subtype != VAR_8->type)
   return (VAR_2);

  if (VAR_14->locked != 0)
   return (VAR_0);


  if (VAR_11 == VAR_4 && VAR_10 == 1 &&
      FUNC_5(VAR_14, VAR_9) != 0)
   return (VAR_1);


  VAR_14->no.refcnt++;
  *VAR_12 = VAR_14;
  return (0);
 }

 if (VAR_11 == VAR_5)
  return (VAR_3);


 if ((VAR_9->flags & VAR_6) == 0)
  return (VAR_3);

 FUNC_3(VAR_7);
 VAR_16 = FUNC_6(VAR_7, VAR_8, &VAR_15);
 FUNC_1(VAR_7);

 if (VAR_16 != 0)
  return (VAR_16);

 VAR_14 = (struct table_config *)FUNC_8(VAR_13, VAR_15);
 FUNC_4(VAR_14 != ((void*)0), ("create_table_compat returned bad idx %d", VAR_15));


 *VAR_12 = VAR_14;
 return (0);
}
