
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxk_state {scalar_t__ m_invert_clk; scalar_t__ m_invert_val; scalar_t__ m_invert_str; scalar_t__ m_invert_err; scalar_t__ m_invert_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct drxk_state *VAR_13)
{
 u16 VAR_14 = 0;


 u16 VAR_15 =
     VAR_8 | VAR_7 |
     VAR_6 | VAR_5 |
     VAR_4 | VAR_3 |
     VAR_2 | VAR_1;

 FUNC_0(1, "\n");


 VAR_14 &= (~(VAR_15));
 if (VAR_13->m_invert_data)
  VAR_14 |= VAR_15;
 VAR_14 &= (~(VAR_9));
 if (VAR_13->m_invert_err)
  VAR_14 |= VAR_9;
 VAR_14 &= (~(VAR_10));
 if (VAR_13->m_invert_str)
  VAR_14 |= VAR_10;
 VAR_14 &= (~(VAR_11));
 if (VAR_13->m_invert_val)
  VAR_14 |= VAR_11;
 VAR_14 &= (~(VAR_0));
 if (VAR_13->m_invert_clk)
  VAR_14 |= VAR_0;

 return FUNC_1(VAR_13, VAR_12, VAR_14);
}
