
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {int dummy; } ;
struct qib_user_sdma_pkt {int dummy; } ;
struct qib_devdata {int dummy; } ;
struct page {int dummy; } ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 char* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct qib_devdata const*,struct qib_user_sdma_queue*,struct qib_user_sdma_pkt*,struct page*,int ,int ,int,void*) ;

__attribute__((used)) static int FUNC_6(const struct qib_devdata *VAR_3,
      struct qib_user_sdma_queue *VAR_4,
      struct qib_user_sdma_pkt *VAR_5,
      const struct iovec *VAR_6,
      unsigned long VAR_7)
{
 int VAR_8 = 0;
 struct page *VAR_9 = FUNC_1(VAR_2);
 void *VAR_10;
 char *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto done;
 }

 VAR_11 = FUNC_3(VAR_9);
 VAR_10 = VAR_11;
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  int VAR_14;

  VAR_14 = FUNC_2(VAR_11,
          VAR_6[VAR_12].iov_base, VAR_6[VAR_12].iov_len);
  if (VAR_14) {
   VAR_8 = -VAR_0;
   goto free_unmap;
  }

  VAR_11 += VAR_6[VAR_12].iov_len;
  VAR_13 += VAR_6[VAR_12].iov_len;
 }

 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5,
   VAR_9, 0, 0, VAR_13, VAR_10);
 goto done;

free_unmap:
 FUNC_4(VAR_9);
 FUNC_0(VAR_9);
done:
 return VAR_8;
}
