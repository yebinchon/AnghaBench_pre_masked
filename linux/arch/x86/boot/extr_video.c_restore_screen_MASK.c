
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct biosregs {int ah; int dh; int dl; } ;
typedef int addr_t ;
struct TYPE_4__ {int orig_video_cols; int orig_video_lines; } ;
struct TYPE_6__ {TYPE_1__ screen_info; } ;
struct TYPE_5__ {int y; int x; int curx; int cury; int * data; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int,int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct biosregs*) ;
 int FUNC_2 (int,struct biosregs*,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{

 int VAR_4 = VAR_0.screen_info.orig_video_cols;
 int VAR_5 = VAR_0.screen_info.orig_video_lines;
 int VAR_6;
 addr_t VAR_7 = 0;
 u16 *VAR_8 = VAR_2.data;
 struct biosregs VAR_9;

 if (VAR_1)
  return;

 if (!VAR_8)
  return;



 FUNC_3(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  int VAR_10;

  if (VAR_6 < VAR_2.y) {
   int VAR_11 = (VAR_4 < VAR_2.x) ? VAR_4 : VAR_2.x;
   FUNC_0(VAR_7, VAR_8, VAR_11*sizeof(u16));
   VAR_7 += VAR_11*sizeof(u16);
   VAR_8 += VAR_2.x;
   VAR_10 = (VAR_4 < VAR_2.x) ? 0 : VAR_4-VAR_2.x;
  } else {
   VAR_10 = VAR_4;
  }



  asm volatile("pushw %%es ; "
        "movw %2,%%es ; "
        "shrw %%cx ; "
        "jnc 1f ; "
        "stosw \n\t"
        "1: rep;stosl ; "
        "popw %%es"
        : "+D" (VAR_7), "+c" (VAR_10)
        : "bdS" (VAR_3),
          "a" (0x07200720));
 }


 if (VAR_2.curx >= VAR_4)
  VAR_2.curx = VAR_4-1;
 if (VAR_2.cury >= VAR_5)
  VAR_2.cury = VAR_5-1;

 FUNC_1(&VAR_9);
 VAR_9.ah = 0x02;
 VAR_9.dh = VAR_2.cury;
 VAR_9.dl = VAR_2.curx;
 FUNC_2(0x10, &VAR_9, ((void*)0));

 FUNC_4();
}
