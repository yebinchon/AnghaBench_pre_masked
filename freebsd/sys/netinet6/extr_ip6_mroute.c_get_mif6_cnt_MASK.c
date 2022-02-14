
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sioc_mif_req6 {size_t mifi; int obytes; int ibytes; int ocount; int icount; } ;
typedef size_t mifi_t ;
struct TYPE_2__ {int m6_bytes_out; int m6_bytes_in; int m6_pkt_out; int m6_pkt_in; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct sioc_mif_req6 *VAR_3)
{
 mifi_t VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_4 = VAR_3->mifi;

 FUNC_0();

 if (VAR_4 >= VAR_2) {
  VAR_5 = VAR_0;
 } else {
  VAR_3->icount = VAR_1[VAR_4].m6_pkt_in;
  VAR_3->ocount = VAR_1[VAR_4].m6_pkt_out;
  VAR_3->ibytes = VAR_1[VAR_4].m6_bytes_in;
  VAR_3->obytes = VAR_1[VAR_4].m6_bytes_out;
 }

 FUNC_1();

 return (VAR_5);
}
