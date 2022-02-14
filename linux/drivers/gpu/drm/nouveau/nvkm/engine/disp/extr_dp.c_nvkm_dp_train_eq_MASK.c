
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct lt_state {int* stat; TYPE_4__* dp; int pc2; } ;
struct TYPE_7__ {TYPE_2__* ior; } ;
struct TYPE_8__ {int* dpcd; TYPE_3__ outp; } ;
struct TYPE_5__ {int nr; } ;
struct TYPE_6__ {TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct lt_state*,int ) ;
 int FUNC_1 (struct lt_state*,int) ;
 scalar_t__ FUNC_2 (struct lt_state*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct lt_state *VAR_6)
{
 bool VAR_7 = 0, VAR_8 = 1;
 int VAR_9 = 0, VAR_10;

 if (VAR_6->dp->dpcd[VAR_4] & VAR_5)
  FUNC_1(VAR_6, 3);
 else
  FUNC_1(VAR_6, 2);

 do {
  if ((VAR_9 &&
      FUNC_0(VAR_6, VAR_6->pc2)) ||
      FUNC_2(VAR_6, VAR_6->pc2, 400))
   break;

  VAR_7 = !!(VAR_6->stat[2] & VAR_3);
  for (VAR_10 = 0; VAR_10 < VAR_6->dp->outp.ior->dp.nr && VAR_7; VAR_10++) {
   u8 VAR_11 = (VAR_6->stat[VAR_10 >> 1] >> ((VAR_10 & 1) * 4)) & 0xf;
   if (!(VAR_11 & VAR_1))
    VAR_8 = 0;
   if (!(VAR_11 & VAR_0) ||
       !(VAR_11 & VAR_2))
    VAR_7 = 0;
  }
 } while (!VAR_7 && VAR_8 && ++VAR_9 <= 5);

 return VAR_7 ? 0 : -1;
}
