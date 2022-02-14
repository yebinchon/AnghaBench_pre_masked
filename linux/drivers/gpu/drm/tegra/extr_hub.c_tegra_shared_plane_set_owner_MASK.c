
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tegra_plane {unsigned int index; struct tegra_dc* dc; } ;
struct tegra_dc {unsigned int pipe; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct tegra_dc*,unsigned int) ;
 int FUNC_4 (struct tegra_dc*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (struct tegra_plane*,int ) ;

__attribute__((used)) static int FUNC_6(struct tegra_plane *VAR_3,
     struct tegra_dc *VAR_4)
{
 unsigned int VAR_5 =
  FUNC_5(VAR_3, VAR_0);
 struct tegra_dc *VAR_6 = VAR_3->dc, *VAR_7 = VAR_4 ? VAR_4 : VAR_6;
 struct device *VAR_8 = VAR_4 ? VAR_4->dev : VAR_6->dev;
 unsigned int VAR_9, VAR_10 = VAR_3->index;
 u32 VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_5);
 VAR_9 = VAR_11 & VAR_2;

 if (VAR_4 && (VAR_9 != VAR_2 && VAR_9 != VAR_4->pipe)) {
  FUNC_1(VAR_8, "window %u owned by head %u\n", VAR_10, VAR_9);
  return -VAR_1;
 }






 if (VAR_6 && VAR_9 == VAR_2)
  FUNC_2(VAR_8, "window %u not owned by head %u but %u\n", VAR_10,
   VAR_6->pipe, VAR_9);

 VAR_11 &= ~VAR_2;

 if (VAR_4)
  VAR_11 |= FUNC_0(VAR_4->pipe);
 else
  VAR_11 |= VAR_2;

 FUNC_4(VAR_7, VAR_11, VAR_5);

 VAR_3->dc = VAR_4;

 return 0;
}
