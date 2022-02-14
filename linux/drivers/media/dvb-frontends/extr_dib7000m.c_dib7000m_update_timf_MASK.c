
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib7000m_state {int timf; int current_bandwidth; int timf_default; } ;


 int FUNC_0 (struct dib7000m_state*,int) ;
 int FUNC_1 (struct dib7000m_state*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct dib7000m_state *VAR_0)
{
 u32 VAR_1 = (FUNC_0(VAR_0, 436) << 16) | FUNC_0(VAR_0, 437);
 VAR_0->timf = VAR_1 * 160 / (VAR_0->current_bandwidth / 50);
 FUNC_1(VAR_0, 23, (u16) (VAR_1 >> 16));
 FUNC_1(VAR_0, 24, (u16) (VAR_1 & 0xffff));
 FUNC_2("updated timf_frequency: %d (default: %d)\n", VAR_0->timf, VAR_0->timf_default);
}
