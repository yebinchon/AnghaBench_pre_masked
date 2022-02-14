
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct credential {int port; int protocol; int host; int username; int path; } ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {int item_id; int keyring; } ;
typedef scalar_t__ GnomeKeyringResult ;
typedef TYPE_1__ GnomeKeyringNetworkPasswordData ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int *,int ,char*,int ,int *,int ,TYPE_2__**) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 (struct credential*) ;

__attribute__((used)) static int FUNC_7(struct credential *VAR_5)
{
 char *VAR_6 = ((void*)0);
 GList *VAR_7;
 GnomeKeyringNetworkPasswordData *VAR_8;
 GnomeKeyringResult VAR_9;
 if (!VAR_5->protocol && !VAR_5->host && !VAR_5->path && !VAR_5->username)
  return VAR_0;

 VAR_6 = FUNC_6(VAR_5);

 VAR_9 = FUNC_2(
    VAR_5->username,
    ((void*)0) ,
    VAR_5->host,
    VAR_6,
    VAR_5->protocol,
    ((void*)0) ,
    VAR_5->port,
    &VAR_7);

 FUNC_1(VAR_6);

 if (VAR_9 == VAR_3)
  return VAR_1;

 if (VAR_9 == VAR_2)
  return VAR_1;

 if (VAR_9 != VAR_4) {
  FUNC_0("%s", FUNC_5(VAR_9));
  return VAR_0;
 }


 VAR_8 = (GnomeKeyringNetworkPasswordData *)VAR_7->data;

 VAR_9 = FUNC_3(
  VAR_8->keyring, VAR_8->item_id);

 FUNC_4(VAR_7);

 if (VAR_9 != VAR_4) {
  FUNC_0("%s", FUNC_5(VAR_9));
  return VAR_0;
 }

 return VAR_1;
}
