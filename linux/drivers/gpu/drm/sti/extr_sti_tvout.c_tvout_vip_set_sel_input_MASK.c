
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_tvout {int dummy; } ;
typedef enum sti_tvout_video_out_type { ____Placeholder_sti_tvout_video_out_type } sti_tvout_video_out_type ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sti_tvout*,int) ;
 int FUNC_1 (struct sti_tvout*,int,int) ;

__attribute__((used)) static void FUNC_2(struct sti_tvout *VAR_5,
        int VAR_6,
        bool VAR_7,
        enum sti_tvout_video_out_type VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = FUNC_0(VAR_5, VAR_6);

 if (VAR_7)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_0;

 switch (VAR_8) {
 case 129:
  VAR_9 |= VAR_1;
  break;
 case 128:
  VAR_9 &= ~VAR_1;
  break;
 }


 VAR_9 = VAR_9 ^ VAR_2;

 VAR_10 &= ~VAR_4;
 VAR_10 |= VAR_9;
 FUNC_1(VAR_5, VAR_10, VAR_6);
}
