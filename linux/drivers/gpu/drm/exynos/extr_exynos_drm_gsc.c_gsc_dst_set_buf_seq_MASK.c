
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gsc_context*) ;
 int FUNC_1 (struct gsc_context*,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct gsc_context *VAR_5, u32 VAR_6,
    bool VAR_7)
{
 bool VAR_8 = !VAR_7;
 u32 VAR_9;
 u32 VAR_10 = 0x00000001 << VAR_6;


 VAR_9 = FUNC_2(VAR_4);


 VAR_9 &= ~VAR_10;
 VAR_9 |= VAR_8 << VAR_6;
 FUNC_3(VAR_9, VAR_4);
 FUNC_3(VAR_9, VAR_2);
 FUNC_3(VAR_9, VAR_3);


 if (VAR_7 && FUNC_0(VAR_5) >= VAR_0)
  FUNC_1(VAR_5, 1, 0, 1);


 if (!VAR_7 && FUNC_0(VAR_5) <= VAR_1)
  FUNC_1(VAR_5, 0, 0, 1);
}
