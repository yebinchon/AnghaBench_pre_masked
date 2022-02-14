
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int buf; } ;
struct TYPE_7__ {int buf; } ;
struct TYPE_10__ {TYPE_3__ url; TYPE_2__ uuid; } ;
struct TYPE_6__ {int buf; } ;
struct TYPE_9__ {int timestamp; int log; TYPE_1__ author; int revision; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int ,char const*) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_1(const char *VAR_2)
{
 if (!VAR_1.revision)
  return;
 FUNC_0(VAR_1.revision, VAR_1.author.buf,
  &VAR_1.log, VAR_0.uuid.buf, VAR_0.url.buf,
  VAR_1.timestamp, VAR_2);
}
