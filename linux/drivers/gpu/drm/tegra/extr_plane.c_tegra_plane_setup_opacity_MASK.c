
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane_state {int format; int opaque; } ;
struct tegra_plane {int dummy; } ;






 int FUNC_0 (int,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct tegra_plane *VAR_0,
         struct tegra_plane_state *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 switch (VAR_1->format) {
 case 130:
 case 131:
 case 128:
 case 129:
  VAR_1->opaque = 0;
  break;

 default:
  VAR_3 = FUNC_0(VAR_1->format, &VAR_2);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_1->format = VAR_2;
  VAR_1->opaque = 1;
  break;
 }

 return 0;
}
