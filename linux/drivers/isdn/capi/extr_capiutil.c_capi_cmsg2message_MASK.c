
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int l; int ApplId; int Messagenumber; int * m; int Subcommand; int Command; int par; scalar_t__ p; } ;
typedef TYPE_1__ _cmsg ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int*) ;

unsigned FUNC_4(_cmsg *VAR_0, u8 *VAR_1)
{
 VAR_0->m = VAR_1;
 VAR_0->l = 8;
 VAR_0->p = 0;
 VAR_0->par = FUNC_1(VAR_0->Command, VAR_0->Subcommand);
 if (!VAR_0->par)
  return 1;

 FUNC_2(VAR_0);

 FUNC_3(VAR_1 + 0, &VAR_0->l);
 FUNC_0(VAR_0->m + 4, &VAR_0->Command);
 FUNC_0(VAR_0->m + 5, &VAR_0->Subcommand);
 FUNC_3(VAR_0->m + 2, &VAR_0->ApplId);
 FUNC_3(VAR_0->m + 6, &VAR_0->Messagenumber);

 return 0;
}
