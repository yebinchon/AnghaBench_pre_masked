
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcons_state {scalar_t__ paddr; int flags; TYPE_1__* port; } ;
struct dcons_ch {int size; scalar_t__ buf; int gen; int pos; } ;
struct dcons_buf {scalar_t__ magic; int * ioffset; int * ooffset; int * iptr; int * isize; int * optr; int * osize; int version; } ;
typedef scalar_t__ off_t ;
typedef int ebuf ;
struct TYPE_2__ {struct dcons_ch i; struct dcons_ch o; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct dcons_state*) ;
 int FUNC_2 (struct dcons_state*,int,char*) ;
 scalar_t__ FUNC_3 (struct dcons_state*,struct dcons_buf*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*,int,char*,char*,...) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_8(struct dcons_state *VAR_9)
{
 char VAR_10[64];
 struct dcons_buf VAR_11;
 int VAR_12;
 if (FUNC_3(VAR_9, &VAR_11, VAR_1, VAR_9->paddr) < 0) {
  FUNC_2(VAR_9, 0, "read header failed");
  return (-1);
 }
 if (VAR_11.magic != FUNC_4(VAR_2)) {
  if ((VAR_9->flags & VAR_7) !=0)
   VAR_9->paddr = 0;
  FUNC_7(VAR_10, sizeof(VAR_10), "wrong magic 0x%08x", VAR_11.magic);
  FUNC_2(VAR_9, 0, VAR_10);
  return (-1);
 }
 if (FUNC_5(VAR_11.version) != VAR_5) {
  FUNC_7(VAR_10, sizeof(VAR_10),

      "wrong version %ld,%d",



      FUNC_5(VAR_11.version), VAR_5);

  FUNC_2(VAR_9, 0, VAR_10);
  return (-1);
 }

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  struct dcons_ch *VAR_13, *VAR_14;
  off_t VAR_15;
  int VAR_16 = 0;

  VAR_13 = &VAR_9->port[VAR_12].o;
  VAR_15 = VAR_9->paddr + FUNC_5(VAR_11.ooffset[VAR_12]);
  VAR_13->size = FUNC_5(VAR_11.osize[VAR_12]);

  if (VAR_15 != VAR_13->buf) {

   VAR_16 = 1;
   VAR_13->gen = FUNC_5(VAR_11.optr[VAR_12]) >> VAR_0;
   VAR_13->pos = FUNC_5(VAR_11.optr[VAR_12]) & VAR_4;
   VAR_13->buf = VAR_15;
  }

  VAR_14 = &VAR_9->port[VAR_12].i;
  VAR_14->size = FUNC_5(VAR_11.isize[VAR_12]);
  VAR_14->gen = FUNC_5(VAR_11.iptr[VAR_12]) >> VAR_0;
  VAR_14->pos = FUNC_5(VAR_11.iptr[VAR_12]) & VAR_4;
  VAR_14->buf = VAR_9->paddr + FUNC_5(VAR_11.ioffset[VAR_12]);

  if (VAR_8) {
   FUNC_6("port %d   size offset   gen   pos\n", VAR_12);

   FUNC_6("output: %5d %6ld %5d %5d\n"
    "input : %5d %6ld %5d %5d\n",




   VAR_13->size, FUNC_5(VAR_11.ooffset[VAR_12]), VAR_13->gen, VAR_13->pos,
   VAR_14->size, FUNC_5(VAR_11.ioffset[VAR_12]), VAR_14->gen, VAR_14->pos);
  }

  if (FUNC_0(&VAR_9->port[VAR_12]) && VAR_16 &&
      (VAR_9->flags & VAR_6) !=0) {
   if (VAR_13->gen > 0)
    VAR_13->gen --;
   else
    VAR_13->pos = 0;
  }
 }
 FUNC_2(VAR_9, 1, ((void*)0));
 return(0);
}
