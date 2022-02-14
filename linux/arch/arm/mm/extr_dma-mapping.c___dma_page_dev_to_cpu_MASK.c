
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef scalar_t__ phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*,unsigned long,size_t,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 unsigned long FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct page *VAR_4, unsigned long VAR_5,
 size_t VAR_6, enum dma_data_direction VAR_7)
{
 phys_addr_t VAR_8 = FUNC_3(VAR_4) + VAR_5;



 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_8, VAR_8 + VAR_6);

  FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3);
 }




 if (VAR_7 != VAR_0 && VAR_6 >= VAR_1) {
  unsigned long VAR_9;
  size_t VAR_10 = VAR_6;

  VAR_9 = FUNC_2(VAR_4) + VAR_5 / VAR_1;
  VAR_5 %= VAR_1;
  if (VAR_5) {
   VAR_9++;
   VAR_10 -= VAR_1 - VAR_5;
  }
  while (VAR_10 >= VAR_1) {
   VAR_4 = FUNC_4(VAR_9++);
   FUNC_5(VAR_2, &VAR_4->flags);
   VAR_10 -= VAR_1;
  }
 }
}
