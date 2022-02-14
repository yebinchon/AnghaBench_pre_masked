
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ set_uuid0; scalar_t__ set_uuid1; scalar_t__ set_uuid2; scalar_t__ set_uuid3; } ;
typedef TYPE_1__ mdp_super_t ;



__attribute__((used)) static int FUNC_0(mdp_super_t *VAR_0, mdp_super_t *VAR_1)
{
 return VAR_0->set_uuid0 == VAR_1->set_uuid0 &&
  VAR_0->set_uuid1 == VAR_1->set_uuid1 &&
  VAR_0->set_uuid2 == VAR_1->set_uuid2 &&
  VAR_0->set_uuid3 == VAR_1->set_uuid3;
}
