
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int rp ;
struct TYPE_2__ {int status; scalar_t__ le_features; } ;
typedef TYPE_1__ ng_hci_le_read_local_supported_features_rp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,void*,int*) ;
 int FUNC_2 (char*,int,int,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int VAR_3 ,char *VAR_4[])
{
 ng_hci_le_read_local_supported_features_rp VAR_5;
 int VAR_6;
 int VAR_7 = sizeof(VAR_5);

 VAR_6 = FUNC_1(VAR_2,
   FUNC_0(VAR_1,
   VAR_0),
   (void *)&VAR_5, &VAR_7);

 FUNC_2("LOCAL SUPPORTED: %d %d %jx\n", VAR_6, VAR_5.status,
        (uintmax_t) VAR_5.le_features);

 return 0;
}
