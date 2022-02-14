
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcap_keys {int input; int pcap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct pcap_keys *VAR_6 = VAR_5;
 int VAR_7 = FUNC_3(VAR_6->pcap, VAR_4);
 u32 VAR_8;

 FUNC_0(VAR_6->pcap, VAR_3, &VAR_8);
 VAR_8 &= 1 << VAR_7;

 switch (VAR_7) {
 case 128:
  FUNC_1(VAR_6->input, VAR_2, !VAR_8);
  break;
 case 129:
  FUNC_1(VAR_6->input, VAR_1, !VAR_8);
  break;
 }

 FUNC_2(VAR_6->input);

 return VAR_0;
}
