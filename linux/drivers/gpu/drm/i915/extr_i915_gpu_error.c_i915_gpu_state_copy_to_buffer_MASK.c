
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ dma_address; size_t length; size_t offset; } ;
struct i915_gpu_state {int fit; struct scatterlist* sgl; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 struct scatterlist* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scatterlist*) ;
 int FUNC_3 (struct i915_gpu_state*) ;
 int FUNC_4 (char*,scalar_t__,size_t) ;
 size_t FUNC_5 (size_t,size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 struct scatterlist* FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct scatterlist*) ;

ssize_t FUNC_11(struct i915_gpu_state *VAR_0,
          char *VAR_1, loff_t VAR_2, size_t VAR_3)
{
 struct scatterlist *VAR_4;
 size_t VAR_5;
 loff_t VAR_6;
 int VAR_7;

 if (!VAR_0 || !VAR_3)
  return 0;

 VAR_7 = FUNC_3(VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_1(VAR_0->fit);
 if (!VAR_4 || VAR_2 < VAR_4->dma_address)
  VAR_4 = VAR_0->sgl;
 if (!VAR_4)
  return 0;

 VAR_6 = VAR_4->dma_address;
 VAR_5 = 0;
 do {
  size_t VAR_8, VAR_9;

  if (FUNC_8(VAR_4)) {
   VAR_4 = FUNC_7(VAR_4);
   FUNC_0(FUNC_8(VAR_4));
  }

  VAR_8 = VAR_4->length;
  if (VAR_6 + VAR_8 <= VAR_2) {
   VAR_6 += VAR_8;
   continue;
  }

  VAR_9 = VAR_4->offset;
  if (VAR_6 < VAR_2) {
   FUNC_0(VAR_2 - VAR_6 > VAR_8);
   VAR_8 -= VAR_2 - VAR_6;
   VAR_9 += VAR_2 - VAR_6;
   VAR_6 = VAR_2;
  }

  VAR_8 = FUNC_5(VAR_8, VAR_3);
  FUNC_0(!VAR_8 || VAR_8 > VAR_4->length);

  FUNC_4(VAR_1, FUNC_6(FUNC_10(VAR_4)) + VAR_9, VAR_8);

  VAR_5 += VAR_8;
  VAR_6 += VAR_8;

  VAR_1 += VAR_8;
  VAR_3 -= VAR_8;
  if (!VAR_3) {
   FUNC_2(VAR_0->fit, VAR_4);
   break;
  }
 } while (!FUNC_9(VAR_4++));

 return VAR_5;
}
