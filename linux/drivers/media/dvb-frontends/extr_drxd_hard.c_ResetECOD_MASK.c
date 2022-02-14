
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int m_ResetECRAM; scalar_t__ type_A; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drxd_state*,int ,int,int ) ;
 int FUNC_1 (struct drxd_state*,int ) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->type_A)
  VAR_4 = FUNC_0(VAR_3, VAR_2, 0x0664, 0);
 else
  VAR_4 = FUNC_0(VAR_3, VAR_0, 0x0664, 0);

 if (!(VAR_4 < 0))
  VAR_4 = FUNC_1(VAR_3, VAR_3->m_ResetECRAM);
 if (!(VAR_4 < 0))
  VAR_4 = FUNC_0(VAR_3, VAR_1, 0x0001, 0);
 return VAR_4;
}
