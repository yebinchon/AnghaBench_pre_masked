
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_link_m_n {int tu; int link_n; int link_m; int gmch_n; int gmch_m; } ;
struct intel_crtc_state {int dummy; } ;


 int FUNC_0 (char*,char const*,unsigned int,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(const struct intel_crtc_state *VAR_0,
        const char *VAR_1, unsigned int VAR_2,
        const struct intel_link_m_n *VAR_3)
{
 FUNC_0("%s: lanes: %i; gmch_m: %u, gmch_n: %u, link_m: %u, link_n: %u, tu: %u\n",
        VAR_1, VAR_2,
        VAR_3->gmch_m, VAR_3->gmch_n,
        VAR_3->link_m, VAR_3->link_n, VAR_3->tu);
}
