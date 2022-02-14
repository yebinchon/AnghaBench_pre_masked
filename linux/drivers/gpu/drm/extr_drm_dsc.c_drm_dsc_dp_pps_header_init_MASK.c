
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dp_sdp_header {int HB2; int HB1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dp_sdp_header*,int ,int) ;

void FUNC_1(struct dp_sdp_header *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->HB1 = VAR_0;
 VAR_2->HB2 = VAR_1;
}
