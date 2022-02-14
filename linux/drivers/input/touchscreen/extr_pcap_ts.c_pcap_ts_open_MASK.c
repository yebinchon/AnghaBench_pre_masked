
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_ts {int work; int read_state; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct pcap_ts* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_1)
{
 struct pcap_ts *VAR_2 = FUNC_0(VAR_1);

 VAR_2->read_state = VAR_0;
 FUNC_1(&VAR_2->work, 0);

 return 0;
}
