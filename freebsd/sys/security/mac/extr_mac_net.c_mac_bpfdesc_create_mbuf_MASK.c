
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct label {int dummy; } ;
struct bpf_d {int bd_label; } ;


 int FUNC_0 (struct bpf_d*) ;
 int FUNC_1 (int ,struct bpf_d*,int ,struct mbuf*,struct label*) ;
 int VAR_0 ;
 struct label* FUNC_2 (struct mbuf*) ;
 scalar_t__ VAR_1 ;

void
FUNC_3(struct bpf_d *VAR_2, struct mbuf *VAR_3)
{
 struct label *VAR_4;


 FUNC_0(VAR_2);

 if (VAR_1 == 0)
  return;

 VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_0, VAR_2, VAR_2->bd_label, VAR_3,
     VAR_4);
}
