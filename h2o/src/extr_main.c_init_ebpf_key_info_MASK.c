
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_ebpf_map_key_t {int dummy; } ;
struct init_ebpf_key_info_t {int remote; int local; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_ebpf_map_key_t*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct st_h2o_ebpf_map_key_t *VAR_1, void *VAR_2)
{
    struct init_ebpf_key_info_t *VAR_3 = VAR_2;
    return FUNC_0(VAR_1, VAR_0, VAR_3->local, VAR_3->remote);
}
