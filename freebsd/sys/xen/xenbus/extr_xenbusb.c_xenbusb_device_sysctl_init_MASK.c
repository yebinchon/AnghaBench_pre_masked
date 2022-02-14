
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(device_t VAR_10)
{
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12;

 VAR_11 = FUNC_2(VAR_10);
 VAR_12 = FUNC_3(VAR_10);

        FUNC_0(VAR_11,
   FUNC_1(VAR_12),
   VAR_3,
   "xenstore_path",
   VAR_2 | VAR_0,
   VAR_10,
   VAR_4,
   VAR_9,
   "A",
   "XenStore path to device");

        FUNC_0(VAR_11,
   FUNC_1(VAR_12),
   VAR_3,
   "xenbus_dev_type",
   VAR_2 | VAR_0,
   VAR_10,
   VAR_8,
   VAR_9,
   "A",
   "XenBus device type");

        FUNC_0(VAR_11,
   FUNC_1(VAR_12),
   VAR_3,
   "xenbus_connection_state",
   VAR_2 | VAR_0,
   VAR_10,
   VAR_7,
   VAR_9,
   "A",
   "XenBus state of peer connection");

        FUNC_0(VAR_11,
   FUNC_1(VAR_12),
   VAR_3,
   "xenbus_peer_domid",
   VAR_1 | VAR_0,
   VAR_10,
   VAR_5,
   VAR_9,
   "I",
   "Xen domain ID of peer");

        FUNC_0(VAR_11,
   FUNC_1(VAR_12),
   VAR_3,
   "xenstore_peer_path",
   VAR_2 | VAR_0,
   VAR_10,
   VAR_6,
   VAR_9,
   "A",
   "XenStore path to peer device");
}
