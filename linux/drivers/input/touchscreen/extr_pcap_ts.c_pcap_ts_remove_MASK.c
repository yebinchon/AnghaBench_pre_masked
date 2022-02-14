
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcap_ts {int input; int work; int pcap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct pcap_ts*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pcap_ts*) ;
 int FUNC_4 (int ,int ) ;
 struct pcap_ts* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct pcap_ts *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(FUNC_4(VAR_2->pcap, VAR_0), VAR_2);
 FUNC_0(&VAR_2->work);

 FUNC_2(VAR_2->input);

 FUNC_3(VAR_2);

 return 0;
}
