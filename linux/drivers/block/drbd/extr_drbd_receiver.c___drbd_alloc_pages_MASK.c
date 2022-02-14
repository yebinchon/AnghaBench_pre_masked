
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drbd_device {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,struct page*,struct page*) ;
 struct page* FUNC_2 (int *,unsigned int) ;
 struct page* FUNC_3 (struct page*,int *) ;
 int FUNC_4 (struct page*,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct page *FUNC_7(struct drbd_device *VAR_4,
           unsigned int VAR_5)
{
 struct page *VAR_6 = ((void*)0);
 struct page *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;



 if (VAR_3 >= VAR_5) {
  FUNC_5(&VAR_1);
  VAR_6 = FUNC_2(&VAR_2, VAR_5);
  if (VAR_6)
   VAR_3 -= VAR_5;
  FUNC_6(&VAR_1);
  if (VAR_6)
   return VAR_6;
 }




 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_0(VAR_0);
  if (!VAR_7)
   break;
  FUNC_4(VAR_7, (unsigned long)VAR_6);
  VAR_6 = VAR_7;
 }

 if (VAR_8 == VAR_5)
  return VAR_6;




 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_6, ((void*)0));
  FUNC_5(&VAR_1);
  FUNC_1(&VAR_2, VAR_6, VAR_7);
  VAR_3 += VAR_8;
  FUNC_6(&VAR_1);
 }
 return ((void*)0);
}
