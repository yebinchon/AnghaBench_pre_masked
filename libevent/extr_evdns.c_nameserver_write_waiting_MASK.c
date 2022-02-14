
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nameserver {char write_waiting; int address; int event; int socket; TYPE_1__* base; } ;
typedef int addrbuf ;
struct TYPE_2__ {int event_base; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int,int ,struct nameserver*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sockaddr*,char*,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct nameserver *VAR_5, char VAR_6) {
 FUNC_0(VAR_5->base);
 if (VAR_5->write_waiting == VAR_6) return;

 VAR_5->write_waiting = VAR_6;
 (void) FUNC_3(&VAR_5->event);
 FUNC_2(&VAR_5->event, VAR_5->base->event_base,
     VAR_5->socket, VAR_2 | (VAR_6 ? VAR_3 : 0) | VAR_1,
     VAR_4, VAR_5);
 if (FUNC_1(&VAR_5->event, ((void*)0)) < 0) {
  char VAR_7[128];
  FUNC_5(VAR_0, "Error from libevent when adding event for %s",
      FUNC_4(
       (struct sockaddr *)&VAR_5->address,
       VAR_7, sizeof(VAR_7)));

 }
}
