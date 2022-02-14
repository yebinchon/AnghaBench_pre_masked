
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct fpga_manager {TYPE_1__* mops; } ;
struct fpga_image_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ write; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct fpga_manager*,struct fpga_image_info*,char const*,size_t) ;
 int FUNC_2 (struct fpga_manager*,struct fpga_image_info*,struct sg_table*) ;
 scalar_t__ FUNC_3 (void const*) ;
 int FUNC_4 (struct page**) ;
 struct page** FUNC_5 (int,int,int ) ;
 struct page* FUNC_6 (void*) ;
 char const* FUNC_7 (char const*) ;
 int FUNC_8 (struct sg_table*,struct page**,int,char const*,size_t,int ) ;
 int FUNC_9 (struct sg_table*) ;
 struct page* FUNC_10 (void const*) ;

__attribute__((used)) static int FUNC_11(struct fpga_manager *VAR_4,
        struct fpga_image_info *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct page **VAR_8;
 struct sg_table VAR_9;
 const void *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;






 if (VAR_4->mops->write)
  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);





 VAR_11 = FUNC_0((unsigned long)VAR_6 + VAR_7, VAR_3) -
     (unsigned long)VAR_6 / VAR_3;
 VAR_8 = FUNC_5(VAR_11, sizeof(struct page *), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = VAR_6 - FUNC_7(VAR_6);
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  if (FUNC_3(VAR_10))
   VAR_8[VAR_12] = FUNC_10(VAR_10);
  else
   VAR_8[VAR_12] = FUNC_6((void *)VAR_10);
  if (!VAR_8[VAR_12]) {
   FUNC_4(VAR_8);
   return -VAR_0;
  }
  VAR_10 += VAR_3;
 }





 VAR_13 = FUNC_8(&VAR_9, VAR_8, VAR_12, FUNC_7(VAR_6),
           VAR_7, VAR_2);
 FUNC_4(VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_4, VAR_5, &VAR_9);
 FUNC_9(&VAR_9);

 return VAR_13;
}
