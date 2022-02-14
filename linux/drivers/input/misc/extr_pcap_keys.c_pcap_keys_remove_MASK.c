
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcap_keys {int input; int pcap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pcap_keys*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcap_keys*) ;
 int FUNC_3 (int ,int ) ;
 struct pcap_keys* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct pcap_keys *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(FUNC_3(VAR_3->pcap, VAR_1), VAR_3);
 FUNC_0(FUNC_3(VAR_3->pcap, VAR_0), VAR_3);

 FUNC_1(VAR_3->input);
 FUNC_2(VAR_3);

 return 0;
}
