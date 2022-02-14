
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hest_generic_data_v300 {int validation_bits; int time_stamp; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1,
       struct acpi_hest_generic_data_v300 *VAR_2)
{
 __u8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10;

 if (VAR_2->validation_bits & VAR_0) {
  VAR_10 = (__u8 *)&(VAR_2->time_stamp);
  VAR_5 = FUNC_0(VAR_10[0]);
  VAR_4 = FUNC_0(VAR_10[1]);
  VAR_3 = FUNC_0(VAR_10[2]);
  VAR_6 = FUNC_0(VAR_10[4]);
  VAR_7 = FUNC_0(VAR_10[5]);
  VAR_8 = FUNC_0(VAR_10[6]);
  VAR_9 = FUNC_0(VAR_10[7]);

  FUNC_1("%s%ststamp: %02d%02d-%02d-%02d %02d:%02d:%02d\n", VAR_1,
         (VAR_10[3] & 0x1 ? "precise " : "imprecise "),
         VAR_9, VAR_8, VAR_7, VAR_6, VAR_3, VAR_4, VAR_5);
 }
}
