
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int m_InitFE_2; int m_FeAgRegAgPwd; int m_FeAgRegAgAgcSio; scalar_t__ PGA; scalar_t__ type_A; int m_InitFE_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drxd_state*,int ) ;
 int FUNC_1 (struct drxd_state*,int ,int ,int) ;
 int FUNC_2 (struct drxd_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct drxd_state *VAR_6)
{
 int VAR_7;

 do {
  VAR_7 = FUNC_2(VAR_6, VAR_6->m_InitFE_1);
  if (VAR_7 < 0)
   break;

  if (VAR_6->type_A) {
   VAR_7 = FUNC_1(VAR_6, VAR_4,
      VAR_3,
      0);
  } else {
   if (VAR_6->PGA)
    VAR_7 = FUNC_0(VAR_6, 0);
   else
    VAR_7 =
        FUNC_1(VAR_6, VAR_1,
         VAR_0,
         0);
  }

  if (VAR_7 < 0)
   break;
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_6->m_FeAgRegAgAgcSio, 0x0000);
  if (VAR_7 < 0)
   break;
  VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_6->m_FeAgRegAgPwd, 0x0000);
  if (VAR_7 < 0)
   break;

  VAR_7 = FUNC_2(VAR_6, VAR_6->m_InitFE_2);
  if (VAR_7 < 0)
   break;

 } while (0);

 return VAR_7;
}
