
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct tid_info {int uidx; int tlen; int * tlvs; } ;
struct TYPE_4__ {scalar_t__ set; int subtype; int name; } ;
struct table_config {int vshared; int ti_copy; int astate; int tablename; struct table_algo* ta; int tflags; TYPE_1__ no; } ;
struct table_algo {int (* init ) (struct ip_fw_chain*,int *,int *,char*,int ) ;int type; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_5__ {char* name; scalar_t__ set; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;
typedef int bname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct table_config*,int ) ;
 TYPE_2__* FUNC_1 (int *,int ,int,int ) ;
 struct table_config* FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct ip_fw_chain*,int *,int *,char*,int ) ;

__attribute__((used)) static struct table_config *
FUNC_6(struct ip_fw_chain *VAR_5, struct tid_info *VAR_6,
    struct table_algo *VAR_7, char *VAR_8, uint8_t VAR_9)
{
 char *VAR_10, VAR_11[16];
 struct table_config *VAR_12;
 int VAR_13;
 ipfw_obj_ntlv *VAR_14;
 uint32_t VAR_15;

 if (VAR_6->tlvs != ((void*)0)) {
  VAR_14 = FUNC_1(VAR_6->tlvs, VAR_6->tlen, VAR_6->uidx,
      VAR_0);
  if (VAR_14 == ((void*)0))
   return (((void*)0));
  VAR_10 = VAR_14->name;
  VAR_15 = (VAR_4 == 0) ? 0 : VAR_14->set;
 } else {

  FUNC_3(VAR_11, sizeof(VAR_11), "%d", VAR_6->uidx);
  VAR_10 = VAR_11;
  VAR_15 = 0;
 }

 VAR_12 = FUNC_2(sizeof(struct table_config), VAR_1, VAR_2 | VAR_3);
 VAR_12->no.name = VAR_12->tablename;
 VAR_12->no.subtype = VAR_7->type;
 VAR_12->no.set = VAR_15;
 VAR_12->tflags = VAR_9;
 VAR_12->ta = VAR_7;
 FUNC_4(VAR_12->tablename, VAR_10, sizeof(VAR_12->tablename));

 VAR_12->vshared = 1;


 VAR_13 = VAR_7->init(VAR_5, &VAR_12->astate, &VAR_12->ti_copy, VAR_8, VAR_9);
 if (VAR_13 != 0) {
  FUNC_0(VAR_12, VAR_1);
  return (((void*)0));
 }

 return (VAR_12);
}
