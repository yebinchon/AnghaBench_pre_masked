
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_change_data {void* clear_mask; void* set_mask; } ;
typedef void* pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long,unsigned long,int ,struct page_change_data*) ;
 int VAR_7 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_9, int VAR_10,
    pgprot_t VAR_11, pgprot_t VAR_12)
{
 unsigned long VAR_13 = VAR_9 & VAR_3;
 unsigned long VAR_14 = FUNC_0(VAR_9) + VAR_10 * VAR_4;
 unsigned long VAR_15 = VAR_14 - VAR_13;
 int VAR_16;
 struct page_change_data VAR_17;

 FUNC_1(VAR_13 != VAR_9);

 if (!VAR_15)
  return 0;

 if (!FUNC_4(VAR_13, VAR_15, VAR_2, VAR_1) &&
     !FUNC_4(VAR_13, VAR_15, VAR_6, VAR_5))
  return -VAR_0;

 VAR_17.set_mask = VAR_11;
 VAR_17.clear_mask = VAR_12;

 VAR_16 = FUNC_2(&VAR_8, VAR_13, VAR_15, VAR_7,
     &VAR_17);

 FUNC_3(VAR_13, VAR_14);
 return VAR_16;
}
