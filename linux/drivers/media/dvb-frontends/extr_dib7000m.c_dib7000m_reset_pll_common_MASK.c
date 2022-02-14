
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dibx000_bandwidth_config {int internal; int ifreq; int sad_cfg; } ;
struct dib7000m_state {int dummy; } ;


 int FUNC_0 (struct dib7000m_state*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct dib7000m_state *VAR_0, const struct dibx000_bandwidth_config *VAR_1)
{
 FUNC_0(VAR_0, 18, (u16) (((VAR_1->internal*1000) >> 16) & 0xffff));
 FUNC_0(VAR_0, 19, (u16) ( (VAR_1->internal*1000) & 0xffff));
 FUNC_0(VAR_0, 21, (u16) ( (VAR_1->ifreq >> 16) & 0xffff));
 FUNC_0(VAR_0, 22, (u16) ( VAR_1->ifreq & 0xffff));

 FUNC_0(VAR_0, 928, VAR_1->sad_cfg);
}
