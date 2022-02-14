
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int append_protocol; } ;
struct TYPE_9__ {TYPE_1__* metrics; } ;
struct TYPE_8__ {int protocol_len; } ;
struct TYPE_7__ {int protocol; } ;
typedef TYPE_2__ GDashMeta ;
typedef TYPE_3__ GDashData ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (GDashMeta * VAR_2, GDashData * VAR_3)
{
  int VAR_4 = 0, VAR_5 = 0;

  if (!VAR_1.append_protocol || !VAR_3->metrics->protocol)
    return;

  VAR_4 = FUNC_0 (VAR_3->metrics->protocol);
  VAR_5 = FUNC_0 (VAR_0);

  if (VAR_4 > VAR_2->protocol_len)
    VAR_2->protocol_len = VAR_4;



  if (VAR_5 > VAR_2->protocol_len)
    VAR_2->protocol_len = VAR_5;
}
