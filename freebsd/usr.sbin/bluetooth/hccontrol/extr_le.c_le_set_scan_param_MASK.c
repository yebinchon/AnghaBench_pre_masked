
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rp ;
typedef int ng_hci_le_set_scan_parameters_rp ;
struct TYPE_2__ {int le_scan_type; int le_scan_interval; int own_address_type; int le_scan_window; int scanning_filter_policy; } ;
typedef TYPE_1__ ng_hci_le_set_scan_parameters_cp ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 double FUNC_1 (char*) ;
 int FUNC_2 (int,int ,void*,int,void*,int*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, int VAR_4, char *VAR_5[])
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 ng_hci_le_set_scan_parameters_cp VAR_13;
 ng_hci_le_set_scan_parameters_rp VAR_14;

 if (VAR_4 != 5)
  return VAR_2;

 if (FUNC_3(VAR_5[0], "active") == 0)
  VAR_6 = 1;
 else if (FUNC_3(VAR_5[0], "passive") == 0)
  VAR_6 = 0;
 else
  return VAR_2;

 VAR_7 = (int)(FUNC_1(VAR_5[1])/0.625);
 VAR_7 = (VAR_7 < 4)? 4: VAR_7;
 VAR_8 = (int)(FUNC_1(VAR_5[2])/0.625);
 VAR_8 = (VAR_8 < 4) ? 4 : VAR_7;

 if (FUNC_3(VAR_5[3], "public") == 0)
  VAR_9 = 0;
 else if (FUNC_3(VAR_5[3], "random") == 0)
  VAR_9 = 1;
 else
  return VAR_2;

 if (FUNC_3(VAR_5[4], "all") == 0)
  VAR_10 = 0;
 else if (FUNC_3(VAR_5[4], "whitelist") == 0)
  VAR_10 = 1;
 else
  return VAR_2;

 VAR_13.le_scan_type = VAR_6;
 VAR_13.le_scan_interval = VAR_7;
 VAR_13.own_address_type = VAR_9;
 VAR_13.le_scan_window = VAR_8;
 VAR_13.scanning_filter_policy = VAR_10;
 VAR_12 = sizeof(VAR_14);
 VAR_11 = FUNC_2(VAR_3, FUNC_0(VAR_1,
  VAR_0),
  (void *)&VAR_13, sizeof(VAR_13), (void *)&VAR_14, &VAR_12);

 return 0;
}
