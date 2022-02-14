
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_label; } ;
struct bpf_d {int bd_label; } ;


 int FUNC_0 (struct bpf_d*) ;
 int FUNC_1 (int ,int,struct bpf_d*,struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int) ;
 int FUNC_3 (struct ifnet*,int) ;
 int FUNC_4 (int ,struct bpf_d*,int ,struct ifnet*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_5(struct bpf_d *VAR_2, struct ifnet *VAR_3)
{
 int VAR_4, VAR_5;


 FUNC_0(VAR_2);

 if (VAR_1 == 0)
  return (0);

 FUNC_2(VAR_3, VAR_5);
 FUNC_4(VAR_0, VAR_2, VAR_2->bd_label, VAR_3,
     VAR_3->if_label);
 FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
 FUNC_3(VAR_3, VAR_5);

 return (VAR_4);
}
