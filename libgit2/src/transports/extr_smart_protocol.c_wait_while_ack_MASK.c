
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gitno_buffer ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ git_pkt_ack ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ git_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__**,int *,int *) ;

__attribute__((used)) static int FUNC_2(gitno_buffer *VAR_5)
{
 int VAR_6;
 git_pkt *VAR_7 = ((void*)0);
 git_pkt_ack *VAR_8 = ((void*)0);

 while (1) {
  FUNC_0(VAR_7);

  if ((VAR_6 = FUNC_1(&VAR_7, ((void*)0), VAR_5)) < 0)
   return VAR_6;

  if (VAR_7->type == VAR_4)
   break;
  if (VAR_7->type != VAR_3)
   continue;

  VAR_8 = (git_pkt_ack*)VAR_7;

  if (VAR_8->status != VAR_1 &&
      VAR_8->status != VAR_0 &&
      VAR_8->status != VAR_2) {
   break;
  }
 }

 FUNC_0(VAR_7);
 return 0;
}
