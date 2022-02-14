
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dw_hdmi*,int ,unsigned int,int ) ;
 int FUNC_1 (struct dw_hdmi*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct dw_hdmi *VAR_9, unsigned int VAR_10,
      unsigned int VAR_11)
{

 FUNC_0(VAR_9, 0, VAR_4, VAR_2);


 FUNC_0(VAR_9, 0, VAR_5, VAR_2);


 if (VAR_10)
  FUNC_1(VAR_9, ((VAR_10 >> 16) &
       VAR_3) |
      VAR_4,
       VAR_2);
 else
  FUNC_1(VAR_9, 0, VAR_2);
 FUNC_1(VAR_9, (VAR_10 >> 8) & 0xff, VAR_1);
 FUNC_1(VAR_9, VAR_10 & 0xff, VAR_0);

 FUNC_1(VAR_9, (VAR_11 >> 16) & 0x0f, VAR_8);
 FUNC_1(VAR_9, (VAR_11 >> 8) & 0xff, VAR_7);
 FUNC_1(VAR_9, VAR_11 & 0xff, VAR_6);
}
