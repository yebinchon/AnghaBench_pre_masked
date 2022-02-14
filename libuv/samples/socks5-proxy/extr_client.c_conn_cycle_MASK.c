
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
struct TYPE_8__ {scalar_t__ result; scalar_t__ wrstate; scalar_t__ rdstate; TYPE_1__ t; } ;
typedef TYPE_2__ conn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, conn *VAR_4, conn *VAR_5) {
  if (VAR_4->result < 0) {
    if (VAR_4->result != VAR_0) {
      FUNC_2("%s error: %s", VAR_3, FUNC_3(VAR_4->result));
    }
    return -1;
  }

  if (VAR_5->result < 0) {
    return -1;
  }

  if (VAR_4->wrstate == VAR_1) {
    VAR_4->wrstate = VAR_2;
  }





  if (VAR_4->wrstate == VAR_2) {
    if (VAR_5->rdstate == VAR_2) {
      FUNC_0(VAR_5);
    } else if (VAR_5->rdstate == VAR_1) {
      FUNC_1(VAR_4, VAR_5->t.buf, VAR_5->result);
      VAR_5->rdstate = VAR_2;
    }
  }

  return 0;
}
