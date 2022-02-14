
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_ts {scalar_t__ read_state; int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct pcap_ts *VAR_5 = VAR_4;

 if (VAR_5->read_state == VAR_2) {
  VAR_5->read_state = VAR_1;
  FUNC_0(&VAR_5->work, 0);
 }
 return VAR_0;
}
