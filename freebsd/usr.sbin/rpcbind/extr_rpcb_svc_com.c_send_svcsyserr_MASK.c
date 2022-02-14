
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct finfo {scalar_t__ reply_type; } ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct finfo*) ;

__attribute__((used)) static void
FUNC_2(SVCXPRT *VAR_1, struct finfo *VAR_2)
{
 if (VAR_2->reply_type == VAR_0) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1);
 }
 return;
}
