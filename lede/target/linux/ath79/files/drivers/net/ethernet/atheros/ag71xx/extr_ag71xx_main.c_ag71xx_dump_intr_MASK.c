
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ag71xx {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,char*,int,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct ag71xx *VAR_6, char *VAR_7, u32 VAR_8)
{
 FUNC_0("%s: %s intr=%08x %s%s%s%s%s%s\n",
  VAR_6->dev->name, VAR_7, VAR_8,
  (VAR_8 & VAR_4) ? "TXPS " : "",
  (VAR_8 & VAR_5) ? "TXUR " : "",
  (VAR_8 & VAR_3) ? "TXBE " : "",
  (VAR_8 & VAR_2) ? "RXPR " : "",
  (VAR_8 & VAR_1) ? "RXOF " : "",
  (VAR_8 & VAR_0) ? "RXBE " : "");
}
