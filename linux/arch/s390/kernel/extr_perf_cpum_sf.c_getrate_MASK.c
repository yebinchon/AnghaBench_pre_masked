
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hws_qsi_info_block {int dummy; } ;


 int FUNC_0 (int ,int,char*) ;
 unsigned long FUNC_1 (struct hws_qsi_info_block*,unsigned long) ;
 unsigned long FUNC_2 (struct hws_qsi_info_block*,unsigned long) ;
 scalar_t__ FUNC_3 (struct hws_qsi_info_block*,unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned long FUNC_4(bool VAR_2, unsigned long VAR_3,
        struct hws_qsi_info_block *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_4, VAR_3);
  VAR_5 = FUNC_2(VAR_4, VAR_5);
 } else {




  VAR_5 = FUNC_2(VAR_4, VAR_3);







  if (FUNC_3(VAR_4, VAR_5) >
      VAR_1) {
   FUNC_0(VAR_0, 1,
         "Sampling rate exceeds maximum "
         "perf sample rate\n");
   VAR_5 = 0;
  }
 }
 return VAR_5;
}
