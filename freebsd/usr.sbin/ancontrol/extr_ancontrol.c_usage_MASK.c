
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1)
{
 FUNC_1(VAR_0, "usage:  %s -i iface -A (show specified APs)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -N (show specified SSIDss)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -S (show NIC status)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -I (show NIC capabilities)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -T (show stats counters)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -C (show current config)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -R (show RSSI map)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -t 0-4 (set TX speed)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -s 0-3 (set power save mode)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface [-v 1-4] -a AP (specify AP)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -b val (set beacon period)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface [-v 0|1] -d val (set diversity)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -j val (set netjoin timeout)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -e 0-4 (enable transmit key)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface [-v 0-8] -k key (set key)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -K 0-2 (no auth/open/shared secret)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -W 0-2 (no WEP/full WEP/mixed cell)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -l val (set station name)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -m val (set MAC address)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface [-v 1-3] -n SSID "
     "(specify SSID)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -o 0|1 (set operating mode)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -c val (set ad-hoc channel)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -f val (set frag threshold)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -r val (set RTS threshold)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -M 0-15 (set monitor mode)\n", VAR_1);
 FUNC_1(VAR_0, "\t%s -i iface -L user (enter LEAP authentication mode)\n", VAR_1);





 FUNC_1(VAR_0, "\t%s -h (display this message)\n", VAR_1);

 FUNC_0(1);
}
