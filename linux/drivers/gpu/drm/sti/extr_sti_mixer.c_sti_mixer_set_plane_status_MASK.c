
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_plane {int dummy; } ;
struct sti_mixer {int dummy; } ;


 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sti_plane*) ;
 int FUNC_3 (struct sti_mixer*,int ) ;
 int FUNC_4 (struct sti_mixer*,int ,int ) ;
 int FUNC_5 (struct sti_mixer*) ;
 int FUNC_6 (struct sti_plane*) ;

int FUNC_7(struct sti_mixer *VAR_2,
          struct sti_plane *VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6;

 FUNC_0("%s %s %s\n", VAR_4 ? "enable" : "disable",
    FUNC_5(VAR_2), FUNC_6(VAR_3));

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_1("Can't find layer mask\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_1);
 VAR_6 &= ~VAR_5;
 VAR_6 |= VAR_4 ? VAR_5 : 0;
 FUNC_4(VAR_2, VAR_1, VAR_6);

 return 0;
}
