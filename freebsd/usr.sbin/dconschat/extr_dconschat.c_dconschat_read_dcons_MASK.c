
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct dcons_state {TYPE_1__* port; } ;
struct dcons_ch {int gen; int pos; int size; scalar_t__ buf; } ;
struct TYPE_2__ {int optr; struct dcons_ch o; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dcons_state*,int ,char*) ;
 int FUNC_2 (struct dcons_state*,char*,int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct dcons_state *VAR_9, int VAR_10, char *VAR_11, int VAR_12)
{
 struct dcons_ch *VAR_13;
 u_int32_t VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 int VAR_21 = VAR_5;

 VAR_13 = &VAR_9->port[VAR_10].o;
 VAR_14 = VAR_9->port[VAR_10].optr;
 VAR_16 = VAR_14 >> VAR_1;
 VAR_15 = VAR_14 & VAR_2;
 if (VAR_16 == VAR_13->gen && VAR_15 == VAR_13->pos)
  return (-1);

 VAR_17 = FUNC_0(VAR_13->gen);

 if (VAR_16 == VAR_13->gen) {
  if (VAR_15 > VAR_13->pos)
   goto ok;
  VAR_20 = VAR_13->size * VAR_0 - VAR_13->pos;
  VAR_13->pos = 0;
 } else if (VAR_16 == VAR_17) {
  if (VAR_15 <= VAR_13->pos)
   goto ok;
  VAR_20 = VAR_15 - VAR_13->pos;
  VAR_13->pos = VAR_15;
 } else {
  VAR_20 = VAR_16 - VAR_13->gen;
  if (VAR_20 < 0)
   VAR_20 += VAR_0;
  if (VAR_8)
   FUNC_4("[genskip %d]", VAR_20);
  VAR_20 = VAR_20 * VAR_13->size - VAR_13->pos;
  VAR_13->pos = 0;
  VAR_13->gen = VAR_16;
 }


 if (VAR_8)
  FUNC_4("[lost %d]", VAR_20);
ok:
 if (VAR_16 == VAR_13->gen)
  VAR_18 = VAR_15 - VAR_13->pos;
 else
  VAR_18 = VAR_13->size - VAR_13->pos;

 if (VAR_18 > VAR_4)
  VAR_18 = VAR_4;
 if (VAR_18 > VAR_12)
  VAR_18 = VAR_12;


 if (VAR_8 == 1)
  FUNC_4("[%d]", VAR_18); FUNC_3(VAR_7);


again:
 VAR_19 = FUNC_2(VAR_9, VAR_11, VAR_18, VAR_13->buf + VAR_13->pos);
 if (VAR_19 < 0) {
  if (VAR_6 == VAR_3)
   if (VAR_21 -- > 0)
    goto again;
  FUNC_1(VAR_9, 0, "read buffer failed");
  return(-1);
 }
 if (VAR_19 != VAR_18)
  FUNC_5("dlen(%d) != rlen(%d)\n", VAR_19, VAR_18);
 VAR_13->pos += VAR_19;
 if (VAR_13->pos >= VAR_13->size) {
  VAR_13->gen = VAR_17;
  VAR_13->pos = 0;
  if (VAR_8)
   FUNC_4("read_dcons: gen=%d", VAR_13->gen);
 }
 return (VAR_19);
}
