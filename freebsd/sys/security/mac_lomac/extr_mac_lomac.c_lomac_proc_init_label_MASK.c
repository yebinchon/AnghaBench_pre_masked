
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_lomac_proc {int dummy; } ;
struct label {int dummy; } ;
struct TYPE_2__ {int mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct label*) ;
 int FUNC_1 (struct label*,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct label *VAR_4)
{

 FUNC_1(VAR_4, FUNC_2(sizeof(struct mac_lomac_proc), VAR_1,
     VAR_3 | VAR_2));
 FUNC_3(&FUNC_0(VAR_4)->mtx, "MAC/Lomac proc lock", ((void*)0), VAR_0);
}
