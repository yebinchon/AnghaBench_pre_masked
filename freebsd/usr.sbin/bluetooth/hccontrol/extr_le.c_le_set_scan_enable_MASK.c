
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rp ;
struct TYPE_3__ {scalar_t__ status; } ;
typedef TYPE_1__ ng_hci_le_set_scan_enable_rp ;
struct TYPE_4__ {int le_scan_enable; scalar_t__ filter_duplicates; } ;
typedef TYPE_2__ ng_hci_le_set_scan_enable_cp ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,void*,int,void*,int*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_5, int VAR_6, char *VAR_7[])
{
 ng_hci_le_set_scan_enable_cp VAR_8;
 ng_hci_le_set_scan_enable_rp VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_6 != 1)
  return VAR_4;

 if (FUNC_2(VAR_7[0], "enable") == 0)
  VAR_12 = 1;
 else if (FUNC_2(VAR_7[0], "disable") != 0)
  return VAR_4;

 VAR_11 = sizeof(VAR_9);
 VAR_8.le_scan_enable = VAR_12;
 VAR_8.filter_duplicates = 0;
 VAR_10 = FUNC_1(VAR_5, FUNC_0(VAR_2,
  VAR_1),
  (void *)&VAR_8, sizeof(VAR_8), (void *)&VAR_9, &VAR_11);

 if (VAR_10 != 0 || VAR_9.status != 0)
  return VAR_0;

 return VAR_3;
}
