
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int disk_size; int* rpbitmap; int qt; int disk; TYPE_2__* vhba; } ;
typedef TYPE_1__ vhbarptluns_t ;
struct TYPE_6__ {TYPE_1__* private; } ;
typedef TYPE_2__ vhba_softc_t ;
struct timeval {int tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;

void
FUNC_5(vhba_softc_t *VAR_6)
{
 static vhbarptluns_t VAR_7;
 struct timeval VAR_8;
 int VAR_9;

 VAR_7.vhba = VAR_6;
 VAR_7.disk_size = VAR_0 << 20;
 VAR_7.disk = FUNC_3(VAR_7.disk_size, VAR_2, VAR_3|VAR_4);
 VAR_6->private = &VAR_7;
 FUNC_4("setting luns");
 FUNC_2(&VAR_8);
 if (VAR_8.tv_usec & 0x1) {
  VAR_7.rpbitmap[0] |= 1;
 }
 for (VAR_9 = 1; VAR_9 < 8; VAR_9++) {
  if (FUNC_1() & 1) {
   FUNC_4(" %d", VAR_9);
   VAR_7.rpbitmap[0] |= (1 << VAR_9);
  }
 }
 for (VAR_9 = 8; VAR_9 < VAR_1; VAR_9++) {
  if ((FUNC_1() % VAR_9) == 0) {
   VAR_7.rpbitmap[VAR_9 >> 3] |= (1 << (VAR_9 & 0x7));
   FUNC_4(" %d", VAR_9);
  }
 }
 FUNC_4("\n");
 FUNC_0(&VAR_7.qt, 0, VAR_5, &VAR_7);
}
