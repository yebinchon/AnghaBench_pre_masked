
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scom_access {int pib_status; int intf_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct scom_access *VAR_10, uint32_t VAR_11)
{
 VAR_10->pib_status = (VAR_11 & VAR_7) >>
  VAR_8;
 VAR_10->intf_errors = 0;

 if (VAR_11 & VAR_9)
  VAR_10->intf_errors |= VAR_2;
 else if (VAR_11 & VAR_5)
  VAR_10->intf_errors |= VAR_1;
 else if (VAR_11 & VAR_6)
  VAR_10->intf_errors |= VAR_0;
 else if (VAR_11 & VAR_4)
  VAR_10->intf_errors |= VAR_3;
}
