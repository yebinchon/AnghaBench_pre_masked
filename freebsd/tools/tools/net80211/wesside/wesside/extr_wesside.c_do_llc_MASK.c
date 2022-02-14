
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int control; int ether_type; } ;
struct TYPE_4__ {TYPE_1__ type_snap; } ;
struct llc {TYPE_2__ llc_un; void* llc_ssap; void* llc_dsap; } ;


 void* VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (struct llc*,int ,int) ;

void FUNC_2(unsigned char* VAR_1, unsigned short VAR_2) {
 struct llc* VAR_3 = (struct llc*) VAR_1;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->llc_dsap = VAR_0;
 VAR_3->llc_ssap = VAR_0;
 VAR_3->llc_un.type_snap.control = 3;
 VAR_3->llc_un.type_snap.ether_type = FUNC_0(VAR_2);
}
