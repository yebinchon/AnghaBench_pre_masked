
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int length; int len_bytes; int tot_bytes; int tot_pkts; int drops; } ;
struct TYPE_10__ {TYPE_4__ ni; } ;
struct TYPE_6__ {int length; int len_bytes; int tot_bytes; int tot_pkts; int drops; } ;
struct TYPE_7__ {TYPE_1__ ni; } ;
struct fq_pie_si {TYPE_5__ _si; TYPE_2__ main_q; } ;
struct TYPE_8__ {int length; int len_bytes; int tot_bytes; int tot_pkts; int drops; } ;
struct fq_pie_flow {TYPE_3__ stats; } ;


 int VAR_0 ;

__attribute__((used)) __inline static void
FUNC_0(struct fq_pie_flow *VAR_1, struct fq_pie_si *VAR_2, int VAR_3,
 int VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 < 0)
  VAR_5 = -1;
 else if (VAR_3 > 0)
  VAR_5 = 1;

 if (VAR_4) {
  VAR_2->main_q.ni.drops ++;
  VAR_1->stats.drops ++;
  VAR_2->_si.ni.drops ++;
  VAR_0 ++;
 }

 if (!VAR_4 || (VAR_4 && VAR_3 < 0)) {

  VAR_2->main_q.ni.length += VAR_5;
  VAR_2->main_q.ni.len_bytes += VAR_3;


  VAR_1->stats.length += VAR_5;
  VAR_1->stats.len_bytes += VAR_3;


  VAR_2->_si.ni.length += VAR_5;
  VAR_2->_si.ni.len_bytes += VAR_3;
 }

 if (VAR_5 > 0) {
  VAR_2->main_q.ni.tot_bytes += VAR_3;
  VAR_2->main_q.ni.tot_pkts ++;

  VAR_1->stats.tot_bytes +=VAR_3;
  VAR_1->stats.tot_pkts++;

  VAR_2->_si.ni.tot_bytes +=VAR_3;
  VAR_2->_si.ni.tot_pkts ++;
 }

}
