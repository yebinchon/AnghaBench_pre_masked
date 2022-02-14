
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktr_csw_old {scalar_t__ user; scalar_t__ out; } ;


 int FUNC_0 (char*,char*,char*) ;

void
FUNC_1(struct ktr_csw_old *VAR_0)
{
 FUNC_0("%s %s\n", VAR_0->out ? "stop" : "resume",
  VAR_0->user ? "user" : "kernel");
}
