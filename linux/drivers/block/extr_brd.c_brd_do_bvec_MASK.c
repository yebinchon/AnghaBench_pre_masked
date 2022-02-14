
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct brd_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (void*,struct brd_device*,int ,unsigned int) ;
 int FUNC_1 (struct brd_device*,void*,int ,unsigned int) ;
 int FUNC_2 (struct brd_device*,int ,unsigned int) ;
 int FUNC_3 (struct page*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7(struct brd_device *VAR_0, struct page *VAR_1,
   unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4,
   sector_t VAR_5)
{
 void *VAR_6;
 int VAR_7 = 0;

 if (FUNC_6(VAR_4)) {
  VAR_7 = FUNC_2(VAR_0, VAR_5, VAR_2);
  if (VAR_7)
   goto out;
 }

 VAR_6 = FUNC_4(VAR_1);
 if (!FUNC_6(VAR_4)) {
  FUNC_0(VAR_6 + VAR_3, VAR_0, VAR_5, VAR_2);
  FUNC_3(VAR_1);
 } else {
  FUNC_3(VAR_1);
  FUNC_1(VAR_0, VAR_6 + VAR_3, VAR_5, VAR_2);
 }
 FUNC_5(VAR_6);

out:
 return VAR_7;
}
