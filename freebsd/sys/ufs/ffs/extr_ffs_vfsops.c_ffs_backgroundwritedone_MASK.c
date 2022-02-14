
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct buf {int b_ioflags; int b_vflags; int b_xflags; int b_flags; int b_dep; int b_lblkno; struct bufobj* b_bufobj; } ;


 int VAR_0 ;
 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 struct buf* FUNC_6 (struct bufobj*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct buf*,struct buf*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct buf *VAR_7)
{
 struct bufobj *VAR_8;
 struct buf *VAR_9;




 VAR_8 = VAR_7->b_bufobj;
 FUNC_0(VAR_8);
 if ((VAR_9 = FUNC_6(VAR_7->b_bufobj, VAR_7->b_lblkno)) == ((void*)0))
  FUNC_7("backgroundwritedone: lost buffer");





 if ((VAR_7->b_ioflags & VAR_0) != 0)
  VAR_9->b_vflags |= VAR_1;
 FUNC_1(VAR_8);



 if (!FUNC_3(&VAR_7->b_dep) && (VAR_7->b_ioflags & VAR_0) == 0)
  FUNC_4(VAR_7);
 VAR_7->b_flags |= VAR_6;
 VAR_7->b_flags &= ~VAR_4;
 FUNC_8(VAR_7);







 if ((VAR_7->b_ioflags & VAR_0) != 0)
  VAR_7->b_flags |= VAR_5;
 FUNC_5(VAR_7);
 FUNC_0(VAR_8);






 FUNC_2((VAR_9->b_vflags & VAR_2),
     ("backgroundwritedone: lost buffer2"));
 VAR_9->b_vflags &= ~VAR_2;
 if (VAR_9->b_vflags & VAR_3) {
  VAR_9->b_vflags &= ~VAR_3;
  FUNC_10(&VAR_9->b_xflags);
 }
 FUNC_1(VAR_8);
}
