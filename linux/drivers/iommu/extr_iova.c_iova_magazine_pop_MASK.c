
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_magazine {int size; unsigned long* pfns; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iova_magazine*) ;

__attribute__((used)) static unsigned long FUNC_2(struct iova_magazine *VAR_0,
           unsigned long VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_0(FUNC_1(VAR_0));


 for (VAR_2 = VAR_0->size - 1; VAR_0->pfns[VAR_2] > VAR_1; VAR_2--)
  if (VAR_2 == 0)
   return 0;


 VAR_3 = VAR_0->pfns[VAR_2];
 VAR_0->pfns[VAR_2] = VAR_0->pfns[--VAR_0->size];

 return VAR_3;
}
