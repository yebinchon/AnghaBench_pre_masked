
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_9__ {int len; int buf; } ;
typedef TYPE_1__ packet_t ;
struct TYPE_10__ {int (* recv ) (TYPE_1__*) ;int mru; } ;
typedef TYPE_2__ channel_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(int VAR_0, short VAR_1, void *VAR_2)
{
 channel_t *VAR_3 = VAR_2;
 packet_t *VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3);
  return;
 }

 VAR_5 = FUNC_6(VAR_0, VAR_4->buf, VAR_3->mru);
 if (VAR_5 == -1) {
  FUNC_3("channel read error: %m");
  FUNC_5(VAR_4);
  FUNC_0(VAR_3);
  return;
 }
 if (VAR_5 == 0) {
  FUNC_2("(fd#%d) EOF", VAR_0);
  FUNC_5(VAR_4);
  FUNC_0(VAR_3);
  return;
 }
 VAR_4->len = VAR_5;

 if (VAR_3->recv(VAR_4) == 1)
  FUNC_1(VAR_4);

 FUNC_5(VAR_4);
}
