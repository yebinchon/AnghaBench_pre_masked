
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int dummy; } ;
typedef int pcap_t ;
typedef int ifr ;
typedef int device ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int FUNC_6 (int,void const*,size_t) ;

int
FUNC_7(pcap_t *VAR_5, const void *VAR_6, size_t VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10 = 0;
 char VAR_11[sizeof "/dev/bpf0000000000"];
 struct ifreq VAR_12;




 do {
  (void)FUNC_5(VAR_11, sizeof(VAR_11), "/dev/bpf%d", VAR_10++);
  VAR_8 = FUNC_3(VAR_11, VAR_3);
 } while (VAR_8 < 0 && VAR_4 == VAR_2);

 if (VAR_8 == -1)
  return(-1);

 FUNC_0((char *)&VAR_12, sizeof(VAR_12));
 FUNC_2(FUNC_4(VAR_5), VAR_0, (caddr_t)&VAR_12);
 FUNC_2(VAR_8, VAR_1, (caddr_t)&VAR_12);

 VAR_9 = FUNC_6(VAR_8, VAR_6, VAR_7);

 FUNC_1(VAR_8);

 return(VAR_9);
}
