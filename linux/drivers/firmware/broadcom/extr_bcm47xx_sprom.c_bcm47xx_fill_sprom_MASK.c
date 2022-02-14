
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_sprom {int revision; int leddc_off_time; int leddc_on_time; int alpha2; } ;


 int FUNC_0 (struct ssb_sprom*,char const*,int) ;
 int FUNC_1 (struct ssb_sprom*,char const*,int) ;
 int FUNC_2 (struct ssb_sprom*,char const*,int) ;
 int FUNC_3 (struct ssb_sprom*,char const*,int) ;
 int FUNC_4 (struct ssb_sprom*,char const*,int) ;
 int FUNC_5 (char const*,char*,int ,int) ;
 int FUNC_6 (char const*,char*,int *,int *,int) ;
 int FUNC_7 (char const*,int *,char*,int*,int ,int) ;

void FUNC_8(struct ssb_sprom *VAR_0, const char *VAR_1,
   bool VAR_2)
{
 FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_7(VAR_1, ((void*)0), "sromrev", &VAR_0->revision, 0, VAR_2);


 FUNC_5(VAR_1, "ccode", VAR_0->alpha2, VAR_2);
 if (VAR_0->revision >= 3)
  FUNC_6(VAR_1, "leddc", &VAR_0->leddc_on_time,
     &VAR_0->leddc_off_time, VAR_2);

 switch (VAR_0->revision) {
 case 4:
 case 5:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 8:
 case 9:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 }

 FUNC_4(VAR_0, VAR_1, VAR_2);
}
