
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_plane_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct vc4_plane_state*,int) ;

__attribute__((used)) static void FUNC_2(struct vc4_plane_state *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = (1 << 16) * VAR_4 / VAR_5;

 FUNC_1(VAR_3,
   VAR_0 |
   FUNC_0(VAR_6, VAR_2) |
   FUNC_0(0, VAR_1));
}
