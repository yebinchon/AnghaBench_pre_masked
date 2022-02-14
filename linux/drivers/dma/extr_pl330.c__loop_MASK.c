
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl330_dmac {int dummy; } ;
struct _xfer_spec {int dummy; } ;
struct _arg_LPEND {int forever; int loop; int bjump; void* cond; } ;


 void* VAR_0 ;
 int FUNC_0 (struct pl330_dmac*,unsigned int,int *,struct _xfer_spec const*,int) ;
 int FUNC_1 (unsigned int,int *,int,unsigned int) ;
 int FUNC_2 (unsigned int,int *,struct _arg_LPEND*) ;

__attribute__((used)) static inline int FUNC_3(struct pl330_dmac *VAR_1, unsigned VAR_2, u8 VAR_3[],
  unsigned long *VAR_4, const struct _xfer_spec *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned VAR_12, VAR_13, VAR_14, VAR_15;
 struct _arg_LPEND VAR_16;

 if (*VAR_4 == 1)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, 1);


 if (*VAR_4 >= 256*256) {
  VAR_13 = 256;
  VAR_12 = 256;
  VAR_6 = *VAR_4 / VAR_13 / VAR_12;
 } else if (*VAR_4 > 256) {
  VAR_13 = 256;
  VAR_12 = *VAR_4 / VAR_13;
  VAR_6 = 1;
 } else {
  VAR_13 = *VAR_4;
  VAR_12 = 0;
  VAR_6 = 1;
 }

 VAR_8 = FUNC_1(1, VAR_3, 0, 0);
 VAR_10 = FUNC_0(VAR_1, 1, VAR_3, VAR_5, 1);

 VAR_16.cond = VAR_0;
 VAR_16.forever = 0;
 VAR_16.loop = 0;
 VAR_16.bjump = 0;
 VAR_9 = FUNC_2(1, VAR_3, &VAR_16);

 if (VAR_12) {
  VAR_8 *= 2;
  VAR_9 *= 2;
 }






 VAR_7 = (255 - (VAR_8 + VAR_9)) / VAR_10;

 VAR_6 = (VAR_7 < VAR_6) ? VAR_7 : VAR_6;

 VAR_11 = 0;

 if (VAR_12) {
  VAR_11 += FUNC_1(VAR_2, &VAR_3[VAR_11], 0, VAR_12);
  VAR_14 = VAR_11;
 }

 VAR_11 += FUNC_1(VAR_2, &VAR_3[VAR_11], 1, VAR_13);
 VAR_15 = VAR_11;

 VAR_11 += FUNC_0(VAR_1, VAR_2, &VAR_3[VAR_11], VAR_5, VAR_6);

 VAR_16.cond = VAR_0;
 VAR_16.forever = 0;
 VAR_16.loop = 1;
 VAR_16.bjump = VAR_11 - VAR_15;
 VAR_11 += FUNC_2(VAR_2, &VAR_3[VAR_11], &VAR_16);

 if (VAR_12) {
  VAR_16.cond = VAR_0;
  VAR_16.forever = 0;
  VAR_16.loop = 0;
  VAR_16.bjump = VAR_11 - VAR_14;
  VAR_11 += FUNC_2(VAR_2, &VAR_3[VAR_11], &VAR_16);
 }

 *VAR_4 = VAR_13 * VAR_6;
 if (VAR_12)
  *VAR_4 *= VAR_12;

 return VAR_11;
}
