
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_magazine {unsigned long* pfns; int size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iova_magazine*) ;

__attribute__((used)) static void FUNC_2(struct iova_magazine *VAR_0, unsigned long VAR_1)
{
 FUNC_0(FUNC_1(VAR_0));

 VAR_0->pfns[VAR_0->size++] = VAR_1;
}
