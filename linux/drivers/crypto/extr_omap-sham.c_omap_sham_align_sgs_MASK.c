
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int offset; } ;
struct omap_sham_reqctx {int offset; int sg_len; struct scatterlist* sg; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct omap_sham_reqctx*,struct scatterlist*,int,int) ;
 int FUNC_3 (struct omap_sham_reqctx*,struct scatterlist*,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_7(struct scatterlist *VAR_1,
          int VAR_2, int VAR_3, bool VAR_4,
          struct omap_sham_reqctx *VAR_5)
{
 int VAR_6 = 0;
 bool VAR_7 = 1;
 bool VAR_8 = 1;
 struct scatterlist *VAR_9 = VAR_1;
 int VAR_10;
 int VAR_11 = VAR_5->offset;

 if (!VAR_1 || !VAR_1->length || !VAR_2)
  return 0;

 VAR_10 = VAR_2;

 if (VAR_11)
  VAR_8 = 0;

 if (VAR_4)
  VAR_10 = FUNC_0(VAR_10, VAR_3) * VAR_3;
 else
  VAR_10 = (VAR_10 - 1) / VAR_3 * VAR_3;

 if (VAR_2 != VAR_10)
  VAR_8 = 0;

 while (VAR_2 > 0 && VAR_9) {
  VAR_6++;
  if (VAR_11 < VAR_9->length) {
   if (!FUNC_1(VAR_11 + VAR_9->offset, 4)) {
    VAR_7 = 0;
    break;
   }

   if (!FUNC_1(VAR_9->length - VAR_11, VAR_3)) {
    VAR_7 = 0;
    break;
   }
  }

  if (VAR_11) {
   VAR_11 -= VAR_9->length;
   if (VAR_11 < 0) {
    VAR_2 += VAR_11;
    VAR_11 = 0;
   }
  } else {
   VAR_2 -= VAR_9->length;
  }

  VAR_9 = FUNC_5(VAR_9);

  if (VAR_2 < 0) {
   VAR_8 = 0;
   break;
  }
 }

 if (!VAR_7)
  return FUNC_3(VAR_5, VAR_1, VAR_3, VAR_10);
 else if (!VAR_8)
  return FUNC_2(VAR_5, VAR_1, VAR_3, VAR_10);

 VAR_5->sg_len = VAR_6;
 VAR_5->sg = VAR_1;

 return 0;
}
