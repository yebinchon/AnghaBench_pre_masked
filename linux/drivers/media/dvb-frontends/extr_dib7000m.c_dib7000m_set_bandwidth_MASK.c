
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef scalar_t__ timf ;
struct dib7000m_state {int current_bandwidth; scalar_t__ timf; int timf_default; } ;


 int FUNC_0 (struct dib7000m_state*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dib7000m_state *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 if (!VAR_1)
  VAR_1 = 8000;


 VAR_0->current_bandwidth = VAR_1;

 if (VAR_0->timf == 0) {
  FUNC_1("using default timf\n");
  VAR_2 = VAR_0->timf_default;
 } else {
  FUNC_1("using updated timf\n");
  VAR_2 = VAR_0->timf;
 }

 VAR_2 = VAR_2 * (VAR_1 / 50) / 160;

 FUNC_0(VAR_0, 23, (u16) ((VAR_2 >> 16) & 0xffff));
 FUNC_0(VAR_0, 24, (u16) ((VAR_2 ) & 0xffff));

 return 0;
}
