
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int una; int sn; int ts; scalar_t__ wnd; scalar_t__ frg; scalar_t__ cmd; int conv; } ;
typedef int IUINT8 ;
typedef int IUINT16 ;
typedef TYPE_1__ IKCPSEG ;


 char* FUNC_0 (char*,int ) ;
 char* FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, const IKCPSEG *VAR_1)
{
 VAR_0 = FUNC_1(VAR_0, VAR_1->conv);
 VAR_0 = FUNC_2(VAR_0, (IUINT8)VAR_1->cmd);
 VAR_0 = FUNC_2(VAR_0, (IUINT8)VAR_1->frg);
 VAR_0 = FUNC_0(VAR_0, (IUINT16)VAR_1->wnd);
 VAR_0 = FUNC_1(VAR_0, VAR_1->ts);
 VAR_0 = FUNC_1(VAR_0, VAR_1->sn);
 VAR_0 = FUNC_1(VAR_0, VAR_1->una);
 VAR_0 = FUNC_1(VAR_0, VAR_1->len);
 return VAR_0;
}
