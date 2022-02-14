
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int file; int user_name; } ;
struct dma_fence {scalar_t__ context; int ops; int seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct dma_fence**,int*,struct dma_fence*) ;
 struct dma_fence* FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int ) ;
 struct dma_fence** FUNC_4 (struct sync_file*,int*) ;
 struct dma_fence** FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct dma_fence**) ;
 struct dma_fence** FUNC_7 (struct dma_fence**,int,int ) ;
 int FUNC_8 (int ,char const*,int) ;
 struct sync_file* FUNC_9 () ;
 scalar_t__ FUNC_10 (struct sync_file*,struct dma_fence**,int) ;

__attribute__((used)) static struct sync_file *FUNC_11(const char *VAR_2, struct sync_file *VAR_3,
      struct sync_file *VAR_4)
{
 struct sync_file *VAR_5;
 struct dma_fence **VAR_6, **VAR_7, **VAR_8, **VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_5 = FUNC_9();
 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_4(VAR_3, &VAR_14);
 VAR_9 = FUNC_4(VAR_4, &VAR_15);
 if (VAR_14 > VAR_1 - VAR_15)
  return ((void*)0);

 VAR_13 = VAR_14 + VAR_15;

 VAR_6 = FUNC_5(VAR_13, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  goto err;
 for (VAR_10 = VAR_11 = VAR_12 = 0; VAR_11 < VAR_14 && VAR_12 < VAR_15; ) {
  struct dma_fence *VAR_16 = VAR_8[VAR_11];
  struct dma_fence *VAR_17 = VAR_9[VAR_12];

  if (VAR_16->context < VAR_17->context) {
   FUNC_1(VAR_6, &VAR_10, VAR_16);

   VAR_11++;
  } else if (VAR_16->context > VAR_17->context) {
   FUNC_1(VAR_6, &VAR_10, VAR_17);

   VAR_12++;
  } else {
   if (FUNC_0(VAR_16->seqno, VAR_17->seqno,
       VAR_16->ops))
    FUNC_1(VAR_6, &VAR_10, VAR_16);
   else
    FUNC_1(VAR_6, &VAR_10, VAR_17);

   VAR_11++;
   VAR_12++;
  }
 }

 for (; VAR_11 < VAR_14; VAR_11++)
  FUNC_1(VAR_6, &VAR_10, VAR_8[VAR_11]);

 for (; VAR_12 < VAR_15; VAR_12++)
  FUNC_1(VAR_6, &VAR_10, VAR_9[VAR_12]);

 if (VAR_10 == 0)
  VAR_6[VAR_10++] = FUNC_2(VAR_8[0]);

 if (VAR_13 > VAR_10) {
  VAR_7 = FUNC_7(VAR_6, VAR_10 * sizeof(*VAR_6),
      VAR_0);
  if (!VAR_7)
   goto err;

  VAR_6 = VAR_7;
 }

 if (FUNC_10(VAR_5, VAR_6, VAR_10) < 0) {
  FUNC_6(VAR_6);
  goto err;
 }

 FUNC_8(VAR_5->user_name, VAR_2, sizeof(VAR_5->user_name));
 return VAR_5;

err:
 FUNC_3(VAR_5->file);
 return ((void*)0);

}
