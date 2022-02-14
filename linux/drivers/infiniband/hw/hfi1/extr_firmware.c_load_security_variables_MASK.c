
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hfi1_devdata {int dummy; } ;
struct firmware_details {scalar_t__ css_header; int mu; int r2; int modulus; } ;
struct css_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_6,
        struct firmware_details *VAR_7)
{

 FUNC_0(VAR_6, VAR_1, VAR_7->modulus, VAR_0);

 FUNC_0(VAR_6, VAR_3, VAR_7->r2, VAR_0);

 FUNC_0(VAR_6, VAR_2, VAR_7->mu, VAR_5);

 FUNC_1(VAR_6, VAR_4,
    (u8 *)VAR_7->css_header,
    sizeof(struct css_header));
}
