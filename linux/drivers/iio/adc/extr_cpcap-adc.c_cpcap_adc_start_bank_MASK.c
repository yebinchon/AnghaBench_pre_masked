
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc_request {int timing; } ;
struct cpcap_adc {int done; int wq_data_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpcap_adc*,struct cpcap_adc_request*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct cpcap_adc *VAR_3,
    struct cpcap_adc_request *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_4->timing = VAR_1;
 VAR_3->done = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_3, VAR_4);
  VAR_6 = FUNC_2(VAR_3->wq_data_avail,
        VAR_3->done,
        FUNC_1(50));
  if (VAR_6 > 0)
   return 0;

  if (VAR_6 == 0) {
   VAR_6 = -VAR_2;
   continue;
  }

  if (VAR_6 < 0)
   return VAR_6;
 }

 return VAR_6;
}
