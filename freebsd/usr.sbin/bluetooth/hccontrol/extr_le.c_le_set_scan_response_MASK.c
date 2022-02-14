
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rp ;
struct TYPE_3__ {int status; } ;
typedef TYPE_1__ ng_hci_le_set_scan_response_data_rp ;
struct TYPE_4__ {int scan_response_data_length; int scan_response_data; } ;
typedef TYPE_2__ ng_hci_le_set_scan_response_data_cp ;
typedef int cp ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,void*,int,void*,int*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,char**,char*,int*) ;
 int FUNC_5 (char*,int,int,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, int VAR_5, char *VAR_6[])
{
 ng_hci_le_set_scan_response_data_cp VAR_7;
 ng_hci_le_set_scan_response_data_rp VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 char VAR_12[VAR_0];

 VAR_11 = sizeof(VAR_12);
 FUNC_4(VAR_5, VAR_6, VAR_12, &VAR_11);
 FUNC_3(VAR_7.scan_response_data, 0, sizeof(VAR_7.scan_response_data));
 VAR_7.scan_response_data_length = VAR_11;
 FUNC_2(VAR_7.scan_response_data, VAR_12, VAR_11);
 VAR_9 = sizeof(VAR_8);
 VAR_10 = FUNC_1(VAR_4, FUNC_0(VAR_2,
   VAR_1),
   (void *)&VAR_7, sizeof(VAR_7), (void *)&VAR_8, &VAR_9);

 FUNC_5("SET SCAN RESPONSE %d %d %d\n", VAR_10, VAR_8.status, VAR_9);

 return VAR_3;
}
