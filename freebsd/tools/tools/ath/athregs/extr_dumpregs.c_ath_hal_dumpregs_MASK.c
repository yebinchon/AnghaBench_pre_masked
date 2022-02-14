
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dumpreg {int type; int addr; int * name; } ;
struct TYPE_2__ {int nregs; scalar_t__ show_addrs; scalar_t__ show_names; struct dumpreg** regs; int revs; } ;
typedef int HAL_REVS ;
typedef int FILE ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (struct dumpreg const*,int const*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_2, int VAR_3)
{
 const HAL_REVS *VAR_4 = &VAR_1.revs;
 const char *VAR_5 = "";
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = 0;
 VAR_8 = 4;
 if (VAR_1.show_names && VAR_1.show_addrs)
  VAR_8--;
 for (VAR_6 = 0; VAR_6 < VAR_1.nregs; VAR_6++) {
  const struct dumpreg *VAR_9 = VAR_1.regs[VAR_6];
  if ((VAR_3 & VAR_9->type) && FUNC_2(VAR_9, VAR_4)) {
   if (VAR_1.show_names && VAR_9->name != ((void*)0)) {
    FUNC_1(VAR_2, "%s%-8s", VAR_5, VAR_9->name);
    if (VAR_1.show_addrs)
     FUNC_1(VAR_2, " [%04x]", VAR_9->addr);
   } else
    FUNC_1(VAR_2, "%s%04x", VAR_5, VAR_9->addr);
   FUNC_1(VAR_2, " %08x", FUNC_0(VAR_0, VAR_9->addr));
   VAR_5 = " ";
   if ((++VAR_7 % VAR_8) == 0)
    VAR_5 = "\n";
  }
 }
 if (VAR_7)
  FUNC_1(VAR_2, "\n");
}
