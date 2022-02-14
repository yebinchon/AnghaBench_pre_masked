
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t* eld; } ;
struct TYPE_4__ {TYPE_1__ connector; } ;
struct tegra_hdmi {TYPE_2__ output; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (size_t*) ;
 int FUNC_1 (struct tegra_hdmi*,size_t,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_hdmi *VAR_5)
{
 size_t VAR_6 = FUNC_0(VAR_5->output.connector.eld), VAR_7;
 u32 VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_5, VAR_7 << 8 | VAR_5->output.connector.eld[VAR_7],
      VAR_1);







 for (VAR_7 = VAR_6; VAR_7 < VAR_0; VAR_7++)
  FUNC_1(VAR_5, VAR_7 << 8 | 0,
      VAR_1);

 VAR_8 = VAR_4 | VAR_3;
 FUNC_1(VAR_5, VAR_8, VAR_2);
}
