
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cg {int cg_time; int cg_old_time; int cg_ckhash; } ;
struct buf {int b_flags; int b_vflags; int b_xflags; scalar_t__ b_data; int b_bcount; int b_dep; int b_vp; int * b_iodone; int b_offset; int b_blkno; int b_lblkno; int b_bufobj; int b_bufsize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,struct buf*,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_11 ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct buf*) ;
 int FUNC_12 (struct buf*) ;
 int FUNC_13 (struct buf*) ;
 int FUNC_14 (long,scalar_t__,int ) ;
 scalar_t__ VAR_12 ;
 int * VAR_13 ;
 struct buf* FUNC_15 (int ,int ) ;
 int FUNC_16 (scalar_t__,scalar_t__,int ) ;
 int FUNC_17 (int*,int ,int ,char*,int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,struct buf*) ;
 scalar_t__ FUNC_20 (struct buf*,struct buf*) ;
 int VAR_14 ;
 int FUNC_21 () ;

__attribute__((used)) static int
FUNC_22(struct buf *VAR_15)
{
 struct buf *VAR_16;
 struct cg *VAR_17;

 FUNC_4(VAR_10, "bufwrite(%p) vp %p flags %X", VAR_15, VAR_15->b_vp, VAR_15->b_flags);
 if (VAR_15->b_flags & VAR_8) {
  FUNC_9(VAR_15);
  return (0);
 }

 if (!FUNC_3(VAR_15))
  FUNC_18("bufwrite: buffer is not busy???");





 FUNC_0(VAR_15->b_bufobj);
 if (VAR_15->b_vflags & VAR_1) {
  if (VAR_15->b_flags & VAR_7) {
   FUNC_2(VAR_15->b_bufobj);
   FUNC_7(VAR_15);
   return (0);
  }
  VAR_15->b_vflags |= VAR_2;
  FUNC_17(&VAR_15->b_xflags, FUNC_1(VAR_15->b_bufobj), VAR_11,
      "bwrbg", 0);
  if (VAR_15->b_vflags & VAR_1)
   FUNC_18("bufwrite: still writing");
 }
 VAR_15->b_vflags &= ~VAR_0;
 FUNC_2(VAR_15->b_bufobj);
 if (VAR_12 && (VAR_15->b_xflags & VAR_4) &&
     (VAR_15->b_flags & VAR_7) &&
     !FUNC_21() &&
     !FUNC_10()) {
  FUNC_5(VAR_15->b_iodone == ((void*)0),
      ("bufwrite: needs chained iodone (%p)", VAR_15->b_iodone));


  VAR_16 = FUNC_15(VAR_15->b_bufsize, VAR_9);
  if (VAR_16 == ((void*)0))
   goto normal_write;

  FUNC_5(FUNC_11(VAR_15), ("Unmapped cg"));
  FUNC_16(VAR_16->b_data, VAR_15->b_data, VAR_15->b_bufsize);
  FUNC_0(VAR_15->b_bufobj);
  VAR_15->b_vflags |= VAR_1;
  FUNC_2(VAR_15->b_bufobj);
  VAR_16->b_xflags |=
      (VAR_15->b_xflags & VAR_6) | VAR_3;
  VAR_16->b_lblkno = VAR_15->b_lblkno;
  VAR_16->b_blkno = VAR_15->b_blkno;
  VAR_16->b_offset = VAR_15->b_offset;
  VAR_16->b_iodone = VAR_13;
  VAR_16->b_flags |= VAR_7;
  VAR_16->b_flags &= ~VAR_8;
  FUNC_19(VAR_15->b_vp, VAR_16);
  FUNC_13(VAR_15);
  if ((VAR_15->b_xflags & VAR_5) != 0) {
   VAR_17 = (struct cg *)VAR_15->b_data;
   VAR_17->cg_ckhash = 0;
   VAR_17->cg_ckhash =
       FUNC_14(~0L, VAR_15->b_data, VAR_15->b_bcount);
  }
  FUNC_8(VAR_15);
  VAR_15 = VAR_16;
 } else

  FUNC_13(VAR_15);



normal_write:



 if ((VAR_15->b_xflags & VAR_5) != 0) {
  VAR_17 = (struct cg *)VAR_15->b_data;
  VAR_17->cg_old_time = VAR_17->cg_time = VAR_14;
 }
 return (FUNC_12(VAR_15));
}
