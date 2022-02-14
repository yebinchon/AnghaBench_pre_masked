
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockbuf {TYPE_1__* sb_mb; } ;
struct packet {int len; scalar_t__ offset; scalar_t__ moff; TYPE_1__* m; int n; } ;
struct TYPE_2__ {int m_nextpkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet*,unsigned long) ;
 int FUNC_1 (struct sockbuf*) ;

__attribute__((used)) static int
FUNC_2(struct sockbuf *VAR_2) {
 unsigned long VAR_3;
 struct packet VAR_4, *VAR_5 = &VAR_4;

 if (FUNC_1(VAR_2) < 2)
  return VAR_1;

 VAR_4.m = VAR_2->sb_mb;
 VAR_4.n = VAR_4.m->m_nextpkt;
 VAR_4.moff = 0;
 VAR_4.offset = 0;
 VAR_4.len = FUNC_1(VAR_2);

 FUNC_0(VAR_5, VAR_3);
 if (VAR_3 + 2 > VAR_4.len)
  return VAR_1;

 return VAR_0;
}
