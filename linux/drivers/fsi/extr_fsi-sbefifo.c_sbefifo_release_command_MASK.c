
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbefifo_user {scalar_t__ pending_len; int * pending_cmd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sbefifo_user *VAR_0)
{
 if (FUNC_0(VAR_0->pending_cmd))
  FUNC_1(VAR_0->pending_cmd);
 VAR_0->pending_cmd = ((void*)0);
 VAR_0->pending_len = 0;
}
