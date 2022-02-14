
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unknownproto; int badcommand; int badaddr; int badfcs; } ;
struct hdlc {TYPE_1__ stats; } ;
struct cmdargs {int prompt; TYPE_3__* cx; } ;
struct TYPE_6__ {int name; TYPE_2__* physical; } ;
struct TYPE_5__ {struct hdlc hdlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;

int
FUNC_1(struct cmdargs const *VAR_2)
{
  struct hdlc *VAR_3 = &VAR_2->cx->physical->hdlc;

  FUNC_0(VAR_2->prompt, "%s HDLC level errors:\n", VAR_2->cx->name);
  FUNC_0(VAR_2->prompt, " Bad Frame Check Sequence fields: %u\n",
         VAR_3->stats.badfcs);
  FUNC_0(VAR_2->prompt, " Bad address (!= 0x%02x) fields:    %u\n",
         VAR_0, VAR_3->stats.badaddr);
  FUNC_0(VAR_2->prompt, " Bad command (!= 0x%02x) fields:    %u\n",
         VAR_1, VAR_3->stats.badcommand);
  FUNC_0(VAR_2->prompt, " Unrecognised protocol fields:    %u\n",
         VAR_3->stats.unknownproto);
  return 0;
}
