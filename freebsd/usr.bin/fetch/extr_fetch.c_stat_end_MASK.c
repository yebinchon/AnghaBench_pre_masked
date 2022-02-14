
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xferstat {int rcvd; int last; } ;


 int FUNC_0 (int ,char*,char*,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char,int ) ;
 int FUNC_3 (char*,int,struct xferstat*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (struct xferstat*,int) ;
 int FUNC_6 (char*,int,struct xferstat*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct xferstat *VAR_3)
{
 char VAR_4[16], VAR_5[16], VAR_6[16];

 FUNC_1(&VAR_3->last, ((void*)0));
 if (VAR_2) {
  FUNC_5(VAR_3, 2);
  FUNC_2('\n', VAR_0);
 } else if (VAR_1 > 0) {
  FUNC_4(VAR_4, sizeof VAR_4, VAR_3->rcvd);
  FUNC_3(VAR_5, sizeof VAR_5, VAR_3);
  FUNC_6(VAR_6, sizeof VAR_6, VAR_3);
  FUNC_0(VAR_0, "        %s %s %s\n", VAR_4, VAR_5, VAR_6);
 }
}
