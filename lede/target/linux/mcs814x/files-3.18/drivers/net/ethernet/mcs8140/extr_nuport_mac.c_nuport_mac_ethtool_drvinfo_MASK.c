
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_drvinfo {scalar_t__ eedump_len; scalar_t__ regdump_len; scalar_t__ testinfo_len; scalar_t__ n_stats; int bus_info; int fw_version; int version; int driver; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct ethtool_drvinfo *VAR_1)
{
 FUNC_0(VAR_1->driver, "nuport-mac", sizeof(VAR_1->driver));
 FUNC_0(VAR_1->version, "0.1", sizeof(VAR_1->version));
 FUNC_0(VAR_1->fw_version, "N/A", sizeof(VAR_1->fw_version));
 FUNC_0(VAR_1->bus_info, "internal", sizeof(VAR_1->bus_info));
 VAR_1->n_stats = 0;
 VAR_1->testinfo_len = 0;
 VAR_1->regdump_len = 0;
 VAR_1->eedump_len = 0;
}
