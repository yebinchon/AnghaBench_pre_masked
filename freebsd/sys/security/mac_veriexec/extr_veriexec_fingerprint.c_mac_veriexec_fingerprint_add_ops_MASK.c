
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_veriexec_fpops {char* type; scalar_t__ digest_len; scalar_t__ context_size; int * final; int * update; int * init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mac_veriexec_fpops*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

int
FUNC_3(struct mac_veriexec_fpops *VAR_4)
{


 if (VAR_4->type == ((void*)0) || VAR_4->digest_len == 0 ||
     VAR_4->context_size == 0 || VAR_4->init == ((void*)0) ||
     VAR_4->update == ((void*)0) || VAR_4->final == ((void*)0))
  return (VAR_1);


 if (FUNC_1(VAR_4->type))
  return (VAR_0);


 FUNC_0(&VAR_3, VAR_4, VAR_2);

 FUNC_2("MAC/veriexec fingerprint module loaded: %s\n", VAR_4->type);

 return (0);
}
