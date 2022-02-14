
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_profile {int samples; int name; int samples_no; int loss_level; int link_nr; } ;
struct dn_pipe_max8 {int * samples; } ;
struct dn_pipe8 {int * samples; int name; int samples_no; int loss_level; } ;
struct dn_link {int link_nr; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct dn_profile *VAR_0, struct dn_link *VAR_1,
    void *VAR_2)
{
 struct dn_pipe8 *VAR_3 = (struct dn_pipe8 *)VAR_2;

 VAR_3->samples = &(((struct dn_pipe_max8 *)VAR_3)->samples[0]);

 VAR_0->link_nr = VAR_1->link_nr;
 VAR_0->loss_level = VAR_3->loss_level;

 VAR_0->samples_no = VAR_3->samples_no;
 FUNC_1(VAR_0->name, VAR_3->name,sizeof(VAR_0->name));
 FUNC_0(VAR_3->samples, VAR_0->samples, sizeof(VAR_0->samples));

 return 0;
}
