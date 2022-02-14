
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct pcap_pkthdr {int caplen; int len; struct timeval ts; } ;
struct ieee80211_frame {int caplen; int len; struct timeval ts; } ;
typedef int pkh ;
struct TYPE_2__ {int packets; int iv; int fd; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct pcap_pkthdr*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_8 (int ,struct pcap_pkthdr*,int) ;

void FUNC_9(struct ieee80211_frame* VAR_1, int VAR_2) {
 int VAR_3;
 struct pcap_pkthdr VAR_4;
 struct timeval VAR_5;
 unsigned char *VAR_6 = (unsigned char*) (VAR_1+1);

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.caplen = VAR_4.len = VAR_2;
 if (FUNC_3(&VAR_5, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");
 VAR_4.ts = VAR_5;
 if (FUNC_8(VAR_0.fd, &VAR_4, sizeof(VAR_4)) != sizeof(VAR_4))
  FUNC_0(1, "write()");

 VAR_3 = FUNC_8(VAR_0.fd, VAR_1, VAR_2);

 if (VAR_3 == -1) {
  FUNC_6("write()");
  FUNC_1(1);
 }
 if (VAR_3 != VAR_2) {
  FUNC_7("short write %d out of %d\n", VAR_3, VAR_2);
  FUNC_1(1);
 }
 FUNC_4(VAR_0.iv, VAR_6, 3);
 VAR_0.packets++;
}
