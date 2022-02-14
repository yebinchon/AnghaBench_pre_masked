
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000m_state {int dummy; } ;


 int FUNC_0 (struct dib7000m_state*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dib7000m_state *VAR_0, u16 VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 & 0x1) {
  FUNC_1("autosearch failed\n");
  return 1;
 }

 if (VAR_2 & 0x2) {
  FUNC_1("autosearch succeeded\n");
  return 2;
 }
 return 0;
}
