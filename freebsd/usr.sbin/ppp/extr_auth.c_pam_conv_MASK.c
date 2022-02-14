
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pam_response {int * resp; scalar_t__ resp_retcode; } ;
struct pam_message {scalar_t__ msg_style; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct pam_response* FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, const struct pam_message **VAR_4, struct pam_response **VAR_5,
  void *VAR_6)
{

  if (VAR_3 != 1 || VAR_4[0]->msg_style != VAR_1)
    return (VAR_0);
  if ((*VAR_5 = FUNC_0(sizeof(struct pam_response))) == ((void*)0))
    return (VAR_0);
  (*VAR_5)[0].resp = FUNC_1((const char *)VAR_6);
  (*VAR_5)[0].resp_retcode = 0;

  return ((*VAR_5)[0].resp != ((void*)0) ? VAR_2 : VAR_0);
}
