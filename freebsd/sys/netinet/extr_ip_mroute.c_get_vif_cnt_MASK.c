
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vifi_t ;
struct sioc_vif_req {size_t vifi; int obytes; int ibytes; int ocount; int icount; } ;
struct TYPE_2__ {int v_bytes_out; int v_bytes_in; int v_pkt_out; int v_pkt_in; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct sioc_vif_req *VAR_3)
{
    vifi_t VAR_4 = VAR_3->vifi;

    FUNC_0();
    if (VAR_4 >= VAR_1) {
 FUNC_1();
 return VAR_0;
    }

    VAR_3->icount = VAR_2[VAR_4].v_pkt_in;
    VAR_3->ocount = VAR_2[VAR_4].v_pkt_out;
    VAR_3->ibytes = VAR_2[VAR_4].v_bytes_in;
    VAR_3->obytes = VAR_2[VAR_4].v_bytes_out;
    FUNC_1();

    return 0;
}
