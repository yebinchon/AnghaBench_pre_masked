
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int * voting_rights_clients; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_5)
{
 struct smu7_hwmgr *VAR_6 = (struct smu7_hwmgr *)(VAR_5->backend);
 int VAR_7;


 FUNC_0(VAR_5->device, VAR_0,
   VAR_3, VAR_2, 0);
 FUNC_0(VAR_5->device, VAR_0,
   VAR_3, VAR_1, 0);

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  FUNC_1(VAR_5->device, VAR_0,
     VAR_4 + VAR_7 * 4,
     VAR_6->voting_rights_clients[VAR_7]);
 return 0;
}
