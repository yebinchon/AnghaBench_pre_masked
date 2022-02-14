
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int subpacket_count; int halt_code; int exc_addr; int timestamp; int rbox_whami; int whami; } ;
struct TYPE_8__ {TYPE_3__ logout; } ;
struct ev7_pal_subpacket {TYPE_4__ by_type; } ;
struct TYPE_5__ {scalar_t__ data_start; } ;
struct TYPE_6__ {TYPE_1__ raw; } ;
struct el_subpacket {scalar_t__ class; int type; scalar_t__ length; TYPE_2__ by_type; } ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (struct el_subpacket*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct el_subpacket*,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int,...) ;

__attribute__((used)) static struct el_subpacket *
FUNC_4(struct el_subpacket *VAR_2)
{
 struct ev7_pal_subpacket *VAR_3;

 if (VAR_2->class != VAR_0) {
  FUNC_3("%s  ** Unexpected header CLASS %d TYPE %d, aborting\n",
         VAR_1,
         VAR_2->class, VAR_2->type);
  return ((void*)0);
 }

 VAR_3 = (struct ev7_pal_subpacket *)VAR_2->by_type.raw.data_start;

 switch(VAR_2->type) {
 case 128:
  FUNC_3("%s*** MCHK occurred on LPID %lld (RBOX %llx)\n",
         VAR_1,
         VAR_3->by_type.logout.whami,
         VAR_3->by_type.logout.rbox_whami);
  FUNC_1(&VAR_3->by_type.logout.timestamp);
  FUNC_3("%s  EXC_ADDR: %016llx\n"
           "  HALT_CODE: %llx\n",
         VAR_1,
         VAR_3->by_type.logout.exc_addr,
         VAR_3->by_type.logout.halt_code);
  FUNC_2(VAR_2,
                                      VAR_3->by_type.logout.subpacket_count);
  break;
 default:
  FUNC_3("%s  ** PAL TYPE %d SUBPACKET\n",
         VAR_1,
         VAR_2->type);
  FUNC_0(VAR_2);
  break;
 }

 return (struct el_subpacket *)((unsigned long)VAR_2 + VAR_2->length);
}
