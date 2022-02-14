
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* buf; int buflen; } ;
typedef TYPE_1__ WSFrame ;
struct TYPE_8__ {int status; } ;
typedef TYPE_2__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int
FUNC_2 (WSClient * VAR_2, WSFrame * VAR_3, int VAR_4, int VAR_5)
{
  char *VAR_6 = VAR_3->buf;
  int VAR_7 = 0;


  if ((VAR_7 = FUNC_0 (VAR_2, VAR_6 + VAR_4, VAR_5)) < 1) {
    if (VAR_2->status & VAR_0)
      FUNC_1 (VAR_2, VAR_1, "Unable to read header");
    return VAR_7;
  }
  VAR_3->buflen += VAR_7;
  VAR_3->buf[VAR_3->buflen] = '\0';

  return VAR_7;
}
