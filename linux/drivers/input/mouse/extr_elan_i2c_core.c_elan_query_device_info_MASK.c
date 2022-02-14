
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct elan_tp_data {int pattern; int ic_type; int iap_version; TYPE_2__* client; int fw_signature_address; int fw_validpage_count; TYPE_1__* ops; int pressure_adjustment; int fw_checksum; int fw_version; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int (* get_version ) (TYPE_2__*,int,int *) ;int (* get_checksum ) (TYPE_2__*,int,int *) ;int (* get_pressure_adjustment ) (TYPE_2__*,int *) ;int (* get_pattern ) (TYPE_2__*,int*) ;} ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int,int *) ;
 int FUNC_3 (TYPE_2__*,int,int *) ;
 int FUNC_4 (TYPE_2__*,int,int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int*) ;

__attribute__((used)) static int FUNC_7(struct elan_tp_data *VAR_0)
{
 int VAR_1;
 u16 VAR_2;

 VAR_1 = VAR_0->ops->get_version(VAR_0->client, 0, &VAR_0->fw_version);
 if (VAR_1)
  return VAR_1;

 VAR_1 = VAR_0->ops->get_checksum(VAR_0->client, 0,
     &VAR_0->fw_checksum);
 if (VAR_1)
  return VAR_1;

 VAR_1 = VAR_0->ops->get_version(VAR_0->client, 1, &VAR_0->iap_version);
 if (VAR_1)
  return VAR_1;

 VAR_1 = VAR_0->ops->get_pressure_adjustment(VAR_0->client,
         &VAR_0->pressure_adjustment);
 if (VAR_1)
  return VAR_1;

 VAR_1 = VAR_0->ops->get_pattern(VAR_0->client, &VAR_0->pattern);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->pattern == 0x01)
  VAR_2 = VAR_0->ic_type;
 else
  VAR_2 = VAR_0->iap_version;

 VAR_1 = FUNC_1(VAR_2, &VAR_0->fw_validpage_count,
    &VAR_0->fw_signature_address);
 if (VAR_1)
  FUNC_0(&VAR_0->client->dev,
    "unexpected iap version %#04x (ic type: %#04x), firmware update will not work\n",
    VAR_0->iap_version, VAR_0->ic_type);

 return 0;
}
