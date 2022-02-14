
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_ts {int read_state; int pcap; int work; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct pcap_ts* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct input_dev *VAR_2)
{
 struct pcap_ts *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->work);

 VAR_3->read_state = VAR_0;
 FUNC_2(VAR_3->pcap,
    VAR_3->read_state << VAR_1);
}
