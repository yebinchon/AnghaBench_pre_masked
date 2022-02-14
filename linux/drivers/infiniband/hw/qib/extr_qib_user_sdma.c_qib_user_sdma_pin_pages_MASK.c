
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_user_sdma_queue {int dummy; } ;
struct qib_user_sdma_pkt {int dummy; } ;
struct qib_devdata {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long,int,int ,struct page**) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct qib_devdata const*,struct qib_user_sdma_queue*,struct qib_user_sdma_pkt*,struct page*,int,unsigned long,int,int *) ;

__attribute__((used)) static int FUNC_3(const struct qib_devdata *VAR_4,
       struct qib_user_sdma_queue *VAR_5,
       struct qib_user_sdma_pkt *VAR_6,
       unsigned long VAR_7, int VAR_8, int VAR_9)
{
 struct page *VAR_10[8];
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 while (VAR_9) {
  if (VAR_9 > 8)
   VAR_12 = 8;
  else
   VAR_12 = VAR_9;

  VAR_13 = FUNC_0(VAR_7, VAR_12, VAR_1, VAR_10);
  if (VAR_13 != VAR_12) {
   VAR_11 = 0;
   VAR_12 = VAR_13;
   VAR_13 = -VAR_0;
   goto free_pages;
  }

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

   unsigned long VAR_14 = VAR_7 & ~VAR_2;
   int VAR_15 = ((VAR_14 + VAR_8) > VAR_3) ?
    (VAR_3 - VAR_14) : VAR_8;

   VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6,
    VAR_10[VAR_11], 1, VAR_14, VAR_15, ((void*)0));
   if (VAR_13 < 0) {



    VAR_11++;
    goto free_pages;
   }

   VAR_7 += VAR_15;
   VAR_8 -= VAR_15;
  }

  VAR_9 -= VAR_12;
 }

 goto done;


free_pages:
 while (VAR_11 < VAR_12)
  FUNC_1(VAR_10[VAR_11++]);

done:
 return VAR_13;
}
