
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psmouse {int model; int name; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct psmouse*,char*) ;
 int FUNC_2 () ;

int FUNC_3(struct psmouse *VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;

 if (!FUNC_2()) {
  FUNC_1(VAR_5,
       "VMMouse not running on supported hypervisor.\n");
  return -VAR_0;
 }


 VAR_7 = ~VAR_3;
 FUNC_0(VAR_1, 0, VAR_8, VAR_7, VAR_9, VAR_10);
 if (VAR_7 != VAR_3 || VAR_8 == 0xffffffffU)
  return -VAR_0;

 if (VAR_6) {
  VAR_5->vendor = VAR_4;
  VAR_5->name = VAR_2;
  VAR_5->model = VAR_8;
 }

 return 0;
}
